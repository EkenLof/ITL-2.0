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
#include "EngineUtils.h"

#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Actor.h"

#include "UserInterface/MainHUD.h"

#include "DrawDebugHelpers.h"

#include "TimerManager.h"

#include "Gameplay/GameplayEvents.h"
#include "Triggers/BoxCollider.h"
#include "Gameplay/Elevator_System.h"
#include "UserInterface/Objective/ObjectivePanel.h"

#include "Kismet/GameplayStatics.h" // For the Assign Function.

#include "Characters/WhiteFace.h"

#include "Audio/ActorSoundSystem.h"
#include "Sound/SoundCue.h"

AFirstPersonCharacter::AFirstPersonCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Optionally, set the widget class in the constructor or from the editor
	static ConstructorHelpers::FClassFinder<UObjectivePanel> WidgetBPClass(TEXT("/Game/UI/WBP_ObjectivePanel.WBP_ObjectivePanel")); // /Script/UMGEditor.WidgetBlueprint'/Game/UI/WBP_ObjectivePanel.WBP_ObjectivePanel'
	if (WidgetBPClass.Class != nullptr)
	{
		ObjectiveClass = WidgetBPClass.Class;
	}

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
	bIsTempWaitForInteractibleFuseBox = false;

	bIsReceptionDoor = true;
	bIsFuseBox = true;
	bIsFuseBox_Interactible = true;
	bIsReceptionPhone = true;

	bIsLookingAtFuBox = false;
	bIsLookingAtRecDoor = false;
	bIsLookingAtFuseBox_Interactible = false;
	bIsLookingReceptionPhone = false;

	isFlashlightInInventory = false;
	isElectricKeyInInventory = false;

	bIsNeedFlashlight = false;
	bIsNeedElectricKey = false;

	EventSteps = CreateDefaultSubobject<AGameplayEvents>(TEXT("EventSteps"));
	TriggerBox = CreateDefaultSubobject<ABoxCollider>(TEXT("TriggerBox"));
	WhiteFace = CreateDefaultSubobject<AWhiteFace>(TEXT("WhiteFace"));

	Fuse10A_InFuseBoxTransTagName = FName(TEXT("Fuse10A_InFuseBoxTransparent")); // Fuse10A_InFuseBoxTransparent
	ReceptionPhoneKeyTagName = FName(TEXT("ReceptionPhone_Key")); // ReceptionPhone_Key
	Fuse10A_ToFuseBoxTagName = FName(TEXT("Fuse10A_InFuseBox")); //Fuse10A_InFuseBox

	ExitFuseB1RoomTrigTagName = FName(TEXT("ExitFuseB1RoomTrigger"));
	GoingToMissingColeTrigTagName = FName(TEXT("GoingToMissingColeTrigger"));
	ReceptionPhoneTrigTagName = FName(TEXT("ReceptionPhoneTrigger"));

	WhiteFaceTagName = FName(TEXT("WhiteFace_F2")); // WhiteFace_F2

	//BaseEyeHeight = 75.0f;
}

void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	HUD = Cast<AMainHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());

	UpdateVaribleState(Fuse10A_ToFuseBoxActor, Fuse10A_ToFuseBoxTagName);

	// TRIGGER
	UpdateVaribleState(GoingToMissingColeTrigActor, GoingToMissingColeTrigTagName);
	if (IsValid(GoingToMissingColeTrigActor)) GoingToMissingColeTrigActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("GoingToMissingColeTrigActor is NOT Valid"));

	UpdateVaribleState(ExitFuseBoxRoomActor, ExitFuseB1RoomTrigTagName);
	if (IsValid(ExitFuseBoxRoomActor)) ExitFuseBoxRoomActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("ExitFuseBoxRoomActor is NOT Valid"));

	UpdateVaribleState(ExitReceptionPhoneTrigActor, ReceptionPhoneTrigTagName);
	if (IsValid(ExitReceptionPhoneTrigActor)) ExitReceptionPhoneTrigActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("ExitReceptionPhoneActor is NOT Valid"));

	if(ObjectiveClass)
	{
		// Create the widget and add it to the viewport
		Objective = CreateWidget<UObjectivePanel>(GetWorld(), ObjectiveClass);
		if (Objective)
		{
			// Determine a high Z-order to ensure it's above other UI elements
			int32 ZOrder = 999; // Adjust this value as needed
			Objective->AddToViewport(ZOrder);
			// Call SetInfoText() on the widget instance
			//Objective->SetInfoText();

			 // Set the position of the ObjectivePanel to the top-left corner
			FVector2D Position(0, 25); // Top-left corner
			bool bRemoveDPIScale = true;
			Objective->SetPositionInViewport(Position, bRemoveDPIScale);
			UE_LOG(LogTemp, Log, TEXT("ObjectivePanelInstance positioned at top-left corner"));
		}
	}
}

