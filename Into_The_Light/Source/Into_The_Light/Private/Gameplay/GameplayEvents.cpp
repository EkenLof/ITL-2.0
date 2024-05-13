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
	// Default Value 
	LevelStep = 0;

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
	

	ReceptionLightsTagName = FName(TEXT("Reception_Lights"));
	F1LightsTagName = FName(TEXT("F1_Lights"));
	F1OfficeLightsTagName = FName(TEXT("F1_Office_Lights"));
	F1ConferanceLightsTagName = FName(TEXT("F1_Conferance_Lights"));
	F1StorageRoomLightsTagName = FName(TEXT("F1_StorageRoom_Lights"));

	LanternTagName = FName(TEXT("Lantern"));
	LanternBrokenTagName = FName(TEXT("LanternBroken"));
	ColeStorageRoomTagName = FName(TEXT("Cole_StorageRoom"));
	ElectricKeyTagName = FName(TEXT("ElectricKey"));

	Trig3TagName = FName(TEXT("Trigger_3_ACT1")); // FuseBox
	Trig4TagName = FName(TEXT("Trigger_4_ACT1")); // MissingCole

}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

	// Assigning to Varible
	// ---Lights--- //
	TArray<AActor*> ActorFoundByTag1;
	TArray<AActor*> ActorFoundByTag2;
	TArray<AActor*> ActorFoundByTag3;
	TArray<AActor*> ActorFoundByTag4;
	TArray<AActor*> ActorFoundByTag5;

	// ---EventActor--- //
	TArray<AActor*> ActorFoundByTag6;
	TArray<AActor*> ActorFoundByTag7;
	TArray<AActor*> ActorFoundByTag8;
	TArray<AActor*> ActorFoundByTag9;

	// ---Triggers--- //
	TArray<AActor*> ActorFoundByTag10;
	TArray<AActor*> ActorFoundByTag11;

	UWorld* LevelWorld = GetWorld();

	if (LevelWorld)
	{
		// ---Lights--- //
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ReceptionLightsTagName, ActorFoundByTag1);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, F1LightsTagName, ActorFoundByTag2);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, F1OfficeLightsTagName, ActorFoundByTag3);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, F1ConferanceLightsTagName, ActorFoundByTag4);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, F1StorageRoomLightsTagName, ActorFoundByTag5);

		// ---EventActor--- //
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, LanternTagName, ActorFoundByTag6);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, LanternBrokenTagName, ActorFoundByTag7);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ColeStorageRoomTagName, ActorFoundByTag8);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ElectricKeyTagName, ActorFoundByTag9);

		// ---Triggers--- //
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, Trig3TagName, ActorFoundByTag10);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, Trig4TagName, ActorFoundByTag11);

		// 1 Lights
		for (AActor* Actor : ActorFoundByTag1)
		{
			if (ActorFoundByTag1.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				Lights[0] = ActorFoundByTag1[0];
			}
		}

		// 2 Lights
		for (AActor* Actor : ActorFoundByTag2)
		{
			if (ActorFoundByTag2.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				Lights[1] = ActorFoundByTag2[0];
			}
		}

		// 3 Lights
		for (AActor* Actor : ActorFoundByTag3)
		{
			if (ActorFoundByTag3.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				Lights[2] = ActorFoundByTag3[0];
			}
		}

		// 4 Lights
		for (AActor* Actor : ActorFoundByTag4)
		{
			if (ActorFoundByTag4.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				Lights[3] = ActorFoundByTag4[0];
			}
		}

		// 5 Lights
		for (AActor* Actor : ActorFoundByTag5)
		{
			if (ActorFoundByTag5.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				Lights[4] = ActorFoundByTag5[0];
			}
		}

		// 6 EventActor (Lantern)
		for (AActor* Actor : ActorFoundByTag6)
		{
			if (ActorFoundByTag6.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				EventActors[0] = ActorFoundByTag6[0];
			}
		}

		// 7 EventActor (LanternBroken)
		for (AActor* Actor : ActorFoundByTag7)
		{
			if (ActorFoundByTag7.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				EventActors[1] = ActorFoundByTag7[0];
			}
		}

		// 8 EventActor (Cole)
		for (AActor* Actor : ActorFoundByTag8)
		{
			if (ActorFoundByTag8.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				EventActors[2] = ActorFoundByTag8[0];
			}
		}
		// 9 EventActor (ElectricKey)
		for (AActor* Actor : ActorFoundByTag9)
		{
			if (ActorFoundByTag9.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				EventActors[3] = ActorFoundByTag9[0];
			}
		}

		// 10 (FuseBox Trigger)
		for (AActor* Actor : ActorFoundByTag10)
		{
			if (ActorFoundByTag10.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				FuseBoxTriggerStart = ActorFoundByTag10[0];
			}
		}
		// 11 (MissingCole Trigger)
		for (AActor* Actor : ActorFoundByTag11)
		{
			if (ActorFoundByTag11.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Found---"));
				MissingColeTriggerStart = ActorFoundByTag11[0];
			}
		}
	}
	// Assigning to Varible

	ToggleOff(); // Lights off F1

	NextStep(1); // Temp. Change to some action to Active for Events
}

