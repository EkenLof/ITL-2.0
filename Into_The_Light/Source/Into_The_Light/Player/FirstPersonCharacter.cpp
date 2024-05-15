// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstPersonCharacter.h"
#include "Components/InventoryComponent.h"
#include "Camera/CameraComponent.h"
#include "World/PickUp.h"
#include "Items/ItemBase.h" // Test for witch item is picked up

#include "Engine/World.h"

#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "UserInterface/MainHUD.h"

#include "DrawDebugHelpers.h"

#include "Gameplay/GameplayEvents.h"
#include "Triggers/BoxCollider.h"

AFirstPersonCharacter::AFirstPersonCharacter()
{
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

	PlayerInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));
	PlayerInventory->SetSlotsCapacity(30); // 20 YT
	PlayerInventory->SetWeightCapacity(80.0f); // 50 YT

	InteractionCheckFrequency = 0.1; // Interaction time update
	InteractionCheckDistance = 200.0f;

	BIsStepActive = false;

	bIsReceptionDoor = true;
	bIsFuseBox = true;

	bIsLookingAtFuBox = false;
	bIsLookingAtRecDoor = false;

	EventSteps = CreateDefaultSubobject<AGameplayEvents>(TEXT("EventSteps"));
	TriggerBox = CreateDefaultSubobject<ABoxCollider>(TEXT("TriggerBox"));

	//BaseEyeHeight = 75.0f;
}

void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	HUD = Cast<AMainHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
}

void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//ItemHandeling();

	if (GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime) > InteractionCheckFrequency)
	{
		PerformInteractionCheck();
	}

	///////////////////////////////////////////---TEMP---/////////////////////////////////////////////
	else if (PlayerInventory->IsFlshlight && !BIsStepActive && !PlayerInventory->IsFuse10a) // TEMP OR FOR FLASHLIGHT PICK UP.
	{
		EventSteps->NextStep(2);
		// HiddenWall Reception OFF.

		BIsStepActive = true;
	}

	else if (PlayerInventory->IsFuse10a && !PlayerInventory->IsElectricKey && BIsStepActive) // Fuse10a Pickup
	{
		EventSteps->NextStep(4);

		BIsStepActive = false;
	}

	else if (PlayerInventory->IsElectricKey && !BIsStepActive) // Fuse10a Pickup
	{
		EventSteps->NextStep(7);

		BIsStepActive = true;
	}
	///////////////////////////////////////////---TEMP---/////////////////////////////////////////////

	/////////////////////////////////---ReceptionDoor & FuseBox---////////////////////////////////////
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsFuseBox && bIsLookingAtFuBox && !bIsLookingAtRecDoor 
		|| CheckLookAtObject() && CheckRightMouseButtonDown() && bIsFuseBox && bIsLookingAtFuBox && !bIsLookingAtRecDoor)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("OBJECTIVE: Find the Electric Key."));

		EventSteps->NextStep(5);
		bIsFuseBox = false;
	}
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsReceptionDoor && bIsLookingAtRecDoor && !bIsLookingAtFuBox
		|| CheckLookAtObject() && CheckRightMouseButtonDown() && bIsReceptionDoor && bIsLookingAtRecDoor && !bIsLookingAtFuBox)
	{		
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("OBJECTIVE: Get the Flashlight."));

		bIsReceptionDoor = false;
	}
	/////////////////////////////////---ReceptionDoor & FuseBox---////////////////////////////////////
}

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

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AFirstPersonCharacter::BeginInteract);
	PlayerInputComponent->BindAction("Interact", IE_Released, this, &AFirstPersonCharacter::EndInteract);

	PlayerInputComponent->BindAction("ToggleMenu", IE_Pressed, this, &AFirstPersonCharacter::ToggleMenu);
}

// RayCast

bool AFirstPersonCharacter::CheckLookAtObject()
{
	FName ReceptionDoorTagName = FName(TEXT("ReceptionDoor"));
	FName FuseTagName = FName(TEXT("FuseBox"));

	FVector Start = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
	FVector End = Start + GetWorld()->GetFirstPlayerController()->GetControlRotation().Vector() * InteractionCheckDistance;

	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this); // Ignore self

	// Perform Raycast
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility, CollisionParams))
	{
		// Check if hit actor has the desired tag
		if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(FuseTagName) && bIsFuseBox)
		{			
			bIsLookingAtRecDoor = false;
			bIsLookingAtFuBox = true;

			return true;
		}
		else if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(ReceptionDoorTagName) && bIsReceptionDoor)
		{
			bIsLookingAtFuBox = false;
			bIsLookingAtRecDoor = true;

			return true;
		}
	}

	return false;
}

