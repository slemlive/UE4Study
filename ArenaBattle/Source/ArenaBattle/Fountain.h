// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include"GameFramework/RotatingMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

UCLASS()
class ARENABATTLE_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents() override;

	UPROPERTY(VisibleAnyWhere)
	UStaticMeshComponent* Body;

	UPROPERTY(VisibleAnyWhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnyWhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnyWhere)
	UParticleSystemComponent* Splash;

	UPROPERTY(VisibleAnyWhere)
	URotatingMovementComponent* Movement;

private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))//가상머신에서 관리 알아서 초기화 해줌
	float RoateSpeed;

};