void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (bIsUiActive)
	//{}
	UWorld* World = GetWorld();

	bool bIsValueFlashlightPickUP = PlayerInventory->IsFlshlight && !BIsStepActive && !PlayerInventory->IsFuse10a && !PlayerInventory->bIsOfficeKey && !PlayerInventory->IsColeKeycard;
	bool bIsValueFusePickUp = PlayerInventory->IsFuse10a && !PlayerInventory->IsElectricKey && BIsStepActive && !PlayerInventory->bIsOfficeKey && !PlayerInventory->IsColeKeycard;
	bool bIsValueElectricKeyPickUp = PlayerInventory->IsElectricKey && !BIsStepActive && !PlayerInventory->bIsOfficeKey && !PlayerInventory->IsColeKeycard;
	bool bIsValueOfficeKeyPickUp = PlayerInventory->bIsOfficeKey && BIsStepActive && !PlayerInventory->IsColeKeycard;
	bool bIsValueKeycardPickUp = PlayerInventory->IsColeKeycard && !BIsStepActive;

	if (GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime) > InteractionCheckFrequency) PerformInteractionCheck();

	///////////////////////////////////////////---TEMP---/////////////////////////////////////////////
	else if (bIsValueFlashlightPickUP) // Flashlight Pickup.
	{
		isFlashlightInInventory = true;

		// Objective
		bIsObjectiveFlashlight = true;
		
		if (Objective)
		{
			Objective->SetInfoText();
			UE_LOG(LogTemp, Log, TEXT("Objective's SetInfoText called"));
		}
		else UE_LOG(LogTemp, Error, TEXT("Objective is null"));

		// STEP
		//if (IsValid(EventSteps)) EventSteps->NextStep(2);
		BIsStepActive = true;
	}

	else if (bIsValueFusePickUp) // Fuse10a Pickup
	{
		// Objective
		bIsObjectiveFuseCollected = true;
		bIsObjectiveFlashlight = false;

		if (Objective)
		{
			Objective->SetInfoText();
			UE_LOG(LogTemp, Log, TEXT("Objective's SetInfoText called"));
		}
		else UE_LOG(LogTemp, Error, TEXT("Objective is null"));

		// STEP
		if (IsValid(EventSteps)) EventSteps->NextStep(4);
		BIsStepActive = false;
	}

	else if (bIsValueElectricKeyPickUp) // ElectricKey Pickup
	{
		isElectricKeyInInventory = true;

		// Objective
		bIsObjectiveElectricKeyCollected = true;
		bIsObjectiveFindElectricKey = false;
		bIsObjectiveFuseCollected = false;
		bIsObjectiveFlashlight = false;

		if (Objective)
		{
			Objective->SetInfoText();
			UE_LOG(LogTemp, Log, TEXT("Objective's SetInfoText called"));
		}
		else UE_LOG(LogTemp, Error, TEXT("Objective is null"));

		// STEP
		if (IsValid(EventSteps)) EventSteps->NextStep(7);
		BIsStepActive = true;
	}

	else if (bIsValueOfficeKeyPickUp) // OfficeKey Pickup
	{
		// Objective
		bIsObjectiveOfficeKeyCollected = true;
		bIsObjectiveElectricKeyCollected = false;
		bIsObjectiveFuseCollected = false;
		bIsObjectiveFlashlight = false;

		if (Objective)
		{
			Objective->SetInfoText();
			UE_LOG(LogTemp, Log, TEXT("Objective's SetInfoText called"));
		}
		else UE_LOG(LogTemp, Error, TEXT("Objective is null"));

		BIsStepActive = false;
	}

	else if (bIsValueKeycardPickUp) // Cole's Keycard Pickup
	{
		// Objective
		bIsObjectiveKeycardCollected = true;
		bIsObjectiveOfficeKeyCollected = false;
		bIsObjectiveElectricKeyCollected = false;
		bIsObjectiveFuseCollected = false;
		bIsObjectiveFlashlight = false;

		if (Objective)
		{
			Objective->SetInfoText();
			UE_LOG(LogTemp, Log, TEXT("Objective's SetInfoText called"));
		}
		else UE_LOG(LogTemp, Error, TEXT("Objective is null"));

		// Elevator
		for (TActorIterator<AElevator_System> It(GetWorld()); It; ++It)
		{
			ElevatorSystem = *It;
			break;  // Assuming there's only one elevator system, break after finding it
		}

		if (IsValid(ElevatorSystem)) ElevatorSystem->ElevatorActive(true);

		BIsStepActive = true;
	}
	///////////////////////////////////////////---TEMP---/////////////////////////////////////////////

	/////////////////////////////////---Looking On or Off---////////////////////////////////////
	// Looking & Visable
	if (bIsLookingAtFuseBox_Interactible && bIsFuseBox_Interactible && !bIsTempOnOff && bIsTempWaitForInteractibleFuseBox)
	{
		UpdateVaribleState(Fuse10A_InFuseBoxTransActor, Fuse10A_InFuseBoxTransTagName);
		if (IsValid(Fuse10A_InFuseBoxTransActor)) Fuse10A_InFuseBoxTransActor->SetActorHiddenInGame(false);

		bIsTempOnOff = true;
	}
	// Not Looking & Not Visable
	else if (!bIsFuseBox_Interactible && bIsTempOnOff
		|| !bIsLookingAtFuseBox_Interactible && bIsTempOnOff
		|| !bIsTempOnOff
		|| !bIsTempWaitForInteractibleFuseBox)
	{
		UpdateVaribleState(Fuse10A_InFuseBoxTransActor, Fuse10A_InFuseBoxTransTagName);
		if (IsValid(Fuse10A_InFuseBoxTransActor)) Fuse10A_InFuseBoxTransActor->SetActorHiddenInGame(true);

		bIsTempOnOff = false;
	}
	/////////////////////////////////---Looking On or Off---////////////////////////////////////

	/////////////////////////////////---ReceptionDoor & FuseBox & ReceptionPhone---////////////////////////////////////
	// FuseBox Door.
	if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsFuseBox && bIsLookingAtFuBox && !bIsLookingAtRecDoor && !bIsLookingAtFuseBox_Interactible && !bIsLookingReceptionPhone
		|| CheckLookAtObject() && CheckRightMouseButtonDown() && bIsFuseBox && bIsLookingAtFuBox && !bIsLookingAtRecDoor && !bIsLookingAtFuseBox_Interactible && !bIsLookingReceptionPhone)
	{
		if (!isElectricKeyInInventory) bIsNeedElectricKey = true;

		// Objective
		bIsObjectiveFindElectricKey = true;
		bIsObjectiveFuseCollected = false;
		bIsObjectiveFlashlight = false;

		if (Objective)
		{
			Objective->SetInfoText();
			UE_LOG(LogTemp, Log, TEXT("Objective's SetInfoText called"));
		}
		else UE_LOG(LogTemp, Error, TEXT("Objective is null"));

		// TRIGGER
		UpdateVaribleState(GoingToMissingColeTrigActor, GoingToMissingColeTrigTagName);
		if (IsValid(GoingToMissingColeTrigActor)) GoingToMissingColeTrigActor->SetActorEnableCollision(true);
		else UE_LOG(LogTemp, Warning, TEXT("GoingToMissingColeTrigActor is NOT Valid"));

		bIsFuseBox = false;
	}
	// Reception Door.
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsReceptionDoor && bIsLookingAtRecDoor && !bIsLookingAtFuBox && !bIsLookingAtFuseBox_Interactible && !bIsLookingReceptionPhone
		|| CheckLookAtObject() && CheckRightMouseButtonDown() && bIsReceptionDoor && bIsLookingAtRecDoor && !bIsLookingAtFuBox && !bIsLookingAtFuseBox_Interactible && !bIsLookingReceptionPhone)
	{
		//Play Sound
		if(!isFlashlightInInventory) bIsNeedFlashlight = true;

		bIsReceptionDoor = false;
	}
	// FuseBox Fuse 10A to Box.
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsTempWaitForInteractibleFuseBox && bIsFuseBox_Interactible && bIsLookingAtFuseBox_Interactible 
		&& !bIsLookingAtRecDoor && !bIsLookingAtFuBox && !bIsLookingReceptionPhone)
	{
		// ReceptionPhoneKeyActor
		UpdateVaribleState(ReceptionPhoneKeyActor, ReceptionPhoneKeyTagName);
		if (IsValid(ReceptionPhoneKeyActor)) ReceptionPhoneKeyActor->SetActorEnableCollision(true);
		else UE_LOG(LogTemp, Warning, TEXT("ReceptionPhoneKeyActor is NOT Valid"));

		// Fuse10A_ToFuseBoxActor *VISABLE IN GAME
		UpdateVaribleState(Fuse10A_ToFuseBoxActor, Fuse10A_ToFuseBoxTagName);
		if (IsValid(Fuse10A_ToFuseBoxActor)) Fuse10A_ToFuseBoxActor->SetActorHiddenInGame(false);
		else UE_LOG(LogTemp, Warning, TEXT("Fuse10A_ToFuseBoxActor is NOT Valid"));

		// Trigger for Lights
		UpdateVaribleState(ExitFuseBoxRoomActor, ExitFuseB1RoomTrigTagName);
		if (IsValid(ExitFuseBoxRoomActor)) ExitFuseBoxRoomActor->SetActorEnableCollision(true);
		else UE_LOG(LogTemp, Warning, TEXT("ExitFuseBoxRoomActor is NOT Valid"));

		// Play Reception Phone audio // FUSE TO BOX
		InitializeActorSoundSystem();
		if (IsValid(ActorSoundSystem)) ActorSoundSystem->PlayReceptionPhoneAudio();
		else UE_LOG(LogTemp, Warning, TEXT("ActorSoundSystem is NOT Valid"));

		bIsFuseBox_Interactible = false;
	}
	// Reception Phone.
	else if (CheckLookAtObject() && CheckLeftMouseButtonDown() && bIsReceptionPhone && bIsLookingReceptionPhone && !bIsLookingAtFuseBox_Interactible && !bIsLookingAtRecDoor && !bIsLookingAtFuBox)
	{
		///////////////////////////////////////////// *** FIX *** /////////////////////////////////////////////////
		// Stop the PhoneSound 
		InitializeActorSoundSystem();
		if (IsValid(ActorSoundSystem))ActorSoundSystem->StopReceptionPhoneAudio();
		else UE_LOG(LogTemp, Warning, TEXT("ActorSoundSystem is NOT Valid"));

		UpdateVaribleState(ExitReceptionPhoneTrigActor, ReceptionPhoneTrigTagName);
		if (IsValid(ExitReceptionPhoneTrigActor)) ExitReceptionPhoneTrigActor->SetActorEnableCollision(true);
		else UE_LOG(LogTemp, Warning, TEXT("ExitReceptionPhoneActor is NOT Valid"));

		// DELETE Below
		//if (IsValid(EventSteps)) EventSteps->NextStep(9);

		bIsReceptionPhone = false;
	}
	else return;
	/////////////////////////////////---ReceptionDoor & FuseBox & ReceptionPhone---////////////////////////////////////
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
	PlayerInputComponent->BindAction("TogglePauseMenu", IE_Pressed, this, &AFirstPersonCharacter::TogglePauseMenu);
}

