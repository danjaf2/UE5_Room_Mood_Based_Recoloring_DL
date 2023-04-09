// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

void AMyGameModeBase::BeginPlay() {
	//Define console variable for optimizer 
    IConsoleManager::Get().RegisterConsoleVariable(
        TEXT("r.Optimizer.Enable"),
        0,
        TEXT("Scene will be colored to fit different moods based on a model.\n")
        TEXT("=0:off (default), >0: Enabled"),
        ECVF_Cheat | ECVF_RenderThreadSafe);
}