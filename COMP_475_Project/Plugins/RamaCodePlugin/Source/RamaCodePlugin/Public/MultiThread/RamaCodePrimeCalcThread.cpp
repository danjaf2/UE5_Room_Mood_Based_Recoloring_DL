#include "RamaCodePrimeCalcThread.h"
#include "RamaCodeMultiThreadActor.h"

void FRamaCodePrimeCalcThread::JoyTick()
{ 
	//Throttle Thread to avoid consuming un-needed resources <3 Rama
	// Set during thread startup, can be modified any time!
	if(ThreadTickRate.GetTotalSeconds() > 0)
	{
		JoyWait(ThreadTickRate.GetTotalSeconds());
	}
	
	//Link to UE World <3 Rama
	if(!JoyActor) 
	{
		return;
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	  
	//This is the connection from a wrapper of OS Threading
	// To UE Game Code.
	// I use an actor for ease of creating a Blueprint 
	// that can create timers and has a tick function that starts enabled
	
	//The thread tick should NOT call any UE code that 
	//1. Creates or destroys objects
	//2. Modifies the game world in any way
	//3. Tries to debug draw anything
	//4. Simple raw data calculations are best! <3 Rama
	JoyActor->JoyThreadTick();
}

bool FRamaCodePrimeCalcThread::JoyThreadInit()
{
	//Any third party C++ to do on init
	return true;
	
}
	
void FRamaCodePrimeCalcThread::JoyThread_Shutdown()
{
	//Any third party C++ to do on shutdown
}
	
	