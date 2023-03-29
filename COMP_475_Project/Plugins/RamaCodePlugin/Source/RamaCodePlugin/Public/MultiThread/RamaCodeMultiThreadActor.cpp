//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You!, ♥ Rama ♥

#include "RamaCodeMultiThreadActor.h"

//Static counter for thread creation process, for unique identification of the thread
int32 ARamaCodeMultiThreadActor::JoyThreadNameCounter = 0;

void ARamaCodeMultiThreadActor::BeginPlay() 
{
	//~~~~~~~~~~~~~~~~~~~~~~~
	Super::BeginPlay();
	//~~~~~~~~~~~~~~~~~~~~~~~
	
	//Start thread!
	JoyThread_Init();
}

void ARamaCodeMultiThreadActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{   
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//Allows thread to finish current task / tick cycle
	//! Freezing game thread exit process in meantime
	JoyThread_Shutdown();
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//~~~~~~~~~~~~~~~~~~~~~~~
	Super::EndPlay(EndPlayReason);
	//~~~~~~~~~~~~~~~~~~~~~~~
}


void ARamaCodeMultiThreadActor::JoyThread_Init()
{
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//	Create Thread-Friendly Data Core
	// 		<3 Rama
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	MultiThreadDataCore = NewObject<URamaThreadDataQueue>(this,TEXT("DataCore_OneWay")); //this = outer = very useful, reflection, GetOuter()
	 
	//Primes Init
	if(MultiThreadDataCore)
	{
		FRamaCircularQueueData InitialData;
		InitialData.CalculatedPrimeNumber = 3;
		MultiThreadDataCore->Responses.Enqueue(InitialData);
	}
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// 	The Thread
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	//Don't allow starting twice!
	JoyThread_Shutdown();
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	// 					 Thread Tick Rate
	//!!! MAKING THIS ENTIRE PROCESS GO SLOWLY OR QUICKLY
	//!!! ATTENTION: COMPUTER RESOURCE MANAGEMENT DEPT OF YOUR GAME LOGICS
	//!!! <3 RAMA
	FTimespan ThreadWaitTime = FTimespan::FromSeconds(0.01);  //! Use 0.1 or higher if don't need calcs to occur quickly!
	
	FString UniqueThreadName = "Joy Thread ~ ";
	UniqueThreadName += FString::FromInt(++JoyThreadNameCounter);
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//! "For every New, there most be a Delete" <3 Rama
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	JoyThread = new FRamaCodePrimeCalcThread(ThreadWaitTime,*UniqueThreadName, this);
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	if(JoyThread) 
	{ 
		JoyThread->Init();
		JoyThread->JoyThreadInit();	
		RamaCodeLog("JOY THREAD INITIALIZED!");
	}
	 
	//See plugin Content folder, blueprint of this class
	StartRamaCodeThreadTimerUpdate();
}

void ARamaCodeMultiThreadActor::JoyThread_Shutdown()
{
	if(JoyThread) 
	{
		JoyThread->JoyThread_Shutdown();
		JoyThread->Stop();
		
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//! Wait here until JoyThread is verified as having stopped!
		//!
		//! This is a safety feature, that will delay PIE EndPlay or
		//! closing of the game while complex calcs occurring on the 
		//! thread have a chance to finish
		//!
		while(!JoyThread->ThreadHasStopped())
		{
			FPlatformProcess::Sleep(0.1);
		}
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		
		//Do this last
		delete JoyThread;
	} 
	
	//Clarity
	JoyThread = nullptr;
}

void ARamaCodeMultiThreadActor::RemoveFromQueue_GetAllFinished_ThreadCalculatedData(TArray<FRamaCircularQueueData>& NewData)
{
	//! Always check Your Pointers! ♥ Rama
	if(!MultiThreadDataCore)
	{
		return;
	}
	
	//Just in cases <3 Rama
	NewData.Empty();
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//Get All Pending, successfully calculated by your thread!
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	while(MultiThreadDataCore->Responses.Count() > 0)
	{ 
		//Add empty data unit with default values to array of output data
		NewData.AddDefaulted(1); 
		
		//Fill empty last member with data obtained from your thread!
		MultiThreadDataCore->Responses.Dequeue(NewData.Last()); 
		
		//This is ***Thread safe access*** and ***data-copying*** while thread is still adding to queue at same time!
		// <3 Rama
	}
}

bool ARamaCodeMultiThreadActor::IsJoyThreadPaused()
{
	if(JoyThread)
	{
		return JoyThread->ThreadIsPaused();
	}
	return false;
}

//! On Thread (not game thread)
int32 ARamaCodeMultiThreadActor::JoyThread_CalcNextPrimeNumber() 
{
	//! Since this is just pure data calculations, very safe!
	//Last known prime number + 1 
	bool NumIsPrime = false;
	while( ! NumIsPrime)
	{
		NumIsPrime = true;
		
		//Try Next Number
		CalcedPrime++;
		
		//Modulus from 2 to current number - 1 
		for(int32 b = 2; b < CalcedPrime; b++)
		{
			//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			//! Check at ***atomic calculation level*** whether thread should exit early!
			//! this ensures that game thread not have to wait forever to shutdown if user wants to exit early!
			if(JoyThread && JoyThread->ThreadIsPaused())
			{
				//Exit as quickly as possible!
				// <3 Rama
				return 0;
			}
			//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//prevent thread from using too many resources
			//FPlatformProcess::Sleep(0.01);
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

			if(CalcedPrime % b == 0) 
			{
				NumIsPrime = false;
				break;
				//~~~
			}
		}
	}
	
	//Success!
	return CalcedPrime;
}

//! On Thread (not game thread)
void ARamaCodeMultiThreadActor::JoyThreadTick()
{
	//Never stop until finished calculating!
	//This would be a verrrrry large hitch if done on game thread!
	//! This is one single while loop! = The Proof of a useful multi-threaded calc
	//! Calc first 50,000 Prime numbers, all at once!
	
	//Very Long While Loop
	while(NumberOfPrimesCalced < 50000 - 2) //just to line up with this, for data verification https://www2.cs.arizona.edu/icon/oddsends/primes.htm
	{
		//! Always check Your Pointers! ♥ Rama
		if(!MultiThreadDataCore)
		{
			return;
		}
		   
		//! Make sure to come all the way out of all function routines with this same check
		//! so as to ensure thread exits as quickly as possible, allowing game thread to finish
		//! See EndPlay for more information. 
		if(JoyThread && JoyThread->ThreadIsPaused())
		{   
			//Exit as quickly as possible!
			// <3 Rama
			return;
		}
		
		//Calculating 1 per Thread Tick
		// <3 Rama
		FRamaCircularQueueData ThreadCalcedData;	
		ThreadCalcedData.CalculatedPrimeNumber = JoyThread_CalcNextPrimeNumber() ;
		MultiThreadDataCore->Responses.Enqueue(ThreadCalcedData);
		
		NumberOfPrimesCalced++;
	}
	//End While Loop
	 
	//Success!
	// Indicate done with current task! 
	//  It is Better to assign new tasks to the thread than to create a different one
	//   <3 Rama
	if(JoyThread)
	{
		JoyThread->SetPaused(true);
	}
}