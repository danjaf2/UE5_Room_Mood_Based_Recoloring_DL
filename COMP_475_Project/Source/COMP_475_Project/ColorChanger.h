// Fill out your copyright notice in the Description page of Project Settings.

#pragma once



#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyNeuralNetwork.h"
#include "PreOpenCVHeaders.h"
#include "OpenCVHelper.h"
#include <ThirdParty/OpenCV/include/opencv2/imgproc.hpp>
#include <ThirdParty/OpenCV/include/opencv2/highgui/highgui.hpp>
#include <ThirdParty/OpenCV/include/opencv2/core.hpp>
#include "PostOpenCVHeaders.h"
#include "Misc/OutputDeviceNull.h"
#include "ColorChanger.generated.h"




struct ColorData
{
	float red = 0;
	float green = 0;
	float blue = 0;
};
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

	void BP_ChangeColor(AActor* object, ColorData* colors);
	void BP_SaveShot(AActor* object, int cameraNumber);//Camera number goes from 0 to 3;
	void UpdateAllColors();//Call this
	void TakeShots();//Call this
	void SetColor(int index, float r, float g, float b);



	UPROPERTY(EditAnywhere, Category = "BlueprintClass")
		TArray<AActor*> blueprintActors;

	FString path = FPaths::ProjectDir() + "/RoomShots/img";

	
	TArray<ColorData*> actorColors;

	TArray<float> outputArray;

	UMyNeuralNetwork* myNetwork;

	cv::Mat image;

	
};
