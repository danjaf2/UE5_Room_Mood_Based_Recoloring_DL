/*
	By Rama
*/
#pragma once

#include "RamaThreadBase.h"

class ARamaCodeMultiThreadActor;
 
class FRamaCodePrimeCalcThread : public FRamaThreadBase
{
public:
	//Super! <3 Rama
	typedef FRamaThreadBase Super;
	
	FRamaCodePrimeCalcThread(const FTimespan& InThreadTickRate, const TCHAR* ThreadDescription, ARamaCodeMultiThreadActor* InJoyActor)
	 : Super(InThreadTickRate,ThreadDescription)
	 , JoyActor(InJoyActor)
	{}

	virtual void JoyTick() override;
	
	bool JoyThreadInit();
	void JoyThread_Shutdown();
	
protected:

	//! Because non protected ptr, (not UPROPERTY())
	//! >>> The owning actor of this thread must outlive the thread itself <<<
	//! Owning actor stops this thread on EndPlay, its own destructor starting process
	//! Owning actor freezes game thread until this thread acknowledges it has been stopped
	ARamaCodeMultiThreadActor* JoyActor = nullptr;
};