void AFirstPersonCharacter::InitializeActorSoundSystem()
{

	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("World is null in InitializeActorSoundSystem"));
		return;
	}
	else
	{
		for (TActorIterator<AActorSoundSystem> It(World); It; ++It)
		{
			ActorSoundSystem = *It;
			break;
		}

		if (!ActorSoundSystem)
		{
			UE_LOG(LogTemp, Error, TEXT("ActorSoundSystem not found!"));
		}
	}
}

// *********************************************************** TIMER ***********************************************************
void AFirstPersonCharacter::StartTimer(float Duration)
{
	// Set the timer duration
	TimerDuration = Duration;
	TimeRemaining = TimerDuration;

	// Start the timer
	UE_LOG(LogTemp, Log, TEXT("Timer has Started!"));
	GetWorld()->GetTimerManager().SetTimer(CountdownTimerHandle, this, &AFirstPersonCharacter::TimerTick, 1.0f, true);
}

void AFirstPersonCharacter::TimerTick()
{
	// Decrease the remaining time
	TimeRemaining -= 1.0f;

	// Check if the timer has reached zero
	if (TimeRemaining <= 0.0f)
	{
		// Clear the timer
		GetWorld()->GetTimerManager().ClearTimer(CountdownTimerHandle);

		// Call the function that should be executed when the timer ends
		OnTimerEnd();
	}
}

