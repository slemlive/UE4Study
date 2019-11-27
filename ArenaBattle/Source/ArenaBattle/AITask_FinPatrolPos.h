// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AITask_FinPatrolPos.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UAITask_FinPatrolPos : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UAITask_FinPatrolPos();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
