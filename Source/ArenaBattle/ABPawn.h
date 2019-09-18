// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "ABPawn.generated.h"

UCLASS()
class ARENABATTLE_API AABPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

<<<<<<< HEAD
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
=======
private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	// ºùÀÇ¸¦ ¹ÞÀ½
	virtual void PossessedBy(AController* NewController) override;
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

<<<<<<< HEAD
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;

	UPROPERTY(VisibleAnywhere, Category=Collision)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, Category=Mesh)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category=Movement)
	UFloatingPawnMovement* Movement;

	UPROPERTY(VisibleAnywhere, Category=SpringArm)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category=Camera)
	UCameraComponent* Camera;

private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NetAxisValue);
=======
	UPROPERTY(VisibleAnywhere, Category = Collision)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, Category = Visual)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category = Movement)
	UFloatingPawnMovement* Movement;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
};