void AFirstPersonCharacter::OnTimerEnd()
{
	// Perform the action you want to execute when the timer ends
	UE_LOG(LogTemp, Log, TEXT("Timer has ended!"));

	UnloadSublevel(TEXT("LightsF2"));
}
//*********************************************************** TIMER ***********************************************************

//*********************************************************** SUBLVL ***********************************************************
void AFirstPersonCharacter::LoadSublevel(FName LevelName)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("World is null"));
		return;
	}
	else
	{
		if (LevelName.IsNone())
		{
			UE_LOG(LogTemp, Warning, TEXT("LevelName is None"));
			return;
		}

		UE_LOG(LogTemp, Log, TEXT("World and LevelName are valid. Attempting to load sublevel: %s"), *LevelName.ToString());

		FLatentActionInfo LatentInfo;
		LatentInfo.CallbackTarget = this;
		LatentInfo.ExecutionFunction = "OnSublevelLoaded";
		LatentInfo.Linkage = 0;
		LatentInfo.UUID = __LINE__;

		// Attempt to load the level
		UGameplayStatics::LoadStreamLevel(this, LevelName, true, true, LatentInfo);

		UE_LOG(LogTemp, Log, TEXT("LoadStreamLevel called for sublevel: %s"), *LevelName.ToString());
	}
}

