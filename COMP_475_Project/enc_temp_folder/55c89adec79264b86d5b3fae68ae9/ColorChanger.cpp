// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorChanger.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include "MyOptimizer.h"


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
	for (int i = 0; i < blueprintActors.Num(); i++) {
		srand(static_cast <unsigned> (time(NULL)*(i+1)*(i+6)));
		ColorData* dataPath = new ColorData();
		(*dataPath).red = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 255));
		(*dataPath).green = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 255));
		(*dataPath).blue = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 255));
		actorColors.Add(dataPath);
	}

	 
	//HOW TO USE: THESE THREE ARE THE MAIN COMMANDS (Remove later)
	//SetColor(0, 255, 1, 1);
	UpdateAllColors();
	TakeShots(true);
	//char* img = "C:/Users/nimbus/Documents/Unreal Projects/COMP-475/Team/COMP_475_Project/COMP_475_Project/RoomShots/img0.png";
	//image = cv::imread(img);
	//myNetwork = NewObject<UMyNeuralNetwork>();
	//outputArray = myNetwork->URunModel(image);
	
	MyOptimizer Optimizer = MyOptimizer();
	Optimizer.OptimizeSceneForMoods(this);

	/*for (int i = 0; i < outputArray.Num(); i++) {
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Output: %f"), outputArray[i]));
	}*/
	
	
}

// Called every frame
void AColorChanger::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);

	
	
}

void AColorChanger::BP_ChangeColor(AActor* object, ColorData* colors)
{
	if (object != nullptr) {
		if (colors != nullptr) {
			FOutputDeviceNull ar;
			const FString command = FString::Printf(TEXT("ColorUpdate %f %f %f"), colors->red, colors->green, colors->blue);
			object->CallFunctionByNameWithArguments(*command, ar, NULL, true);
		}
	}
}

void AColorChanger::BP_SaveShot(AActor* object, int cameraNumber, bool initialShots)
{
	FOutputDeviceNull ar;
	FString pathCopy = path;
	pathCopy.AppendInt(cameraNumber);
	if (initialShots) {
		pathCopy.Append("initial");
	}
	pathCopy.Append(".png");
	
	const FString command = FString::Printf(TEXT("ImageUpdate %s"), *pathCopy);
	bool ran = object->CallFunctionByNameWithArguments(*command, ar, NULL, true);
}

void AColorChanger::UpdateAllColors()
{
	if (actorColors.Num() > 0) {
		for (int i = 0; i < blueprintActors.Num(); i++) {
			BP_ChangeColor(blueprintActors[i], actorColors[i]);
		}
	}
}

void AColorChanger::TakeShots(bool initialShots)
{
	FTimerDelegate TimerDelegate;

	TimerDelegate.BindLambda([&]
		{
			BP_SaveShot(blueprintActors[0], 0, initialShots);
			BP_SaveShot(blueprintActors[1], 1, initialShots);
			BP_SaveShot(blueprintActors[2], 2, initialShots);
			BP_SaveShot(blueprintActors[3], 3, initialShots);

			//IF YOU WANT TO DO SOMETHING IMMEDIATLY AFTER TAKING THE PHOTOS PUT A FUNCTION CALL HERE
		});
	
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 0.000001, false);
}

void AColorChanger::SetColor(int index, float r, float g, float b)
{
	actorColors[index]->red = r;
	actorColors[index]->green = g;
	actorColors[index]->blue = b;
}



