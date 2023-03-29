//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You! ♥ Rama ♥

#pragma once

#include "GameFramework/Actor.h"
#include "JoyActor.generated.h"

/** 
	This class is my immediate solution to issue of when you need a scenecomponent as your root,
	so you can rotate and translate a static mesh or other component in the actor viewport that is the real root.
	
	1. Please Set the SelfComponent in Construction Script
	
	2. Please use GetSelfLocation, GetSelfRotation, and GetSelfTransform
	
	3. I may put other fun Actor helper functions in this class eventually too!
	
	♥ Rama
*/ 
UCLASS()
class RAMACODEPLUGIN_API AJoyActor : public AActor
{
	GENERATED_BODY()
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	USceneComponent* SelfComponent;
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category=RamaCode)
	FVector GetSelfLocation()
	{
		return (SelfComponent) ? SelfComponent->GetComponentLocation() : FVector::ZeroVector;
	}
	
	/** World Transform! ♥ Rama */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category=RamaCode)
	FTransform GetSelfTransform()
	{
		return (SelfComponent) ? SelfComponent->GetComponentTransform() : FTransform();
	}
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category=RamaCode)
	FRotator GetSelfRotation()
	{
		return (SelfComponent) ? SelfComponent->GetComponentRotation() : FRotator();
	}
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category=RamaCode)
	FVector GetSelfScale3D()
	{
		return (SelfComponent) ? SelfComponent->GetComponentScale() : FVector(1,1,1);
	}
	
	//~~~
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category=RamaCode)
	FVector GetSelfForwardVector()
	{
		return (SelfComponent) ? SelfComponent->GetForwardVector() : FVector::ZeroVector;
	}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category=RamaCode)
	FVector GetSelfRightVector()
	{
		return (SelfComponent) ? SelfComponent->GetRightVector() : FVector::ZeroVector;
	}
	UFUNCTION(BlueprintCallable, BlueprintPure, Category=RamaCode)
	FVector GetSelfUpVector()
	{
		return (SelfComponent) ? SelfComponent->GetUpVector() : FVector::ZeroVector;
	}
};