void AFirstPersonCharacter::OnSublevelLoaded()
{
	UE_LOG(LogTemp, Log, TEXT("Sublevel successfully loaded"));
}

void AFirstPersonCharacter::UnloadSublevel(FName LevelName)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("World is null"));
		return;
	}
	else
	{
		if (LevelName.IsNone())
		{
			UE_LOG(LogTemp, Warning, TEXT("LevelName is None"));
			return;
		}

		else if (!LevelName.IsNone())
		{
			UE_LOG(LogTemp, Log, TEXT("Attempting to unload sublevel: %s"), *LevelName.ToString());

			UGameplayStatics::UnloadStreamLevel(this, LevelName, FLatentActionInfo(), false); // ShouldBlockOnLoad: True = loaded before anything else runs / False = Loading in the background and gives a smoother gamplay.
		}
		else UE_LOG(LogTemp, Log, TEXT("LevelName is None"));
	}

	//UGameplayStatics::UnloadStreamLevel(this, LevelName, FLatentActionInfo(), true); // Change to 'false' if you want non-blocking
}
//*********************************************************** SUBLVL ***********************************************************

void AFirstPersonCharacter::UpdateVaribleState(AActor*& ActorReference, const FName& TagName)
{
	if (!IsValid(ActorReference))
	{
		ActorReference = nullptr;

		TArray<AActor*> FoundActors;

		UGameplayStatics::GetAllActorsWithTag(GetWorld(), TagName, FoundActors);

		if (FoundActors.Num() > 0)
		{
			UE_LOG(LogTemp, Log, TEXT("FOUND"));
			ActorReference = FoundActors[0];
		}
		else UE_LOG(LogTemp, Error, TEXT("NOT-FOUND"));
	}
}

// RayCast

