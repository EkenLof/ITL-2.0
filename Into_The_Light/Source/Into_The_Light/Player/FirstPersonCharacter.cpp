// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "DrawDebugHelpers.h"

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


	InteractionCheckFrequency = 0.1;
	InteractionCheckDistance = 225.0f;

	BaseEyeHeight = 74.0f;
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


	if (GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime) > InteractionCheckFrequency)
	{
		PerformInteractionCheck();
	}
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
	if (!isFlashlightEquiped)
	{
		//FlashlightMesh->bHiddenInGame = false;
		isFlashlightEquiped = true;
	}
	else if (isFlashlightEquiped)
	{
		//FlashlightMesh->bHiddenInGame = true;
		isFlashlightEquiped = false;
	}
}

void AFirstPersonCharacter::PerformInteractionCheck()
{
	InteractionData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();

	FVector TraceStart{GetPawnViewLocation()}; // Eyes
	FVector TraceEnd{ TraceStart + (GetViewRotation().Vector() * InteractionCheckDistance) };

	float LookDirection = FVector::DotProduct(GetActorForwardVector(), GetViewRotation().Vector()); // Related to character and body facing view (Best for 3rd person)

	if (LookDirection > 0)
	{
		DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Green, false, 0.25f, 0, 0.5f);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);

		FHitResult TraceHit;

		if (GetWorld()->LineTraceSingleByChannel(TraceHit, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
		{
			if (TraceHit.GetActor()->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()))
			{
				const float Distance = (TraceStart - TraceHit.ImpactPoint).Size();

				if (TraceHit.GetActor() != InteractionData.CurrentInteractable && Distance <= InteractionCheckDistance)
				{
					FoundInteractable(TraceHit.GetActor());
					return;
				}
				if (TraceHit.GetActor() == InteractionData.CurrentInteractable)
				{
					return;
				}
			}
		}

		NoInteractableFound();
	}
}

void AFirstPersonCharacter::FoundInteractable(AActor* NewInteractable)
{
	if (IsInteracting())
	{
		EndInteract();
	}

	if (InteractionData.CurrentInteractable)
	{
		TargetInteractable = InteractionData.CurrentInteractable;
		TargetInteractable->EndFocus();
	}

	InteractionData.CurrentInteractable = NewInteractable;
	TargetInteractable = NewInteractable;

	TargetInteractable->BeginFocus();
}

void AFirstPersonCharacter::NoInteractableFound()
{
	if (IsInteracting())
	{
		GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
	}

	if (InteractionData.CurrentInteractable)
	{
		if (IsValid(TargetInteractable.GetObject()))
		{
			TargetInteractable->EndFocus();
		}

		// Hide Interaction widget on the HUD

		InteractionData.CurrentInteractable = nullptr;
		TargetInteractable = nullptr;
	}
}

void AFirstPersonCharacter::BeginInteract()
{
	// Verify nothing had changed with the interactable state since beginning interaction
	PerformInteractionCheck();

	if (InteractionData.CurrentInteractable)
	{
		if (IsValid(TargetInteractable.GetObject()))
		{
			TargetInteractable->BeginInteract();

			if (FMath::IsNearlyZero(TargetInteractable->InteractebleData.InteractionDuration, 0.1f))
			{
				Interact();
			}
			else
			{
				GetWorldTimerManager().SetTimer(
					TimerHandle_Interaction,
					this,
					&AFirstPersonCharacter::Interact,
					TargetInteractable->InteractebleData.InteractionDuration,
					false);
			}
		}
	}
}

void AFirstPersonCharacter::EndInteract()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if (IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->EndInteract();
	}
}

void AFirstPersonCharacter::Interact()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if (IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->Interact();
	}
}

