//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You! ♥ Rama ♥

#include "RamaJoyPatrol.h"

//For You To Do: Make a BP Native Event so user can decide the CurrentTime
#include "Misc/App.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

//////////////////////////////////////////////////////////////////////////
// URamaJoyPatrol

URamaJoyPatrol::URamaJoyPatrol(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{ 
	bAutoActivate = true;
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_PrePhysics;
	 
	bTickInEditor = false;
}      

void URamaJoyPatrol::InitializeComponent()
{
	Super::InitializeComponent();
	//~~~~~~~~~~~~~~~~~~~~~
	
	PrevLocation = GetActorMeasureLocation();
}

FVector URamaJoyPatrol::GetActorMeasureLocation_Implementation() const
{
	//Character
	ACharacter* AsCharacter = Cast<ACharacter>(GetOwner());
	if(AsCharacter && AsCharacter->GetCharacterMovement())
	{ 
		//Nav Agent Interface
		// I do this to maximize changes that the AI Navigation System will accept the new move request!
		// Even better would be to do a nav projection, but that is for you to do in BP
		return AsCharacter->GetCharacterMovement()->GetActorFeetLocation();
	}
	
	//Actor Location
	return (GetOwner()) ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
}

void URamaJoyPatrol::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) 
{
	Super::TickComponent(DeltaTime,TickType,ThisTickFunction);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 
	//No Owner?
	if(!GetOwner()) 
	{
		return;
	}
	 
	FVector OwnerLocation = GetActorMeasureLocation();
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//                         Follow Mode
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	if(FollowActor != nullptr)
	{
		CurrentMoveGoal = FollowActor->GetActorLocation();
		 
		//Set HaveVisionOfFollowActor Yourself based on your game logics to decide if the following unit truly has vision of the player!
		//Can thus allow for offset to aim at upper body, still legitimately having vision even if blocked in lower body. 
		
		//Stop if within range of target and have vision of target!
		if(HaveVisionOfFollowActor && FVector::DistSquared(CurrentMoveGoal,OwnerLocation) < FollowStopAtDistance * FollowStopAtDistance)
		{
			PrevLocation = OwnerLocation;
			return;
		}
		   
		///~~~ Stuck Logics ~~~
		//Really its seconds squared but the numbers are prettier to work with in BP when larger than 0.001
		if (FVector::DistSquared(OwnerLocation,PrevLocation) * DeltaTime < MinStuckDistancePerSecond * MinStuckDistancePerSecond)
		{      
			StuckTime += DeltaTime;
			
			if(StuckTime > SecondsOfStuckBeforeMoveOn)
			{	
				//Report to BP that we are stuck! Need ~~~♥ BP Game Designer ♥~~~ Cosmic Assistance! <3 Rama
				if(RamaPatrol_StuckWhileFollowing.IsBound())
				{
					RamaPatrol_StuckWhileFollowing.Broadcast(this, StuckTime);
				}
			}
		} 
		else 
		{
			StuckTime = 0;
		}
				
		
		///~~~
		
		//Perform Movement to get in range or in vision of target!
		if(RamaPatrol_MoveRequest.IsBound())
		{
			RamaPatrol_MoveRequest.Broadcast(this, CurrentMoveGoal);
		}	
		
		PrevLocation = OwnerLocation;
		return;
		//~~~~~
	} 
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//						Patrol / Follow a Path! 
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~ Wait At Way Point Logic ~~~
	
	//User should set this: WaitTimeAtCurrentPosition whenever they want waiting to occur
	
	//Should Wait?
	if(WaitTimeAtCurrentPosition > 0)
	{
		//Should Initialize Wait?
		if(WaitStartTime <= 0)
		{
			WaitStartTime = FApp::GetCurrentTime();
		}
		
		//Time Remaining?
		float WaitTimeRemaining = FApp::GetCurrentTime() - WaitStartTime;
		
		//Keep Waiting?
		if(WaitTimeRemaining < WaitTimeAtCurrentPosition)
		{ 
			if(RamaPatrol_WaitingAtWaypoint.IsBound())
			{
				RamaPatrol_WaitingAtWaypoint.Broadcast(this, WaitTimeRemaining);
			}
			
			return;
		}
	}
	
	//Got here? Reset so wait ends!
	WaitTimeAtCurrentPosition = 0;
	WaitStartTime = 0;
	
	if(!CurrentMoveGoal.IsZero())
	{
		//~~~ Reached Goal? ~~~
		if (FVector::DistSquared(OwnerLocation,CurrentMoveGoal) < MoveGoalRadius * MoveGoalRadius)
		{ 
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//CurrentMoveGoal Set Just Below
			
			//Should Set CurrentMoveGoal in BP or in Your own C++
			if(RamaPatrol_ChooseNextMoveGoal.IsBound())
			{
				RamaPatrol_ChooseNextMoveGoal.Broadcast(this);
			}

			//CurrentMoveGoal Set Just Above
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		}
		
		//~~~ Are We Stuck? ~~~
		else
		{
			//~~~ If Stuck Logic ~~~
			//! Jump to next point if stuck
			
			//Really its seconds squared but the numbers are prettier to work with in BP when larger than 0.001
			if (FVector::DistSquared(OwnerLocation,PrevLocation) * DeltaTime < MinStuckDistancePerSecond * MinStuckDistancePerSecond)
			{      
				StuckTime += DeltaTime;
				
				if(StuckTime > SecondsOfStuckBeforeMoveOn)
				{
					if(RamaPatrol_SkippedBecauseStuck.IsBound())
					{
						RamaPatrol_SkippedBecauseStuck.Broadcast(this, CurrentMoveGoal);
					}	
					  
					if(MoveToNextWayPointIfStuck)
					{ 
						StuckTime = 0;
						
						//Move on!
						if(RamaPatrol_ChooseNextMoveGoal.IsBound())
						{
							RamaPatrol_ChooseNextMoveGoal.Broadcast(this);
						}
					}
				}
			}
			else 
			{
				StuckTime = 0;
			}
		}
	}
	
	//! The UE User is new or distracted, just make something up while waiting
	if(CurrentMoveGoal.IsZero())
	{
		//This is where you should just turn the component off if there is no MoveGoal
		//I have the unit do a little dance here to remind you of:
		//1. CPU Efficiency, turn the comp off if not in use (like turning light off in your house if not in the room)
		//!2. Plugin Proper Impl, you have to set the CurrentMoveGoal yourself, and I want the plugin to do something while waiting for you to realize this
	    
		//Debug draw will show point above unit's head, hee hee!
		CurrentMoveGoal = OwnerLocation + FVector(0,0,512);
	}
	
	//Perform Movement!
	if(RamaPatrol_MoveRequest.IsBound())
	{
		RamaPatrol_MoveRequest.Broadcast(this, CurrentMoveGoal);
	}	
	
	PrevLocation = OwnerLocation;
}
 