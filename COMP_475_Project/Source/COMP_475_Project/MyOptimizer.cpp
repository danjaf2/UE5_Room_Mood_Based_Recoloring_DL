// Gradient descent test by Copyright (c) 2021 Michael Bennett 


#include "MyOptimizer.h"
#include "qbGradient.h"
#include <iostream>
#include <functional>
#include <vector>
#include "ColorChanger.h"
#include "Kismet/GameplayStatics.h"
#include "MyNeuralNetwork.h"

//static TAutoConsoleVariable<int32> CVarOptimizeScene(TEXT("r.Optimizer.Enable"),
//	0,
//	TEXT("Scene will be colored to fit different moods based on a model.\n")
//	TEXT("=0:off (default), >0: Enabled"),
//	ECVF_Cheat | ECVF_RenderThreadSafe);
UMyNeuralNetwork *MyOptimizer::myNetwork;

void MyOptimizer::OptimizeSceneForMoods(AColorChanger *ColorChanger)
{
	UE_LOG(LogTemp, Warning, TEXT("in OptimizeSceneForMoods()"));
	
	MyOptimizer::myNetwork = NewObject<UMyNeuralNetwork>();
	std::function<double(std::vector<double>*)> p_ObjectFcn = { CostFunction };
	//outputArray = myNetwork->URunModel(image);
	// Create a function pointer for our object function.
	//std::function<double(std::vector<double>*)> p_ObjectFcn(&MyOptimizer::ObjectFcn);

	// Create a test instance of the qbGradient class.
	qbGradient solver;

	// Assign the object function.
	solver.SetObjectFcn(p_ObjectFcn);

	// Set a start point.
	//std::vector<double> startPoint = { 1.0 };
	std::vector<double> startPoint;
	for (auto& actorColor : ColorChanger->actorColors) {
		/*startPoint.push_back(0);
		startPoint.push_back(200);
		startPoint.push_back(0);*/
		startPoint.push_back(actorColor->red);
		startPoint.push_back(actorColor->green);
		startPoint.push_back(actorColor->blue);
	}

	//CostFunction(&startPoint);
	solver.SetStartPoint(startPoint);

	// Set the maximum number of iterations.
	solver.SetMaxIterations(50);

	// Set the step size.
	//solver.SetStepSize(0.1);
	solver.SetStepSize(10);

	// Call optimize.
	std::vector<double> funcLoc;
	double funcVal;
	solver.Optimize(&funcLoc, &funcVal);

	// Output the result.
	std::cout << "Function location: " << funcLoc[0] << std::endl;
	std::cout << "Function value: " << funcVal << std::endl;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Function location: %f\nFunction value: %f"), funcLoc[0], funcVal));

	//Take final screenshot
	//Dont forget to save it(rename them)

}

double ObjectFcn(std::vector<double>* funcLoc)
{
	// y = x^2
	double x = funcLoc->at(0);
	return (x * x);
}

double CostFunction(std::vector<double>* funcLoc)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GEngine->GameViewport->GetWorld(), AColorChanger::StaticClass(), FoundActors);
	AColorChanger *ColorChanger = (AColorChanger*)FoundActors[0];
	for (int i = 0; i < funcLoc->size(); i+=3) {
		//Clamps the value between 0 and 255
		ColorChanger->SetColor(i / 3, std::min(255.0, std::max((double)0, (double)funcLoc->at(i))), std::min(255.0, std::max(0.0, (double)funcLoc->at(i+1))), std::min(255.0, std::max(0.0, (double)funcLoc->at(i+2))));
	}

	ColorChanger->UpdateAllColors();
	//Take screenshot
	ColorChanger->TakeShots(false);
	char* img = "C:/Users/nimbus/Documents/Unreal Projects/COMP-475/Team/COMP_475_Project/COMP_475_Project/RoomShots/img0.png";
	cv::Mat image = cv::imread(img);
	//evaluate the screenshot according to mood
	TArray<float> outputArray = MyOptimizer::myNetwork->URunModel(image); 

	//Change return here to specific mood
	return (1-outputArray[0]);
}


//void MyOptimizer::MyOptimizerSinkFunction()
//{		
//	//static const auto CVarOptimizeScene = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.Optimizer.Enable"));
//	//TAutoConsoleVariable<int32> Optimizer::CVarOptimizeScene;
//	//TAutoConsoleVariable<int32> CVarOptimizeScene = Optimizer::OptimizeScene;
//	//int32 OptimizeScene = CVarOptimizeScene.GetValueOnGameThread() != 0;
//	static const auto CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("r.Optimizer.Enable"));
//	int32 OptimizeValue = CVar->GetInt();
//
//	if (OptimizeValue != 0) {
//		MyOptimizer::OptimizeSceneForMoods();
//		//not a ref so not changing console value, for now it's fine because its the only command
//		//but if we add more circle back to this and make sure we switch back to 0 
//		OptimizeValue = 0;
//	}
//}

//static FAutoConsoleVariableSink CVarOptimizeSceneSink(
//	FConsoleCommandDelegate::CreateStatic(&MyOptimizer::MyOptimizerSinkFunction)
//);


MyOptimizer::MyOptimizer()
{
}

MyOptimizer::~MyOptimizer()
{
}
