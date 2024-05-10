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
	

}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

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

	default:
		break;
	}
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

	/*
	
	if (LevelWorld)
	{
		ULevelSequence* ColeInteractSequence = nullptr; // Assuming ColeInteractSequence is a ULevelSequence pointer
		ULevelSequence* ColeIdleSearchSequence = nullptr; // Assuming ColeIdleSearchSequence is a ULevelSequence pointer

		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ColeStorageRoomInteractTagName, ColeStorageRoomInteractTagFound);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ColeStorageRoomIdleSerachTagName, ColeStorageRoomIdleSerachTagFound);

		// Cole StorageRoom Interact
		if (ColeStorageRoomInteractTagFound.Num() > 0)
		{
			AActor* FoundActor = ColeStorageRoomInteractTagFound[0];
			ColeInteractSequence = Cast<ULevelSequence>(FoundActor->GetComponentByClass(ULevelSequence::StaticClass()));
			if (ColeInteractSequence)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("---Found Actor is not a ULevelSequence---"));
			}
		}
		else
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("---ReceptionTriggerStart Not-Found---"));
		}

		// Cole StorageRoom Interact
		if (ColeStorageRoomIdleSerachTagFound.Num() > 0)
		{
			AActor* FoundActor = ColeStorageRoomIdleSerachTagFound[0];
			ColeIdleSearchSequence = Cast<ULevelSequence>(FoundActor->GetComponentByClass(ULevelSequence::StaticClass()));
			if (ColeIdleSearchSequence)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("---Found Actor is not a ULevelSequence---"));
			}
		}
		else
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("---ReceptionTriggerStart Not-Found---"));
		}
	}
	

	// ORIGINAL

	if (LevelWorld)
	{
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ColeStorageRoomInteractTagName, ColeStorageRoomInteractTagFound);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, ColeStorageRoomIdleSerachTagName, ColeStorageRoomIdleSerachTagFound);

		// Cole StorageRoom Interact
		for (AActor* Actor : ColeStorageRoomInteractTagFound)
		{
			if (ColeStorageRoomInteractTagFound.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
				ColeInteractSequence = ColeStorageRoomInteractTagFound[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Not-Found---"));
			}
		}
		// Cole StorageRoom Interact
		for (AActor* Actor : ColeStorageRoomIdleSerachTagFound)
		{
			if (ColeStorageRoomIdleSerachTagFound.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
				ColeIdleSearchSequence = ColeStorageRoomIdleSerachTagFound[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Not-Found---"));
			}
		}
	}

	*/

	/*
	
	UPROPERTY(EditAnywhere, Category = "Animations | Cole")
	class ULevelSequence* ColeInteractSequence;
	UPROPERTY(EditAnywhere, Category = "Animations | Cole")
	class ULevelSequence* ColeIdleSearchSequence;
	
	*/


	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 3 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Meeting Cole---"));

	// Anim Play.
	if (ColeInteractSequence)
	{
		//LevelSequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(GetWorld(), ColeInteractSequence, FMovieSceneSequencePlaybackSettings(), LevelSequenceActor);

		static ULevelSequencePlayer* LevelSequencePlayer; // LSP

		ALevelSequenceActor* LevelSequenceActor;

		FStringAssetReference SequenceName;

		SequenceName = ("/Game/Animation/Cole/Animations/LS_Cole_StorageRoomInteraction.LS_Cole_StorageRoomInteraction");


		LevelSequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(WorldContextObject, ColeInteractSequence, FMovieSceneSequencePlaybackSettings(), LevelSequenceActor);

		ULevelSequence* Asset = Cast<ULevelSequence>(SequenceName.TryLoad());

		if (LevelSequencePlayer)
		{
			LevelSequencePlayer->Play();
			//LevelSequencePlayer->Stop(); // Idle or 3rd anim.
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("STARTING ANIM"));
		}
		else
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("NOT STARTING ANIM SPELLING WRONG OR SOMTHING ELSE"));
		}
		
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, TEXT("---Cole hit his head and turns around to interact---"));
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("---Coulden't start Animation---"));
	}
}

void AGameplayEvents::Step4()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 4 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Pick Up Fuse---"));
}
