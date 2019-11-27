// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "AIController.h"
#include "GriffonAIController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AGriffonAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AGriffonAIController();
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	static const FName HomePosKey;
	static const FName PatrolPosKey;

private:
	UPROPERTY()
	class UBehaviorTree* BTAsset;
	
	UPROPERTY()
	class UBlackboardData* BBAsset;
	
};
