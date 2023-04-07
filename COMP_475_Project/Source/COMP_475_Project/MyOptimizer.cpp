// Fill out your copyright notice in the Description page of Project Settings.


#include "MyOptimizer.h"

namespace Optimizer
{
	static int32 OptimizeScene = 0;
	static FAutoConsoleVariableRef CVarOptimizeScene(
		TEXT("r.Optimizer.Enable"),
		OptimizeScene,
		TEXT("Scene will be colored to fit different moods based on a model.\n")
		TEXT("=0:off (default), >0: Enabled"),
		ECVF_Cheat | ECVF_RenderThreadSafe);
	//TAutoConsoleVariable<int32> Optimizer::CVarOptimizeScene;
}

MyOptimizer::MyOptimizer()
{
}

void MyOptimizer::OptimizeSceneForMoods()
{
	UE_LOG(LogTemp, Warning, TEXT("in OptimizeSceneForMoods()"));
}

void MyOptimizer::MyOptimizerSinkFunction()
{		
	extern TAutoConsoleVariable<int32> CVarOptimizeScene;
	int32 OptimizeScene = CVarOptimizeScene.GetValueOnGameThread() != 0;

	if (Optimizer::OptimizeScene != 0) {
		OptimizeSceneForMoods();
		Optimizer::OptimizeScene = 0;
	}
}

static FAutoConsoleVariableSink CVarOptimizeSceneSink(
	FConsoleCommandDelegate::CreateStatic(&MyOptimizer::MyOptimizerSinkFunction)
);

MyOptimizer::~MyOptimizer()
{
}
