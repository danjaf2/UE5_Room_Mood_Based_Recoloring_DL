//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You!, ♥ Rama ♥

#pragma once

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//~~~~~~
//Timers!!!
//~~~~~~ 
#define SETTIMER(param1,param2,param3) {FTimerHandle TimerHandle; (GetWorldTimerManager().SetTimer(TimerHandle, this, &param1, param2, param3));}
#define SETTIMERH(handle, param1,param2,param3) (GetWorldTimerManager().SetTimer(handle, this, &param1, param2, param3))
#define CLEARTIMER(handle) (GetWorldTimerManager().ClearTimer(handle))
#define ISTIMERACTIVE(handle) (GetWorldTimerManager().IsTimerActive(handle))
#define GETTIMERTIMEALIVE(handle) (FMath::Abs(GetWorldTimerManager().GetTimerElapsed(handle)))
#define TIMEREMAINING(handle) (GetWorldTimerManager().GetTimerRemaining(handle))

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~