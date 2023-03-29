//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You! ♥ Rama ♥
#pragma once

#include "Components/ActorComponent.h"
#include "RamaJoyPatrol.generated.h"
  
//Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FRamaPatrolChooseNextMoveGoal, URamaJoyPatrol*, RamaJoyPatrolComponent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FRamaPatrolMoveRequest, URamaJoyPatrol*, RamaJoyPatrolComponent, const FVector&, MoveGoal);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FRamaPatrolWaiting, URamaJoyPatrol*, RamaJoyPatrolComponent, float, RemainingTime);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FRamaPatrolSkippedBecauseStuck, URamaJoyPatrol*, RamaJoyPatrolComponent, FVector, SkippedMoveGoal);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FRamaPatrolStuckWhileFollowing, URamaJoyPatrol*, RamaJoyPatrolComponent, float, StuckTime);
/*
	A versatile AI Path Following component, where I do the pathing logic in C++ at highest possible speeds, and YOU determine the path to be followed!
	
	A ♥♥♥ very Happy Synergy ♥♥♥ of UE Loving Friendship!
	
	How to use
	
	1. Implement all of the events and report debug info when getting started.
	
	~ How to Move ~
	2. In the RamaPatrol_MoveRequest Event, tell the unit ♥ How ♥ to move, allows you to implement movement itself anyway you like!
	
	~ Where to Go ~
	3. In the RamaPatrol_ChooseNextMoveGoal, tell the unit ♥ Where ♥ you want them to go, by setting CurrentMoveGoal and any wait time you want!
	
	~ Waiting At a Proper Waypoint? ~
	4. Use RamaPatrol_WaitingAtWaypoint to know how long unit will keep waiting at a waypoint before moving on
	
	~ Got Stuck? ~
	5. Use MinStuckDistancePerSecond & SecondsOfStuckBeforeMoveOn to decide how long to "try" before attempting to advance to next move goal, I call RamaPatrol_ChooseNextMoveGoal() in C++ 
	
	♥ Rama
*/
UCLASS(ClassGroup=Rama, Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class /*RAMAMELEEPLUGIN_API*/ URamaJoyPatrol : public UActorComponent
{
	GENERATED_BODY()
public:
	URamaJoyPatrol(const FObjectInitializer& ObjectInitializer); 
	
//UActorComponent Wrappers for logical convenience and a Joyous Consistency ♥ Rama
public:
	
	/** Turns waypoint following on or off, ♥♥♥ The Most Efficient way ♥♥♥, by stopping the ticking of the component if not active. Use Component->IsActive() to check if pathing is being followed! */
	UFUNCTION(BlueprintCallable, Category="Rama Joy Patrol")
	void SetPathFollowingActive(bool MakeActive)
	{
		//UActorComponent
		SetActive(MakeActive);
	}
	UFUNCTION(BlueprintPure, Category="Rama Joy Patrol")
	bool IsPathFollowingActive()
	{
		//UActorComponent
		return IsActive();
	}
	
//Follow Mode
public:
	
	/** If this is set, unit will follow a specific actor, clear this value to return to path following like a spline or other system you create! */
	UPROPERTY(Category="Rama Joy Patrol ~ Follow",EditAnywhere,BlueprintReadWrite)
	AActor* FollowActor = nullptr;
	
	/** Stay this far away, if have vision of FollowActor! */
	UPROPERTY(Category="Rama Joy Patrol ~ Follow",EditAnywhere,BlueprintReadWrite)
	float FollowStopAtDistance = 512;
	
	/** You determine if the unit has vision of Follow Actor */
	UPROPERTY(Category="Rama Joy Patrol ~ Follow",EditAnywhere,BlueprintReadWrite)
	bool HaveVisionOfFollowActor = true;
	
public:
	
	/** Has the unit reached the goal? Adjust this to reduce changes of trying to "lean" into a wall, a destination actor with a large capsule, or get closer than necessary to the current goal along your chosen path! */
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	float MoveGoalRadius = 128;
	
	/** Should unit skip a way point if it cannot be reached and go to next? */
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	bool MoveToNextWayPointIfStuck = true;
	
	/** How much must the unit move per second to not count as stuck? */
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	float MinStuckDistancePerSecond = 1;
	
	/** How long can the unit be stuck before simply moving on? */
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	float SecondsOfStuckBeforeMoveOn = 0.5;
	 
/* 
	This part is the "Agreement" between You and Me, as the designer of the component.
	
	I am relying on you to choose the MoveGoal, based on the pathing logics of your game.
	
	I tell you when I am ready for the next move goal.
	
	This agreement lets me do all the High Powered C++ logics for you,
	
	While giving you ♥♥♥ Maximum Flexibility ♥♥♥ for how the rest of your movement system works!
	
	Some might say that my implementation is "too loose" because you won't know how to use the plugin at first,
	
	But that's why I made a video about it and a UE Developer Community Tutorial (UEDCT (pronounced "You-ee-Duck"))
	
	♥ Rama
*/

public:
	
	/** Rama + You Agreement: Should update CurrentMoveGoal */
	UPROPERTY(BlueprintAssignable, Category="Rama Joy Patrol")
	FRamaPatrolChooseNextMoveGoal RamaPatrol_ChooseNextMoveGoal;
	
	/** Set this when you pick your next goal, to cause the unit to wait at current goal, if you want them to. */
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	float WaitTimeAtCurrentPosition = 0;
	
	/** Rama + You Agreement: Should be set in your implementation of the DetermineNextMoveGoal event */
	UPROPERTY(Category="Rama Joy Patrol ~ Core",EditAnywhere,BlueprintReadWrite)
	FVector CurrentMoveGoal = FVector::ZeroVector;
	
public:
	

	/** Tell the unit how you'd like them to move to desired goal here! Runs every tick. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. ♥ Rama */
	UPROPERTY(BlueprintAssignable, Category="Rama Joy Patrol")
	FRamaPatrolMoveRequest RamaPatrol_MoveRequest;
	
	/** Unit is waiting at waypoint for duration called Remaining Time. Runs every tick. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. ♥ Rama */
	UPROPERTY(BlueprintAssignable, Category="Rama Joy Patrol")
	FRamaPatrolWaiting RamaPatrol_WaitingAtWaypoint;
	
	/** Unit moved on because got stuck! RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. ♥ Rama */
	UPROPERTY(BlueprintAssignable, Category="Rama Joy Patrol")
	FRamaPatrolSkippedBecauseStuck RamaPatrol_SkippedBecauseStuck;
	
	/** Unit is stuck while trying to follow the FollowActor! Use MinStuckDistancePerSecond & SecondsOfStuckBeforeMoveOn to customize when this activates! You can perform custom logics based on how long unit is stuck using StuckTime, reported by event, same as the variable you can access any time StuckTime. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. ♥ Rama */
	UPROPERTY(BlueprintAssignable, Category="Rama Joy Patrol")
	FRamaPatrolStuckWhileFollowing RamaPatrol_StuckWhileFollowing;
	
	
//Native Impl to support any kind of Actor (character is default impl) ♥ Rama
public:
	/** 
	*This is the point on the actor from which the distance to current waypoint should be measured.
	*
	* Default implementation:
	*
	* Actors = Uses GetActorLocation()
	* Characters = Uses Feet Location as per Nav Agent Interface (same method as UE4 AI system)
	*
	* <3 Rama
	*/
	UFUNCTION(BlueprintNativeEvent, Category="Rama Joy Patrol")
	FVector GetActorMeasureLocation() const;
	
public:
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	FVector PrevLocation;
	
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	float StuckTime = 0;
	
	/** might have to update this during a save/load procedure */
	UPROPERTY(Category="Rama Joy Patrol ~ Stuck",EditAnywhere,BlueprintReadWrite)
	float WaitStartTime = 0;
	
	//Only access rest of world / Owner Here, AFTER Component Constructor has run! <3 Rama
	//This is like BeginPlay for an Actor, which is AFTER raw C++ constructor and rest of Game World have initialized!
	virtual void InitializeComponent() override;
	
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};