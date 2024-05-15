#include "Gameplay/GameplayEvents.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#include "MovieScene.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

#include "Runtime/LevelSequence/Public/LevelSequence.h"
#include "Runtime/LevelSequence/Public/LevelSequencePlayer.h"
#include "Runtime/LevelSequence/Public/LevelSequenceActor.h"
#include "MovieSceneSequencePlayer.h"
#include "Animation/AnimSequence.h"

#include "Components/BoxComponent.h"

AGameplayEvents::AGameplayEvents()
{
	PrimaryActorTick.bCanEverTick = true;

	// static ConstructorHelpers::FObjectFinder<ULevelSequence> ColeInteractSequenceFinder(TEXT("LevelSequence'/All/Game/Animation/Cole/Animations/AS_Cole_StorageRoomInteraction'"));

	/*
	
	static ConstructorHelpers::FObjectFinder<ULevelSequence> ColeInteractSequenceFinder(TEXT("/All/Game/Animation/Cole/Animations/AS_Cole_StorageRoomInteraction"));
	if (ColeInteractSequenceFinder.Succeeded())
	{
		ColeInteractSequence = ColeInteractSequenceFinder.Object;
		UE_LOG(LogTemp, Warning, TEXT("ColeInteractSequence loaded successfully."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load ColeInteractSequence."));
	}
	
	*/

	//LevelWorld = GetWorld();

	ReceptionLightsTagName = FName(TEXT("Reception_Lights"));
	F1LightsTagName = FName(TEXT("F1_Lights"));
	F1OfficeLightsTagName = FName(TEXT("F1_Office_Lights"));
	F1ConferanceLightsTagName = FName(TEXT("F1_Conferance_Lights"));
	F1StorageRoomLightsTagName = FName(TEXT("F1_StorageRoom_Lights"));

	LanternTagName = FName(TEXT("Lantern"));
	LanternBrokenTagName = FName(TEXT("LanternBroken"));
	ColeStorageRoomTagName = FName(TEXT("Cole_StorageRoom"));
	ElectricKeyTagName = FName(TEXT("ElectricKey"));

	Trig2TagName = FName(TEXT("Trigger_2_ACT1")); // MissingCole
}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

	// Varible Check & assign. 
	UpdateVaribleState(ReceptionLight, ReceptionLightsTagName);
	UpdateVaribleState(F1Light, F1LightsTagName);
	UpdateVaribleState(F1OfficeLight, F1OfficeLightsTagName);
	UpdateVaribleState(F1ConferanceLight, F1ConferanceLightsTagName);
	UpdateVaribleState(F1StorageRoomLight, F1StorageRoomLightsTagName);

	UpdateVaribleState(LanternActor, LanternTagName);
	UpdateVaribleState(LanternBrockenActor, LanternBrokenTagName);
	UpdateVaribleState(ColeStorageRoomActor, ColeStorageRoomTagName);
	UpdateVaribleState(ElectricKeyActor, ElectricKeyTagName);

	UpdateVaribleState(MissingColeTriggerStart, Trig2TagName);

	ToggleOff(); // Start Values

	NextStep(1); // Temp. Change to some action to Active for Events
}

void AGameplayEvents::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGameplayEvents::UpdateVaribleState(AActor*& ActorReference, const FName& TagName)
{
	if (!IsValid(ActorReference))
	{
		ActorReference = nullptr;

		TArray<AActor*> FoundActors;

		UGameplayStatics::GetAllActorsWithTag(GetWorld(), TagName, FoundActors);

		if (FoundActors.Num() > 0) 
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("FOUND"));
			ActorReference = FoundActors[0];
		}
	}
}

void AGameplayEvents::ToggleOn()
{
	if (IsValid(F1Light)) F1Light->SetActorHiddenInGame(false);
	if (IsValid(F1OfficeLight)) F1OfficeLight->SetActorHiddenInGame(false);
	if (IsValid(F1ConferanceLight)) F1ConferanceLight->SetActorHiddenInGame(false);
	if (IsValid(F1StorageRoomLight)) F1StorageRoomLight->SetActorHiddenInGame(false);
}

