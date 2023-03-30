// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Misc/OutputDeviceNull.h"
#include "ColorChanger.generated.h"

UCLASS()
class COMP_475_PROJECT_API AColorChanger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AColorChanger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BP_ChangeColor(AActor* object);
	void BP_SaveShot(AActor* object);

	UPROPERTY(EditAnywhere, Category = "BlueprintClass")
		AActor* blueprintActor;

	float red=255;
	float green=1;
	float blue=1;
};
