// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()
<<<<<<< HEAD

public:
	AABGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	
=======
	
private:
	AABGameMode();

public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
};
