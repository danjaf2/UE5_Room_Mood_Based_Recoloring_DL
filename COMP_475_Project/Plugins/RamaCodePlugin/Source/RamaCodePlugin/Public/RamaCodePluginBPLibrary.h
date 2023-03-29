//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You!, ♥ Rama ♥

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "RamaCodePluginBPLibrary.generated.h"

UCLASS()
class URamaCodePluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

//Rama AI 
public: 
	/** Lead a target, with optional randomization of final aim angle (assumes World Z is FVector(0,0,1) ♥ Rama*/
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	static void RamaAI_GetLeadTargetDirection(
		FVector& FinalDir, 
		const FVector& FireStartLocation, 
		const FVector& GoalUnitLocation, 
		const FVector& VelocityOfGoalUnit,  
		FVector2D RandomVelocityMultXY=FVector2D(1,1), FVector2D RandomVelocityMultZ=FVector2D(1,1), 
		FVector2D RandomAngleOffsetXY=FVector2D::ZeroVector, FVector2D RandomAngleOffsetZ=FVector2D::ZeroVector, float RandomScale = 1.f);
	
	/** Another Rama Gift to Youuu! 
		1. This is a fix for fact that AI Move To is apparently not using Add Movement Input so capsule reports 0 velocity and no animation occurs.
		2. Also, the pathing system seems to create oscillating destinations sometimes that make the chosen dir go back and forth, I hope you enjoy my solution!
		
		♥ Rama */
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	static bool RamaAI_GetMoveInputDirection(AActor* Actor, const TArray<FVector>& PathPoints, FVector& MoveDir, int32& ChosenIndex, float SkipRadius=128);
	
//Rama UE5 Helpers
public:
	/** Cause UE5 is still like a young flower and growing fast! (Can't subtract DateTimes) ♥ Rama */
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	static void RamaUE5PreviewHelper_SubtractDateTimes(const FDateTime& Left, const FDateTime& Right, FTimespan& Result)
	{ 
		Result = Left - Right;
	}

	/** Cause UE5 is still like a young flower and growing fast! (Can't do V2D * non Vector2D maths) ♥ Rama*/
	UFUNCTION(BlueprintPure,Category=RamaCode, meta = (Keywords = "multiply * x", CompactNodeTitle = "*"))
	static void RamaUE5Helper_Vector2DMultFloat(FVector2D Vector2D, FVector2D& Result, float Real = 1.f)
	{  
		Result = Vector2D * Real;
	}
	
	/** Cause UE5 is still like a young flower and growing fast! (Can't do V2D / non Vector2D maths) ♥ Rama */
	UFUNCTION(BlueprintPure,Category=RamaCode, meta = (Keywords = "divide /", CompactNodeTitle = "/"))
	static void RamaUE5Helper_Vector2DDivideFloat(FVector2D Vector2D, FVector2D& Result, float Real = 1.f)
	{ 
		Result = Vector2D / Real;
	}
};
