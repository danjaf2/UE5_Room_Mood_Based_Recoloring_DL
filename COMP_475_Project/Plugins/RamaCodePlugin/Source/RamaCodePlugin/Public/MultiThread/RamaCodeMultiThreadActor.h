//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You!, ♥ Rama ♥

#pragma once

#include "Containers/CircularQueue.h"

#include "RamaCodePrimeCalcThread.h"
#include "GameFramework/Actor.h"
#include "RamaCodeMultiThreadActor.generated.h"

/* 
	Simple data in this case, 
	
	But you can store literally anything here 
	
	For your own threaded calculations!
	
	♥ Rama
*/

USTRUCT(BlueprintType) //BlueprintType if want access in BP
struct FRamaCircularQueueData
{
	GENERATED_USTRUCT_BODY()
	
	//This is not UPROPERTY() in the circular queue 
	// so do not store UE Actor or UE Object pointers in this struct!
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	int32 CalculatedPrimeNumber = 0;
	
	//I made it UPROPERTY() for ease of access in BP
	//Add additional data members here and you will see why this is handy when you go to get the data in BP! <3 Rama
};

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//Multi Thread Data
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//1. So you can safely read from the data on the game thraed
//2. while your new thread is simultaneously writing to the data too!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// ♥ Rama
// PS: Copyright Credits: please just include me in the credits of your game.
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//! Use this if you need to send a request, supplying your thread with parameters, 
//!   And then getting a response based on those parameters!
//!     <3 Rama
/*
UCLASS()
 class URamaCircularQueue
	 : public UObject
 {
	 GENERATED_BODY()
 
 public:
 
	 URamaCircularQueue(const FObjectInitializer& ObjectInitializer)
			: Super(ObjectInitializer)
			, Requests(1024)
			, Responses(1024)
	 { }
 
	 URamaCircularQueue(FVTableHelper& Helper)
		 : Super(Helper)
		 , Requests(1024)
		 , Responses(1024)
	 { }
 
	 TCircularQueue<FRamaCircularQueueData> Requests;
	 TCircularQueue<FRamaCircularQueueData> Responses;
};
*/

//Use this to safely check for updates from a thread in one-way fashion!
//(Just receiving data from thread at thread's discretion)
UCLASS()
 class URamaThreadDataQueue
	 : public UObject
 {
	 GENERATED_BODY()
 
public:
 
	 //This is not UPROPERTY() so do not store UE Actor or UE Object pointers in this struct!
	 TCircularQueue<FRamaCircularQueueData> Responses;
	 
	 URamaThreadDataQueue(const FObjectInitializer& ObjectInitializer)
			: Super(ObjectInitializer)
			, Responses(1024)
	 { }
 
	 URamaThreadDataQueue(FVTableHelper& Helper)
		 : Super(Helper)
		 , Responses(1024)
	 { }
	 
	 //1024 = max number of items queue can store, can store more as you dequeue all items of course
};
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

UCLASS()
class RAMACODEPLUGIN_API ARamaCodeMultiThreadActor : public AActor
{
	GENERATED_BODY()
public:	
	
//~~~~~~~~~~~~~~~~~~~~~~~~~~
//Multi Thread Code Sample
//~~~~~~~~~~~~~~~~~~~~~~~~~~
public:
	
	/** Start a timer in BP to *safely* check for thread updates! */
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category=RamaCode)
	void StartRamaCodeThreadTimerUpdate();
	
	/** Get the most recently calculated numbers from the Multi-threaded calculation process! This removes the data from the storage queue, so better put the data somewhere permanent! */
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	void RemoveFromQueue_GetAllFinished_ThreadCalculatedData(TArray<FRamaCircularQueueData>& NewData);
	
	/** In this example, there is only 1 task, calc first 50,000 prime numbers, so once the Joy thread pauses herself, that means all primes are done, example complete! In a real game case, you would want to have other tasks for your thread, during the lifetime of the game */
	UFUNCTION(BlueprintPure,Category=RamaCode)
	bool IsJoyThreadPaused();
	
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category=RamaCode)
	void RamaCodeLog(const FString& Str, FLinearColor Color=FLinearColor::Yellow, float Duration=2);
	
//~~~~~~~~~~~~~~~~~~~~~~~~~~
//Thread Safe Data Access
//~~~~~~~~~~~~~~~~~~~~~~~~~~
public:
	//Accessed by Game Thread, added to by your new thread's calculations
	UPROPERTY()	//! <~~~~~~~~~~~~~~~~~~~~~~~~ ALWAYS! to avoid dangling pointers, UE will clear all UPROPERTY() UObject* when they are destroyed!
	URamaThreadDataQueue* MultiThreadDataCore = nullptr;
	//! This UObject will be cleared by garbage collection when the no references to the UObject still exist
	//! This queue will also stay empty as long as you make sure to pull all the data out, minimizing memory usage

//~~~~~~~~~~~~~~~
//Multi-Threading
//~~~~~~~~~~~~~~~
public:
	
	//Game Thread
	static int32 JoyThreadNameCounter;
	class FRamaCodePrimeCalcThread* JoyThread = nullptr;
	
	void JoyThread_Init();
	void JoyThread_Shutdown();
	
	// ON THE THREAD
	//! so don't call BP callable functions or do anything fancy, just raw calcs
	int32 CalcedPrime = 3;
	int32 NumberOfPrimesCalced = 0;
	int32 JoyThread_CalcNextPrimeNumber();
	void JoyThreadTick();
		
//♥ Unreal Engine Forever <3 Rama ♥
public:
	virtual void BeginPlay() override;
	
	//! Ensure the thread gets shut down no matter what! <3 Rama
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	
};