// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstPersonCharacter.h"
#include "Components/InventoryComponent.h"
#include "Camera/CameraComponent.h"
#include "World/PickUp.h"
#include "Items/ItemBase.h" // Test for witch item is picked up

#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialParameterCollection.h"

#include "Engine/Texture2D.h"
#include "Engine/StaticMesh.h"
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

#include "Kismet/GameplayStatics.h" // For the Assign Function.

AFirstPersonCharacter::AFirstPersonCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// UI System
	/*
	bIsUiActive = false;
	
	UiMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UiMeshComponent"));
	RootComponent = UiMeshComponent;
	
	static ConstructorHelpers::FObjectFinder<UTexture2D>DefaultTexture(TEXT("/Game/PhysicsDoors/Textures/T-PD_Grab"));
	UiTexture = DefaultTexture.Object;

	UiMaterial = UMaterialInstanceDynamic::Create(UiMeshComponent->GetMaterial(0), this);
	if (UiMaterial)
	{
		if (UiMeshComponent)
		{
			//UMaterialParameterCollection* ParameterCollection = LoadObject<UMaterialParameterCollection>(nullptr, TEXT("/Game/UI/UI_System/TextureParameterCollection"));
			//if (ParameterCollection)
			//{
				//ParameterCollection->SetTextureParameterValue(FName("Texture"), UiTexture);
			//}
			//else
			//{
				//UE_LOG(LogTemp, Warning, TEXT("Failed to load material parameter collection."));
			//}

			//UiMaterial->SetTextureStreamingData();

			UiMeshComponent->SetMaterial(0, UiMaterial);
		}
	}

	// Set up the mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMesh(TEXT("/Engine/BasicShapes/Plane"));
	if (PlaneMesh.Succeeded())
	{
		UiMeshComponent->SetStaticMesh(PlaneMesh.Object);
	} */
	// UI System

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
	InteractionCheckDistance = 200.0f; // Check if all distances match

	BIsStepActive = false;
	bIsTempOnOff = false;
	bIsReceptionDoor = true;
	bIsFuseBox = true;
	bIsFuseBox_Interactible = true;
	bIsLookingAtFuBox = false;
	bIsLookingAtRecDoor = false;
	bIsLookingAtFuseBox_Interactible = false;

	EventSteps = CreateDefaultSubobject<AGameplayEvents>(TEXT("EventSteps"));
	TriggerBox = CreateDefaultSubobject<ABoxCollider>(TEXT("TriggerBox"));

	Fuse10A_InFuseBoxTransTagName = FName(TEXT("Fuse10A_InFuseBoxTransparent")); // Fuse10A_InFuseBoxTransparent

	//BaseEyeHeight = 75.0f;
}

void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	HUD = Cast<AMainHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	/*
	// Position the mesh in the center of the screen
	FVector Location = FVector(0.f, 0.f, 100.f); // Adjust the Z value to position the texture in front of the camera
	SetActorLocation(Location);*/
}

