// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Camera/CameraComponent.h"

// Sets default values                            // Called when Engine Starts
AFirstPersonCharacter::AFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;
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

	PlayerInputComponent->BindAxis("CameraTurn", this, &AFirstPersonCharacter::CamTurn);
	PlayerInputComponent->BindAxis("CameraLookUp", this, &AFirstPersonCharacter::CamLookUp);
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

void AFirstPersonCharacter::CamTurn(float InputValue)
{
	AddControllerYawInput(InputValue);
}

void AFirstPersonCharacter::CamLookUp(float InputValue)
{
	AddControllerPitchInput(InputValue);
}

