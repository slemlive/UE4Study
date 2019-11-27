// Fill out your copyright notice in the Description page of Project Settings.


#include "AITask_FinPatrolPos.h"
#include "GriffonAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"

UAITask_FinPatrolPos::UAITask_FinPatrolPos()
{
	NodeName = TEXT("FindPatrolPos");
}

EBTNodeResult::Type UAITask_FinPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);
	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn)
	{
		return EBTNodeResult::Failed;
	}

	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetNavigationSystem(ControllingPawn->GetWorld());
	if (nullptr == NavSystem)
		return EBTNodeResult::Failed;

	FVector Origin = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AGriffonAIController::HomPosKey);
	FNavLocation NextPatrol;

	if (NavSystem->GetRandomPointInNavigableRadius(FVector::ZeroVector, 500.0f, NextPatrol))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(AGriffonAIController::PatrolPosKey, NextPatrol.Location);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}