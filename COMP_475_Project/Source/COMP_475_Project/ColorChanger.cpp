// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorChanger.h"

// Sets default values
AColorChanger::AColorChanger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AColorChanger::BeginPlay()
{
	Super::BeginPlay();
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindLambda([&]
		{
			UE_LOG(LogTemp, Warning, TEXT("This text will appear in the console 0.2 seconds after execution"))
			BP_SaveShot(blueprintActor);
		});

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.2, false);

	BP_ChangeColor(blueprintActor);
	
}

// Called every frame
void AColorChanger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AColorChanger::BP_ChangeColor(AActor* object)
{

	FOutputDeviceNull ar;
	const FString command = FString::Printf(TEXT("ColorUpdate %f %f %f"), red, green, blue);
	object->CallFunctionByNameWithArguments(*command, ar, NULL, true);
	
}

void AColorChanger::BP_SaveShot(AActor* object)
{
	FOutputDeviceNull ar;
	const FString command = FString::Printf(TEXT("ImageUpdate"));
	object->CallFunctionByNameWithArguments(*command, ar, NULL, true);
}



