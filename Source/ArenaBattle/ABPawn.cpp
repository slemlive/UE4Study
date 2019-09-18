// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPawn.h"

// Sets default values
AABPawn::AABPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

<<<<<<< HEAD

=======
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
<<<<<<< HEAD
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
=======
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101

	RootComponent = Capsule;
	Mesh->SetupAttachment(Capsule);
	SpringArm->SetupAttachment(Capsule);
	Camera->SetupAttachment(SpringArm);

	Capsule->SetCapsuleHalfHeight(88.0f);
	Capsule->SetCapsuleRadius(34.0f);
<<<<<<< HEAD
	Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f),
		FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	Movement->MaxSpeed = 2400.0f;
	SpringArm->bEnableCameraLag = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard"));
	if (SK_CARDBOARD.Succeeded())
	{
		Mesh->SetSkeletalMesh(SK_CARDBOARD.Object);
	}
=======
	Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// Pawn의 움직임 최대 속도
	Movement->MaxSpeed = 500.0f;
	SpringArm->bEnableCameraLag = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard"));
	if (SK_CARDBOARD.Succeeded()) { Mesh->SetSkeletalMesh(SK_CARDBOARD.Object); }
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
}

// Called when the game starts or when spawned
void AABPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

<<<<<<< HEAD
// Called every frame
void AABPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABPawn::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABPawn::LeftRight);
=======
void AABPawn::UpDown(float NewAxisValue)
{
	ABLOG(Warning, TEXT("%f"), NewAxisValue);
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AABPawn::LeftRight(float NewAxisValue)
{
	ABLOG(Warning, TEXT("%f"), NewAxisValue);
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

// Called every frame
void AABPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
}

void AABPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

<<<<<<< HEAD
void AABPawn::PossessedBy(AController* NewController)
=======
void AABPawn::PossessedBy(AController * NewController)
>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
{
	ABLOG_S(Warning);
	Super::PossessedBy(NewController);
}

<<<<<<< HEAD
void AABPawn::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AABPawn::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}
=======
// Called to bind functionality to input
void AABPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABPawn::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABPawn::LeftRight);
}

>>>>>>> 6a605c2cc15445ffb87bb9d63f82e8df042f2101
