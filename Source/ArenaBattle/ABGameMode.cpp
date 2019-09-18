// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMode.h"
#include "ABPawn.h"
#include "ABPlayerController.h"
<<<<<<< HEAD

AABGameMode::AABGameMode()
{
=======
#include "Fountain.h"

AABGameMode::AABGameMode()
{
	//this->GetClass(); : 클래스 인스턴스를 가져온다
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
	DefaultPawnClass = AABPawn::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
}

<<<<<<< HEAD
void AABGameMode::PostLogin(APlayerController* NewPlayer)
=======
void AABGameMode::PostLogin(APlayerController * NewPlayer)
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
<<<<<<< HEAD
}
=======
}
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