void AGameplayEvents::ToggleOff()
{
	// Lights
	//if (IsValid(ReceptionLight)) ReceptionLight->SetActorHiddenInGame(true);

	if (IsValid(F1Light)) F1Light->SetActorHiddenInGame(true);
	if (IsValid(F1OfficeLight)) F1OfficeLight->SetActorHiddenInGame(true);
	if (IsValid(F1ConferanceLight)) F1ConferanceLight->SetActorHiddenInGame(true);
	if (IsValid(F1StorageRoomLight)) F1StorageRoomLight->SetActorHiddenInGame(true);

	// EventActors
	if (IsValid(LanternBrockenActor)) // LanternBroken
	{
		LanternBrockenActor->SetActorHiddenInGame(true);
		LanternBrockenActor->SetActorEnableCollision(false);
	}
	if (IsValid(ElectricKeyActor)) // ElectricKey
	{
		ElectricKeyActor->SetActorHiddenInGame(true);
		ElectricKeyActor->SetActorEnableCollision(false);
	}

	if (IsValid(MissingColeTriggerStart))
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("---MissinColeTrigger OFF---"));
		MissingColeTriggerStart->SetActorEnableCollision(false);
		//MissingColeTriggerStart->SetActorHiddenInGame(true);
	}

	// Unlock Reception Door.
}

void AGameplayEvents::NextStep(int32 StepUp)
{
	switch (StepUp)
	{
	case 0:
		Step0();
		break;
	case 1:
		Step1();
		break;
	case 2:
		Step2();
		break;
	case 3:
		Step3();
		break;
	case 4:
		Step4();
		break;
	case 5:
		Step5();
		break;
	case 6:
		Step6();
		break;
	case 7:
		Step7();
		break;
	case 8:
		Step8();
		break;
	case 9:
		Step9();
		break;
	case 10:
		Step10();
		break;

	default:
		break;
	}
}

/*
// Lights
Reception_Lights        // 0
F1_Lights               // 1
F1_Office_Lights        // 2
F1_Conferance_Lights    // 3
F1_StorageRoom_Lights   // 4

// EventActors
Cole_StorageRoom        // 0
Lantern                 // 1
LanternBroken           // 2
ElectricKey             // 3
*/


void AGameplayEvents::Step0() // 
{
	// SpawnPoint.
	// Blacksceen StoryScene Before entering Buildning.
	// Getting a message from Cole (With instructions of Flashlight and Where he is).
	// NEVER ACTIVE BECAUSE OF TEMP ---BEGINPLAY()---
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 0 Active---"));
}

void AGameplayEvents::Step1() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 1 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("OBJECTIVE: Find Cole."));

	// Door to Second floor is locked
}

void AGameplayEvents::Step2() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 2 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Items collected, go to second floor storageroom (Cole)---"));

	/*
	// Hide actor
	if (RecetionHiddenWall)
	{
		RecetionHiddenWall->SetActorHiddenInGame(true);
	}

	// Disable collision
	if (RecetionHiddenWall)
	{
		RecetionHiddenWall->SetActorEnableCollision(false);
	}

	// Destroy actor
	if (RecetionHiddenWall)
	{
		RecetionHiddenWall->Destroy();
	}
	*/

	// Unlock Reception Door.
}

