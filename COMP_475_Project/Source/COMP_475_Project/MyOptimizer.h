// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class COMP_475_PROJECT_API MyOptimizer
{
public:
	MyOptimizer();
	~MyOptimizer();
	static void OptimizeSceneForMoods();
	static void MyOptimizerSinkFunction();
	FAutoConsoleVariableSink CVarOptimizeSceneSink();
	/*static int32 OptimizeScene = 0;
	static TAutoConsoleVariable<int32> MyCustomVariable(
		TEXT("MyCustomVariable"),
		0,
		TEXT("Description of MyCustomVariable.")
	);*/
};
