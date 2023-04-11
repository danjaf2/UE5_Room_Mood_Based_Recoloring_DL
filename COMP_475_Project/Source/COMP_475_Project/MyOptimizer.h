// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ColorChanger.h"
/**
 * 
 */
class COMP_475_PROJECT_API MyOptimizer
{
public:
	MyOptimizer();
	~MyOptimizer();
	void OptimizeSceneForMoods(AColorChanger *ColorChanger);
	//AColorChanger* ColorChanger;
	//double ObjectFcn(std::vector<double>* funcLoc);
	/*void MyOptimizerSinkFunction();*/
	//FAutoConsoleVariableSink CVarOptimizeSceneSink();
	static UMyNeuralNetwork* myNetwork;
};

double ObjectFcn(std::vector<double>* funcLoc);
double CostFunction(std::vector<double>* funcLoc);
//AColorChanger *ColorChanger;
