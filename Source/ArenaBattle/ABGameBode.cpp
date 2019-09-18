// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameBode.h"
#include "ABPawn.h"
#include "ABPlayerController.h"

AABGameBode::AABGameBode()
{
	DefaultPawnClass = AABPawn::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
}