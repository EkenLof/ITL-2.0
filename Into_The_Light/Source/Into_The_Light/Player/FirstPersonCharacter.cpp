// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values                            // Called when Engine Starts
AFirstPersonCharacter::AFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//PlayerMovementsValues->MaxWalkSpeed = WalkSpeed;
	WalkSpeed = 187.5;
	RunSpeed = 437.5;

	PlayerMovementsValues->MaxWalkSpeed = WalkSpeed;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	//Camera->SetupAttachment(RootComponent);
	Camera->SetupAttachment(GetMesh(), FName("HeadHolder"));
	Camera->bUsePawnControlRotation = true;

	FlashlightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlashlightMesh"));
	FlashlightMesh->SetupAttachment(GetMesh(), FName("Light-Holder"));
}


// Called when the game starts or when spawned    // Called when Game Starts
void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every framev                            // This is just lick Cs Update
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("JumpButton", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAxis("MoveForward", this, &AFirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveSide", this, &AFirstPersonCharacter::MoveSide);

	PlayerInputComponent->BindAction("RunButton", IE_Pressed, this, &AFirstPersonCharacter::Run);
	PlayerInputComponent->BindAction("RunButton", IE_Released, this, &AFirstPersonCharacter::Walk);

	PlayerInputComponent->BindAxis("CameraTurn", this, &AFirstPersonCharacter::CamTurn);
	PlayerInputComponent->BindAxis("CameraLookUp", this, &AFirstPersonCharacter::CamLookUp);

	PlayerInputComponent->BindAction("Flashlight", IE_Pressed, this, &AFirstPersonCharacter::UseFlashlight);
}

void AFirstPersonCharacter::MoveForward(float InputValue)
{
	FVector ForwardDirection = GetActorForwardVector();
	AddMovementInput(ForwardDirection, InputValue);
}

void AFirstPersonCharacter::MoveSide(float InputValue)
{
	FVector SideDirection = GetActorRightVector();
	AddMovementInput(SideDirection, InputValue);
}

void AFirstPersonCharacter::Run()
{
	PlayerMovementsValues->MaxWalkSpeed = RunSpeed;
}

void AFirstPersonCharacter::Walk()
{
	PlayerMovementsValues->MaxWalkSpeed = WalkSpeed;
}

void AFirstPersonCharacter::CamTurn(float InputValue)
{
	AddControllerYawInput(InputValue);
}

void AFirstPersonCharacter::CamLookUp(float InputValue)
{
	AddControllerPitchInput(InputValue);
}

void AFirstPersonCharacter::UseFlashlight()
{
	if (UseFlashlightAnim)
	{
		//GetMesh()->PlayAnimation(UseFlashlightAnim, true);
	}
	
}

