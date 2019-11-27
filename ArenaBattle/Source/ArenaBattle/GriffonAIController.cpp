// Fill out your copyright notice in the Description page of Project Settings.


#include "GriffonAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

const FName AGriffonAIController::HomePosKey(TEXT("HomePos"));
const FName AGriffonAIController::PatrolPosKey(TEXT("PatrolPos"));

AGriffonAIController::AGriffonAIController()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBObject(TEXT("/Game/Book/Bueprint/GriffonBlackboardData"));
	if (BBObject.Succeeded())
	{
		BBAsset = BBObject.Object;
		ABLOG(Error, TEXT("Succeeded BB"));
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTObject(TEXT("/Game/Book/Bueprint/GriffonAI"));
	if (BTObject.Succeeded())
	{
		BTAsset = BTObject.Object;
		ABLOG(Error, TEXT("Succeeded BT"));
	}
}

void AGriffonAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (UseBlackboard(BBAsset, Blackboard))
	{
		Blackboard->SetValueAsVector(HomePosKey, InPawn->GetActorLocation());
		if (!RunBehaviorTree(BTAsset))
		{
			ABLOG(Error, TEXT("AIController couldn't run behavior tree!"));
		}
	}
}

void AGriffonAIController::OnUnPossess()
{
	Super::OnUnPossess();
}