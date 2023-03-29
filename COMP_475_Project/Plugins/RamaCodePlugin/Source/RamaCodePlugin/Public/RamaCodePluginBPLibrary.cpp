//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You!, ♥ Rama ♥

#include "RamaCodePluginBPLibrary.h"

//Actor Iterator <3 Rama
//#include "EngineUtils.h"

URamaCodePluginBPLibrary::URamaCodePluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void URamaCodePluginBPLibrary::RamaAI_GetLeadTargetDirection(
	FVector& FinalDir, 
	const FVector& FireStartLocation, 
	const FVector& GoalUnitLocation, 
	const FVector& VelocityOfGoalUnit, 
	FVector2D RandomVelocityMultXY, FVector2D RandomVelocityMultZ, 
	FVector2D RandomAngleOffsetXY, FVector2D RandomAngleOffsetZ, float RandomScale)
{
	FVector OtherVel = VelocityOfGoalUnit;
	
	OtherVel.X *= FMath::FRandRange(RandomVelocityMultXY.X,RandomVelocityMultXY.Y);
	OtherVel.Y *= FMath::FRandRange(RandomVelocityMultXY.X,RandomVelocityMultXY.Y);
	OtherVel.Z *= FMath::FRandRange(RandomVelocityMultZ.X,RandomVelocityMultZ.Y);
	
	FRotator Rot = ((GoalUnitLocation + OtherVel) - FireStartLocation).Rotation();
	
	//Add Random Offsets
	if(!RandomAngleOffsetXY.IsZero())
	{
		Rot.Yaw 	+= RandomScale * FMath::FRandRange(RandomAngleOffsetXY.X,RandomAngleOffsetXY.Y);
	}
	if(!RandomAngleOffsetZ.IsZero())
	{
		Rot.Pitch 	+= RandomScale * FMath::FRandRange(RandomAngleOffsetZ.X,RandomAngleOffsetZ.Y);
	}
	
	//Out
	FinalDir = Rot.Vector();
}

bool URamaCodePluginBPLibrary::RamaAI_GetMoveInputDirection(AActor* Actor, const TArray<FVector>& PathPoints, FVector& MoveDir, int32& ChosenIndex, float SkipRadius)
{
	if(!Actor)
	{
		return false;
	}
	
	if(PathPoints.Num() < 1)
	{
		return false;
	}
	
	FVector ActorLocation = Actor->GetActorLocation();

	for(int32 v = 0; v < PathPoints.Num(); v++)
	{ 
		const FVector& EachPoint = PathPoints[v];
		 
		//Simple check, if far enough away = probably good, to skip strange oscillating behavior of the path point generation
		if(FVector::DistSquared(ActorLocation,EachPoint) > SkipRadius * SkipRadius)
		{ 
			ChosenIndex = v;
			
			MoveDir = (EachPoint - ActorLocation).GetSafeNormal();
			return true;
		}
	}
	
	return false;
}