bool AFirstPersonCharacter::CheckLookAtObject()
{
	FName ReceptionDoorTagName = FName(TEXT("ReceptionDoor"));
	FName FuseTagName = FName(TEXT("FuseBox"));
	FName FuseBox_Interactible = FName(TEXT("FuseBox_Interactible"));
	FName ReceptionPhoneTagName = FName(TEXT("ReceptionPhone")); // ReceptionPhone

	float LongcheckDistance = 2500.0f;

	FVector Start = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
	FVector End = Start + GetWorld()->GetFirstPlayerController()->GetControlRotation().Vector() * InteractionCheckDistance;
	FVector EndLong = Start + GetWorld()->GetFirstPlayerController()->GetControlRotation().Vector() * LongcheckDistance;

	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this); // Ignore self

	// Perform Raycast
	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility, CollisionParams))
	{
		// Check if hit actor has the desired tag
		// Reception door
		if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(ReceptionDoorTagName) && bIsReceptionDoor)
		{
			bIsLookingAtFuBox = false;
			bIsLookingAtFuseBox_Interactible = false;
			bIsLookingReceptionPhone = false;

			bIsLookingAtRecDoor = true;

			bIsUiActive = true; // NOT IN USE YET 

			return true;
		}
		
		// FuseBox door 
		else if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(FuseTagName) && bIsFuseBox)
		{
			bIsLookingAtRecDoor = false;
			bIsLookingAtFuseBox_Interactible = false;
			bIsLookingReceptionPhone = false;

			bIsLookingAtFuBox = true;

			bIsUiActive = true; // NOT IN USE YET 

			return true;
		}
		// FuseBox Fuse 10A to box
		else if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(FuseBox_Interactible) && bIsFuseBox_Interactible)
		{
			bIsLookingAtFuBox = false;
			bIsLookingAtRecDoor = false;
			bIsLookingReceptionPhone = false;

			bIsLookingAtFuseBox_Interactible = true;

			// From GameplayEvent Activity
			if (IsValid(EventSteps)) bIsTempWaitForInteractibleFuseBox = EventSteps->bIsTempWaitForInteractibleFuseBox;

			bIsUiActive = true; // NOT IN USE YET 

			return true;
		}
		// Reception Phone
		else if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(ReceptionPhoneTagName) && bIsReceptionPhone)
		{
			bIsLookingAtFuBox = false;
			bIsLookingAtRecDoor = false;
			bIsLookingAtFuseBox_Interactible = false;

			bIsLookingReceptionPhone = true;

			bIsUiActive = true; // NOT IN USE YET 

			return true;
		}
	}
	else if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, EndLong, ECollisionChannel::ECC_Visibility, CollisionParams))
	{
		if (HitResult.GetActor() && HitResult.GetActor()->ActorHasTag(WhiteFaceTagName) && bIsObjectiveOfficeKeyCollected) // CLapp Started
		{
			TArray<AActor*> TaggedActors;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(), WhiteFaceTagName, TaggedActors);

			// Assuming Actor is a member variable of ABoxTrigger
			this->WhiteFace = nullptr;

			if (TaggedActors.Num() > 0)
			{
				// Iterate through the tagged actors and find the first valid ACole
				for (AActor* Actor : TaggedActors)
				{
					AWhiteFace* PotentialWhiteFace = Cast<AWhiteFace>(Actor);
					if (IsValid(PotentialWhiteFace))
					{
						this->WhiteFace = PotentialWhiteFace; break;
					}
				}
			}

			UnloadSublevel(TEXT("LightsF1"));

			StartTimer(2.5f);

			if (IsValid(this->WhiteFace)) 
			{
				this->WhiteFace->WhiteFaceClapp(true);
			}
			else UE_LOG(LogTemp, Warning, TEXT("WhiteFace ignores me..."));

			return true;
		}
	}

	bIsLookingAtFuBox = false;
	bIsLookingAtRecDoor = false;
	bIsLookingAtFuseBox_Interactible = false;
	bIsLookingReceptionPhone = false;

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
	if (!isFlashlightEquiped && isFlashlightInInventory)
	{
		//FlashlightMesh->bHiddenInGame = false;
		UE_LOG(LogTemp, Log, TEXT("Equip Flishlight TRUE!"));
		isFlashlightEquiped = true;
	}
	else if (isFlashlightEquiped && isFlashlightInInventory)
	{
		//FlashlightMesh->bHiddenInGame = true;
		UE_LOG(LogTemp, Log, TEXT("Equip Flashlight FALSE!"));
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

void AFirstPersonCharacter::TogglePauseMenu()
{
	return;
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