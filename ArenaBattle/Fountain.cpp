// Fill out your copyright notice in the Description page of Project Settings.


#include "Fountain.h"

// Sets default values
AFountain::AFountain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pComBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	m_pComWater = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Water"));

	RootComponent = m_pComBody;
	m_pComWater->SetupAttachment(m_pComBody);

	m_pComWater->SetRelativeLocation(FVector(0.0f, 0.0f, 135.0f));
}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