bool AFirstPersonCharacter::CheckLeftMouseButtonDown()
{
	return GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::LeftMouseButton);
}

bool AFirstPersonCharacter::CheckRightMouseButtonDown()
{
	return GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::RightMouseButton);
}

// Raycast

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
/*
void AFirstPersonCharacter::ItemHandeling()
{
	UItemBase* CurrentItem;
	CurrentItem = NULL;

	if (PlayerInventory->FindMatchingItem(Item) == CurrentItem)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Is IF!"));
		CurrentItem = Item;
	}
	else 
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Is ELSE!"));
	}

	if (Item->ID != CurrentItem->ID) // False
	{
		isFlashlightInInventory = false;

		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Is False!"));
	}
	else // True
	{
		isFlashlightInInventory = true;

		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Is True!"));
		CurrentItem->ResetItemFlags();
	}
	
	//if(PlayerInventory->FindMatchingItem(Item)) 
}
*/
void AFirstPersonCharacter::UseFlashlight() // FLashlight LOGIC
{
	if (!isFlashlightEquiped && PlayerInventory->IsFlshlight)
	{
		//FlashlightMesh->bHiddenInGame = false;
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Equip Flishlight TRUE!"));
		isFlashlightEquiped = true;
	}
	else if (isFlashlightEquiped)
	{
		//FlashlightMesh->bHiddenInGame = true;
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Equip Flashlight False!"));
		isFlashlightEquiped = false;
	}
}

void AFirstPersonCharacter::PerformInteractionCheck()
{
	InteractionData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();

	//////////////////////////////////////////////////////////////////////////////
	// 
	FVector TraceStart{ FVector::ZeroVector };
	TraceStart = Camera->GetComponentLocation(); // Location where the Mouse-Pointer comes from.
	FVector TraceEnd{ TraceStart + (GetViewRotation().Vector() * InteractionCheckDistance) }; // Interaction distance from view.
	// 
	//////////////////////////////////////////////////////////////////////////////

	float LookDirection = FVector::DotProduct(GetActorForwardVector(), GetViewRotation().Vector()); // Related to character and body facing view (Best for 3rd person)

	if (LookDirection > 0) // If camera could be angled behind head it would stop (Best for 3rd prerson)
	{
		//////////////////////////////////////////////////////////////////////////
		//DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Green, false, 0.25f, 0, 0.5f); // Test DrawLine
		//////////////////////////////////////////////////////////////////////////

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);
		FHitResult TraceHit;

		if (GetWorld()->LineTraceSingleByChannel(TraceHit, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
		{
			if (TraceHit.GetActor()->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()))
			{
				//
				//const float Distance = (TraceStart - TraceHit.ImpactPoint).Size();
				//if (TraceHit.GetActor() != InteractionData.CurrentInteractable && Distance <= InteractionCheckDistance)


				if (TraceHit.GetActor() != InteractionData.CurrentInteractable)
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
	}
	NoInteractableFound();
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

	HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);

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

		HUD->HideInteractionWidget();

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

			if (FMath::IsNearlyZero(TargetInteractable->InteractableData.InteractionDuration, 0.1f))
			{
				Interact();
			}
			else
			{
				GetWorldTimerManager().SetTimer(
					TimerHandle_Interaction,
					this,
					&AFirstPersonCharacter::Interact,
					TargetInteractable->InteractableData.InteractionDuration,
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
		TargetInteractable->Interact(this);
	}
}

void AFirstPersonCharacter::UpdateInteractionWidget() const
{
	if (IsValid(TargetInteractable.GetObject()))
	{
		HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);
	}
}

void AFirstPersonCharacter::ToggleMenu()
{
	HUD->ToggleMenu();
}

void AFirstPersonCharacter::DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop) // FIX FOR KEY-ITEMS NOT-DROPABLE
{
	if (PlayerInventory->FindMatchingItem(ItemToDrop))
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.bNoFail = true;
		SpawnParams.SpawnCollisionHandlingOverride 
			= ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		const FVector SpawnLocation	{ GetActorLocation() + (GetActorForwardVector() * 75.0f) }; // Distance of drop
		const FTransform SpawnTransform(GetActorRotation(), SpawnLocation);

		const int32 RemovedQuantity 
			= PlayerInventory->RemoveAmountOfItem(ItemToDrop, QuantityToDrop);

		APickUp* PickUp 
			= GetWorld()->SpawnActor<APickUp>(APickUp::StaticClass(), SpawnTransform, SpawnParams);

		PickUp->InitializeDrop(ItemToDrop, RemovedQuantity);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Item to Drop was somehow NULL"));
	}
}