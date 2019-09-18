// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"

<<<<<<< HEAD
void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AABPlayerController::OnPossess(APawn* aPawn)
{
	ABLOG_S(Warning);
	Super::OnPossess(aPawn);
}
=======
void AABPlayerController::OnPossess(APawn * aPawn)
{
	ABLOG_S(Warning);
	Super::OnPossess(aPawn);
}

void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