void AGameplayEvents::Step3()
{
	/*
	
	FName ColeStorageRoomInteractTagName = FName(TEXT("LS_Cole_SearchIdle"));
	FName ColeStorageRoomIdleSerachTagName = FName(TEXT("LS_Cole_SR-Interact"));

	TArray<AActor*> ColeStorageRoomInteractTagFound;
	TArray<AActor*> ColeStorageRoomIdleSerachTagFound;

	UWorld* LevelWorld = GetWorld();

	if (LevelWorld)
	{
		ColeInteractSequence = nullptr; // Assuming ColeInteractSequence is a ULevelSequence pointer
		ColeIdleSearchSequence = nullptr; // Assuming ColeIdleSearchSequence is a ULevelSequence pointer

		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ColeStorageRoomInteractTagName, ColeStorageRoomInteractTagFound);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ColeStorageRoomIdleSerachTagName, ColeStorageRoomIdleSerachTagFound);

		// Cole StorageRoom Interact
		if (ColeStorageRoomInteractTagFound.Num() > 0)
		{
			AActor* FoundActor = ColeStorageRoomInteractTagFound[0];
			ColeInteractSequence = Cast<ULevelSequence>(FoundActor->GetComponentByClass(ULevelSequence::StaticClass()));
			if (ColeInteractSequence)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Emerald, TEXT("***Found Cole Interact***"));
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("***Found Actor is not a ULevelSequence (Cole Interact)***"));
			}
		}
		else
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("***Nothing Found***"));
		}

		// Cole StorageRoom Idle Serach
		if (ColeStorageRoomIdleSerachTagFound.Num() > 0)
		{
			AActor* FoundActor = ColeStorageRoomIdleSerachTagFound[0];
			ColeIdleSearchSequence = Cast<ULevelSequence>(FoundActor->GetComponentByClass(ULevelSequence::StaticClass()));
			if (ColeIdleSearchSequence)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Emerald, TEXT("***Found Cole Idle-Search***"));
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("***Found Actor is not a ULevelSequence (Cole Idle-Search)***"));
			}
		}
		else
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("***Nothing Found***"));
		}
	}

	*/

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 3 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Meeting Cole---"));

	// Anim Play.
	if (ColeInteractAnimSeq)
	{

		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("***ColeInteractAnimSeq***"));
		//FString SequenceName = ("/Game/Animation/Cole/Animations/LS_Cole_StorageRoomInteraction.LS_Cole_StorageRoomInteraction");

	}

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Take 10A fuse from Cole---"));
}

void AGameplayEvents::Step4()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 4 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Fuse Collected---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Put the 10A Fuse in the Fusebox---"));
}

void AGameplayEvents::Step5()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 5 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---The Fusebox is Locked, you need a key---"));

	UpdateVaribleState(LanternActor, LanternTagName);
	UpdateVaribleState(LanternBrockenActor, LanternBrokenTagName);
	UpdateVaribleState(ColeStorageRoomActor, ColeStorageRoomTagName);
	UpdateVaribleState(ElectricKeyActor, ElectricKeyTagName);

	UpdateVaribleState(MissingColeTriggerStart, Trig2TagName);

	
	if (IsValid(LanternActor)) // Lantern
	{
		LanternActor->SetActorHiddenInGame(true);
		LanternActor->SetActorEnableCollision(false);
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, TEXT("---*Lantern ON* NOT POSSIBLE---"));
	}
	if (IsValid(LanternBrockenActor)) // LanternBroken
	{
		LanternBrockenActor->SetActorHiddenInGame(false);
		LanternBrockenActor->SetActorEnableCollision(true);
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, TEXT("---*LanternBroken ON* NOT POSSIBLE---"));
	}
	if (IsValid(ColeStorageRoomActor)) // Cole
	{
		ColeStorageRoomActor->SetActorHiddenInGame(true);
		ColeStorageRoomActor->SetActorEnableCollision(false);
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, TEXT("---*Cole ON* NOT POSSIBLE---"));
	}
	if (IsValid(ElectricKeyActor)) // ElectricKey
	{
		ElectricKeyActor->SetActorHiddenInGame(false);
		ElectricKeyActor->SetActorEnableCollision(true);
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, TEXT("---*ElectricKey ON* NOT POSSIBLE---"));
	}
	
	if (IsValid(MissingColeTriggerStart))
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("---MissinColeTrigger ON---"));
		MissingColeTriggerStart->SetActorEnableCollision(true);
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, TEXT("---*MissinColeTrigger ON* NOT POSSIBLE---"));
	}
}

void AGameplayEvents::Step6()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 6 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Look for the Electric-KEY---"));

}

void AGameplayEvents::Step7()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 7 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Use the key & Restore the Light---"));

}
void AGameplayEvents::Step8()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 8 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Light Restored---"));

	UpdateVaribleState(F1Light, F1LightsTagName);
	UpdateVaribleState(F1OfficeLight, F1OfficeLightsTagName);
	UpdateVaribleState(F1ConferanceLight, F1ConferanceLightsTagName);
	UpdateVaribleState(F1StorageRoomLight, F1StorageRoomLightsTagName);

	ToggleOn();

	// Reception-Phone Rings
}
void AGameplayEvents::Step9()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 9 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Look For Cole---"));
}
void AGameplayEvents::Step10()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 10 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Look For Cole---"));
}