void AGameplayEvents::NextStep(int32 StepUp)
{
	LevelStep += StepUp;

	switch (LevelStep)
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
		Step4();
		break;
	case 6:
		Step4();
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

void AGameplayEvents::ToggleOn()
{
	//if (Lights[0]) Lights[0]->SetActorHiddenInGame(false);
	if (Lights[1]) Lights[1]->SetActorHiddenInGame(false);
	if (Lights[2]) Lights[2]->SetActorHiddenInGame(false);
	if (Lights[3]) Lights[3]->SetActorHiddenInGame(false);
	if (Lights[4]) Lights[4]->SetActorHiddenInGame(false);
}

void AGameplayEvents::ToggleOff()
{
	// Lights
	//if (Lights[0]) Lights[0]->SetActorHiddenInGame(true);
	if (Lights[1]) Lights[1]->SetActorHiddenInGame(true);
	if (Lights[2]) Lights[2]->SetActorHiddenInGame(true);
	if (Lights[3]) Lights[3]->SetActorHiddenInGame(true);
	if (Lights[4]) Lights[4]->SetActorHiddenInGame(true);

	// EventActors
	//if (EventActors[0]) EventActors[0]->SetActorHiddenInGame(true); // Lantern
	if (EventActors[1]) // LanternBroken
	{
		EventActors[1]->SetActorHiddenInGame(true);
		EventActors[1]->SetActorEnableCollision(false);
	}
	//if (EventActors[2]) EventActors[2]->SetActorHiddenInGame(true); // Cole
	if (EventActors[3]) // ElectricKey
	{
		EventActors[3]->SetActorHiddenInGame(true);
		EventActors[3]->SetActorEnableCollision(false);
	}

	if (MissingColeTriggerStart) MissingColeTriggerStart->SetActorEnableCollision(false);
	if (FuseBoxTriggerStart) FuseBoxTriggerStart->SetActorEnableCollision(false);
}


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
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("OBJECTIVE: Get FLashlight and battery."));

	// Door to Second floor is locked
}

void AGameplayEvents::Step2() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 2 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Items collected, go to second floor storageroom (Cole)---"));

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

	FName Trig1TagName = FName(TEXT("Trigger_1_ACT1"));
	FName Trig2TagName = FName(TEXT("Trigger_2_ACT1"));

	FName HidWallTagName = FName(TEXT("HiddenWall_1_ACT1"));

	TArray<AActor*> ActorFoundByTagTrig1;
	//TArray<AActor*> ActorFoundByTagTrig2;
	TArray<AActor*> ActorFoundByTagHidWall1;

	UWorld* LevelWorld = GetWorld();

	if (LevelWorld)
	{
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, Trig1TagName, ActorFoundByTagTrig1);
		//UGameplayStatics::GetAllActorsWithTag(LevelWorld, Trig2TagName, ActorFoundByTagTrig2);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, HidWallTagName, ActorFoundByTagHidWall1);

		// Trigger 1
		for (AActor* Actor : ActorFoundByTagTrig1)
		{
			if (ActorFoundByTagTrig1.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
				ReceptionTriggerStart = ActorFoundByTagTrig1[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Not-Found---"));
			}
		}
		// Trigger 2
		/*
		for (AActor* Actor : ActorFoundByTagTrig2)
		{
			if (ActorFoundByTagTrig2.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
				ReceptionTriggerStart = ActorFoundByTagTrig2[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Not-Found---"));
			}
		}
		*/
		
		// HiddenWall 1
		for (AActor* Actor : ActorFoundByTagHidWall1)
		{
			if (ActorFoundByTagHidWall1.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionHiddenWall Found---"));
				ReceptionHiddenWall = ActorFoundByTagHidWall1[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionHiddenWall Not-Found---"));
			}
		}
	}
	
	if (ReceptionTriggerStart)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Active---"));
		ReceptionTriggerStart->SetActorEnableCollision(false);
	}
	if (ReceptionHiddenWall)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionHiddenWall Active---"));
		ReceptionHiddenWall->SetActorEnableCollision(false);
	}		
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
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Meeting Cole---"));

	// Anim Play.
	if (ColeInteractAnimSeq)
	{

		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("***ColeInteractAnimSeq***"));
		//FString SequenceName = ("/Game/Animation/Cole/Animations/LS_Cole_StorageRoomInteraction.LS_Cole_StorageRoomInteraction");

	}

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Take 10A fuse from Cole---"));
}

void AGameplayEvents::Step4()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 4 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Fuse Collected---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Put the 10A Fuse in the Fusebox---"));

	if (FuseBoxTriggerStart) FuseBoxTriggerStart->SetActorEnableCollision(true);
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Fuse Trigger TRUE---"));
}

void AGameplayEvents::Step5()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 5 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---The Fusebox is Locked, you need a key---"));

	// EventActors
	if (EventActors[0]) // Lantern
	{
		EventActors[0]->SetActorHiddenInGame(true);
		EventActors[0]->SetActorEnableCollision(false);
	}
	if (EventActors[1]) // LanternBroken
	{
		EventActors[1]->SetActorHiddenInGame(false);
		EventActors[1]->SetActorEnableCollision(true);
	}
	if (EventActors[2]) // Cole
	{
		EventActors[2]->SetActorHiddenInGame(true);
		EventActors[2]->SetActorEnableCollision(false);
	}
	if (EventActors[3]) // ElectricKey
	{
		EventActors[3]->SetActorHiddenInGame(false);
		EventActors[3]->SetActorEnableCollision(true);
	}

	if (MissingColeTriggerStart) MissingColeTriggerStart->SetActorEnableCollision(true);
	//if (FuseBoxTriggerStart) FuseBoxTriggerStart->SetActorEnableCollision(false);
}

void AGameplayEvents::Step6()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 6 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Look For Cole---"));
}