void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (bIsUiActive)
	//{}

	//ItemHandeling();

	if (GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime) > InteractionCheckFrequency) PerformInteractionCheck();

	///////////////////////////////////////////---TEMP---/////////////////////////////////////////////
	else if (PlayerInventory->IsFlshlight && !BIsStepActive && !PlayerInventory->IsFuse10a) // Flashlight Pickup.
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

	else if (PlayerInventory->IsElectricKey && !BIsStepActive) // ElectricKey Pickup
	{
		EventSteps->NextStep(7);

		BIsStepActive = true;
	}
	///////////////////////////////////////////---TEMP---/////////////////////////////////////////////

	/////////////////////////////////---ReceptionDoor & FuseBox---////////////////////////////////////
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsFuseBox && bIsLookingAtFuBox && !bIsLookingAtRecDoor && !bIsLookingAtFuseBox_Interactible
		|| CheckLookAtObject() && CheckRightMouseButtonDown() && bIsFuseBox && bIsLookingAtFuBox && !bIsLookingAtRecDoor && !bIsLookingAtFuseBox_Interactible)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("OBJECTIVE: Find the Electric Key."));

		EventSteps->NextStep(5);
		bIsFuseBox = false;
	}
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsReceptionDoor && bIsLookingAtRecDoor && !bIsLookingAtFuBox && !bIsLookingAtFuseBox_Interactible
		|| CheckLookAtObject() && CheckRightMouseButtonDown() && bIsReceptionDoor && bIsLookingAtRecDoor && !bIsLookingAtFuBox && !bIsLookingAtFuseBox_Interactible)
	{		
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("OBJECTIVE: Get the Flashlight."));

		bIsReceptionDoor = false;
	}
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsFuseBox_Interactible && bIsLookingAtFuseBox_Interactible && !bIsLookingAtRecDoor && !bIsLookingAtFuBox
		|| CheckLookAtObject() && CheckRightMouseButtonDown() && bIsFuseBox_Interactible && bIsLookingAtFuseBox_Interactible && !bIsLookingAtRecDoor && !bIsLookingAtFuBox)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("OBJECTIVE: Look for Cole."));

		EventSteps->NextStep(8); // Lights Restored, fuse10a in place.
		bIsFuseBox_Interactible = false;
	}

	// --- Looking OnOff --- //
	// Looking & Visable
	if (bIsLookingAtFuseBox_Interactible && bIsFuseBox_Interactible && !bIsTempOnOff)
	{
		UpdateVaribleState(Fuse10A_InFuseBoxTransActor, Fuse10A_InFuseBoxTransTagName);
		if (IsValid(Fuse10A_InFuseBoxTransActor)) Fuse10A_InFuseBoxTransActor->SetActorHiddenInGame(false);
		
		bIsTempOnOff = true;
	}
	// Not Looking & Not Visable
	else if (bIsLookingAtFuseBox_Interactible && !bIsFuseBox_Interactible && bIsTempOnOff || !bIsLookingAtFuseBox_Interactible && bIsTempOnOff)
	{
		UpdateVaribleState(Fuse10A_InFuseBoxTransActor, Fuse10A_InFuseBoxTransTagName);
		if (IsValid(Fuse10A_InFuseBoxTransActor)) Fuse10A_InFuseBoxTransActor->SetActorHiddenInGame(true);

		bIsTempOnOff = false;
	}
	// --- Looking OnOff --- //
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

void AFirstPersonCharacter::UpdateVaribleState(AActor*& ActorReference, const FName& TagName)
{
	if (!IsValid(ActorReference))
	{
		ActorReference = nullptr;

		TArray<AActor*> FoundActors;

		UGameplayStatics::GetAllActorsWithTag(GetWorld(), TagName, FoundActors);

		if (FoundActors.Num() > 0)
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("FOUND: " + TagName.ToString()));
			ActorReference = FoundActors[0];
		}
	}
}

// RayCast

bool AFirstPersonCharacter::CheckLookAtObject()
{
	FName ReceptionDoorTagName = FName(TEXT("ReceptionDoor"));
	FName FuseTagName = FName(TEXT("FuseBox"));
	FName FuseBox_Interactible = FName(TEXT("FuseBox_Interactible"));
	FName ReceptionPhoneTagName =FName(TEXT("ReceptionPhone")); // ReceptionPhone

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
			bIsLookingAtFuseBox_Interactible = false;
			bIsLookingAtFuBox = true;

			bIsUiActive = true;

			return true;
		}
		else if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(ReceptionDoorTagName) && bIsReceptionDoor)
		{
			bIsLookingAtFuBox = false;
			bIsLookingAtFuseBox_Interactible = false;
			bIsLookingAtRecDoor = true;

			bIsUiActive = true;

			return true;
		}
		else if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(FuseBox_Interactible) && bIsFuseBox_Interactible)
		{
			bIsLookingAtFuBox = false;
			bIsLookingAtRecDoor = false;
			bIsLookingAtFuseBox_Interactible = true;

			bIsUiActive = true;

			return true;
		}
	}
	bIsLookingAtFuBox = false;
	bIsLookingAtRecDoor = false;
	bIsLookingAtFuseBox_Interactible = false;

	bIsUiActive = false;

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