// Fill out your copyright notice in the Description page of Project Settings.


#include "MyOptimizer.h"
#include "qbGradient.h"
#include <iostream>
#include <functional>
#include <vector>

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

	// Create a function pointer for our object function.
	std::function<double(std::vector<double>*)> p_ObjectFcn = { ObjectFcn };
	//std::function<double(std::vector<double>*)> p_ObjectFcn(&MyOptimizer::ObjectFcn);

	// Create a test instance of the qbGradient class.
	qbGradient solver;

	// Assign the object function.
	solver.SetObjectFcn(p_ObjectFcn);

	// Set a start point.
	std::vector<double> startPoint = { 1.0 };
	solver.SetStartPoint(startPoint);

	// Set the maximum number of iterations.
	solver.SetMaxIterations(50);

	// Set the step size.
	solver.SetStepSize(0.1);

	// Call optimize.
	std::vector<double> funcLoc;
	double funcVal;
	solver.Optimize(&funcLoc, &funcVal);

	// Output the result.
	std::cout << "Function location: " << funcLoc[0] << std::endl;
	std::cout << "Function value: " << funcVal << std::endl;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Function location: %f\nFunction value: %f"), funcLoc[0], funcVal));

}

double ObjectFcn(std::vector<double>* funcLoc)
{
	// y = x^2
	double x = funcLoc->at(0);
	return (x * x);
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
		MyOptimizer::OptimizeSceneForMoods();
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
