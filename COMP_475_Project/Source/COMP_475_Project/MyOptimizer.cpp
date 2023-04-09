// Fill out your copyright notice in the Description page of Project Settings.


#include "MyOptimizer.h"

static TAutoConsoleVariable<int32> CVarOptimizeScene(TEXT("r.Optimizer.Enable"),
	0,
	TEXT("Scene will be colored to fit different moods based on a model.\n")
	TEXT("=0:off (default), >0: Enabled"),
	ECVF_Cheat | ECVF_RenderThreadSafe);

MyOptimizer::MyOptimizer()
{
}

void MyOptimizer::OptimizeSceneForMoods()
{
	UE_LOG(LogTemp, Warning, TEXT("in OptimizeSceneForMoods()"));
}

void MyOptimizer::MyOptimizerSinkFunction()
{		
	//static const auto CVarOptimizeScene = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.Optimizer.Enable"));
	//TAutoConsoleVariable<int32> Optimizer::CVarOptimizeScene;
	//TAutoConsoleVariable<int32> CVarOptimizeScene = Optimizer::OptimizeScene;
	//int32 OptimizeScene = CVarOptimizeScene.GetValueOnGameThread() != 0;
	static const auto CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Optimizer.Enable"));
	int32 OptimizeValue = CVar->GetInt();

	if (OptimizeValue != 0) {
		OptimizeSceneForMoods();
		//not a ref so not changing console value, for now it's fine because its the only command
		//but if we add more circle back to this and make sure we switch back to 0 
		OptimizeValue = 0;
	}
}

static FAutoConsoleVariableSink CVarOptimizeSceneSink(
	FConsoleCommandDelegate::CreateStatic(&MyOptimizer::MyOptimizerSinkFunction)
);


MyOptimizer::~MyOptimizer()
{
}
