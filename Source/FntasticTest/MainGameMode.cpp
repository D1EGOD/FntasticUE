// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "CameraPawn.h"
#include "MainPlayerController.h"

AMainGameMode::AMainGameMode() 
{
	DefaultPawnClass = ACameraPawn::StaticClass();
	PlayerControllerClass = AMainPlayerController::StaticClass();
}
