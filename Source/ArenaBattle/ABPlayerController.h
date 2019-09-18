// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
<<<<<<< HEAD
	virtual void OnPossess(APawn* aPawn) override;
	
=======
	// ºùÀÇ¸¦ ÇÑ´Ù
	virtual void OnPossess(APawn* aPawn) override;
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
};
