#include "Gameplay/GameplayEvents.h"

#include "Engine/World.h"
#include "Engine/LevelStreaming.h"

#include "EngineUtils.h"

#include "Kismet/GameplayStatics.h"
#include "Logging/LogMacros.h"

#include "MovieScene.h"
#include "MovieSceneSequencePlayer.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimSequence.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"

#include "Runtime/LevelSequence/Public/LevelSequence.h"
#include "Runtime/LevelSequence/Public/LevelSequencePlayer.h"
#include "Runtime/LevelSequence/Public/LevelSequenceActor.h"

#include "Audio/ActorSoundSystem.h"

#include "Sound/SoundCue.h"

AGameplayEvents::AGameplayEvents()
{
	PrimaryActorTick.bCanEverTick = true;

	
	// SoundCueAsset(TEXT("/Game/Audio/Phone/Reception-Phone/Reception_PhoneCall"));


	// static ConstructorHelpers::FObjectFinder<ULevelSequence> ColeInteractSequenceFinder(TEXT("LevelSequence'/All/Game/Animation/Cole/Animations/AS_Cole_StorageRoomInteraction'"));

	ReceptionLightsTagName = FName(TEXT("Reception_Lights"));
	F1LightsTagName = FName(TEXT("F1_Lights"));
	F1OfficeLightsTagName = FName(TEXT("F1_Office_Lights"));
	F1ConferanceLightsTagName = FName(TEXT("F1_Conferance_Lights"));
	F1StorageRoomLightsTagName = FName(TEXT("F1_StorageRoom_Lights"));

	LanternTagName = FName(TEXT("Lantern"));
	LanternBrokenTagName = FName(TEXT("LanternBroken"));
	ColeStorageRoomTagName = FName(TEXT("Cole_StorageRoom"));
	ElectricKeyTagName = FName(TEXT("ElectricKey"));
	ElectricKey_KeyTagName = FName(TEXT("ElectricKey_Key")); // ElectricKey_Key

	Fuse10A_ToFuseBoxTagName = FName(TEXT("Fuse10A_InFuseBox")); //Fuse10A_InFuseBox
	FuseBox_InteractibleTagName = FName(TEXT("FuseBox_Interactible")); // FuseBox_Interactible
	//Fuse10A_InFuseBoxTransTagName = FName(TEXT("Fuse10A_InFuseBoxTransparent")); // Fuse10A_InFuseBoxTransparent
	ReceptionPhoneTagName = FName(TEXT("ReceptionPhone")); // ReceptionPhone

	LighterTagName = FName(TEXT("Lighter")); // Lighter

	Trig2TagName = FName(TEXT("Trigger_2_ACT1")); // MissingCole

	Sublvl1 = FName(TEXT("Interior_Doors"));
	SubLvl2 = FName(TEXT("Sublvl2"));
	Sublvl3 = FName(TEXT("Sublvl3"));
	SubLvl4 = FName(TEXT("Sublvl4"));
	Sublvl5 = FName(TEXT("Sublvl5"));
	SubLvl6 = FName(TEXT("Sublvl6"));
}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

	//LoadSublevel(Sublvl1);

	// Varible Check & assign. 
	UpdateVaribleState(MissingColeTriggerStart, Trig2TagName);

	UpdateVaribleState(ReceptionLight, ReceptionLightsTagName);
	UpdateVaribleState(F1Light, F1LightsTagName);
	UpdateVaribleState(F1OfficeLight, F1OfficeLightsTagName);
	UpdateVaribleState(F1ConferanceLight, F1ConferanceLightsTagName);
	UpdateVaribleState(F1StorageRoomLight, F1StorageRoomLightsTagName);

	UpdateVaribleState(LanternActor, LanternTagName);
	UpdateVaribleState(LanternBrockenActor, LanternBrokenTagName);
	UpdateVaribleState(ColeStorageRoomActor, ColeStorageRoomTagName);
	UpdateVaribleState(ElectricKeyActor, ElectricKeyTagName);
	UpdateVaribleState(ElectricKey_KeyActor, ElectricKey_KeyTagName);

	UpdateVaribleState(Fuse10A_ToFuseBoxActor, Fuse10A_ToFuseBoxTagName);
	UpdateVaribleState(FuseBox_InteractibleActor, FuseBox_InteractibleTagName);
	//UpdateVaribleState(Fuse10A_InFuseBoxTransActor, Fuse10A_InFuseBoxTransTagName);
	UpdateVaribleState(LighterActor, LighterTagName);
	UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);

	InitializeActorSoundSystem();

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
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("FOUND: " + TagName.ToString()));
			ActorReference = FoundActors[0];
		}
		else 
		{ 
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT(" NOT-FOUND: " + TagName.ToString())); 
		}
	}
}

void AGameplayEvents::InitializeActorSoundSystem()
{
	// Find the ActorSoundSystem in the world
	for (TActorIterator<AActorSoundSystem> It(GetWorld()); It; ++It)
	{
		ActorSoundSystem = *It;
		break;
	}

	if (!ActorSoundSystem)
	{
		UE_LOG(LogTemp, Error, TEXT("ActorSoundSystem not found!"));
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("ActorSoundSystem NOT Found!"));
	}
}


// Function to load a sublevel
void AGameplayEvents::LoadSublevel(FName LevelName)
{
	if (!LevelName.IsNone()) UGameplayStatics::LoadStreamLevel(this, LevelName, true, false, FLatentActionInfo()); // ShouldBlockOnLoad: True = loaded before anything else runs / False = Loading in the background and gives a smoother gamplay.
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LevelName is None"));
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Red, TEXT("LevelName is None"));
	}
}

// Function to unload a sublevel
void AGameplayEvents::UnloadSublevel(FName LevelName)
{
	if (LevelName.IsNone())
	{
		UE_LOG(LogTemp, Warning, TEXT("LevelName is None"));
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Red, TEXT("LevelName is None"));
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("World is null"));
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Red, TEXT("World is null"));
		return;
	}

	if (!LevelName.IsNone())
	{
		UE_LOG(LogTemp, Warning, TEXT("Attempting to unload sublevel: %s"), *LevelName.ToString());
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Red, TEXT("SUBLEVEL UNLOADED"));

		UGameplayStatics::UnloadStreamLevel(this, LevelName, FLatentActionInfo(), false); // ShouldBlockOnLoad: True = loaded before anything else runs / False = Loading in the background and gives a smoother gamplay.
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LevelName is None"));
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ERROR: SUBLEVEL UNLOADED / LevelName is None"));
	}

	//UGameplayStatics::UnloadStreamLevel(this, LevelName, FLatentActionInfo(), true); // Change to 'false' if you want non-blocking
}


void AGameplayEvents::ToggleOn()
{
	if (IsValid(F1Light)) F1Light->SetActorHiddenInGame(false);
	if (IsValid(F1OfficeLight)) F1OfficeLight->SetActorHiddenInGame(false);
	if (IsValid(F1ConferanceLight)) F1ConferanceLight->SetActorHiddenInGame(false);
	if (IsValid(F1StorageRoomLight)) F1StorageRoomLight->SetActorHiddenInGame(false);
	if (IsValid(Fuse10A_ToFuseBoxActor)) Fuse10A_ToFuseBoxActor->SetActorHiddenInGame(false);
	if(IsValid(LighterActor))
	{
		LighterActor->SetActorHiddenInGame(false);
		LighterActor->SetActorEnableCollision(true);
	}
}

void AGameplayEvents::ToggleOff()
{
	// Lights
	//if (IsValid(ReceptionLight)) ReceptionLight->SetActorHiddenInGame(true);
	if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(false);

	if (IsValid(F1Light)) F1Light->SetActorHiddenInGame(true);
	if (IsValid(F1OfficeLight)) F1OfficeLight->SetActorHiddenInGame(true);
	if (IsValid(F1ConferanceLight)) F1ConferanceLight->SetActorHiddenInGame(true);
	if (IsValid(F1StorageRoomLight)) F1StorageRoomLight->SetActorHiddenInGame(true);

	LighterActor->SetActorEnableCollision(false);

	// EventActors
	if (IsValid(LanternBrockenActor)) // LanternBroken
	{
		LanternBrockenActor->SetActorHiddenInGame(true);
		LanternBrockenActor->SetActorEnableCollision(false);
	}
	if (IsValid(ElectricKeyActor) && IsValid(ElectricKey_KeyActor)) // ElectricKey
	{
		ElectricKeyActor->SetActorHiddenInGame(true);
		ElectricKeyActor->SetActorEnableCollision(false);
		ElectricKey_KeyActor->SetActorEnableCollision(false);
	}

	if (IsValid(MissingColeTriggerStart))
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("---MissinColeTrigger OFF---"));
		MissingColeTriggerStart->SetActorEnableCollision(false);
	}

	if (IsValid(FuseBox_InteractibleActor)) FuseBox_InteractibleActor->SetActorEnableCollision(false);
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
	case 11:
		Step11();
		break;
	case 12:
		Step12();
		break;
	case 13:
		Step13();
		break;
	case 14:
		Step14();
		break;
	case 15:
		Step15();
		break;
	case 16:
		Step16();
		break;
	case 17:
		Step17();
		break;
	case 18:
		Step18();
		break;
	case 19:
		Step19();
		break;
	case 20:
		Step20();
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
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("OBJECTIVE: Find Cole."));

	// Door to Second floor is locked
}

void AGameplayEvents::Step2() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 2 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Items collected, go to second floor storageroom (Cole)---"));

	//UnloadSublevel(Sublvl1);

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
}

void AGameplayEvents::Step3()
{
	// Cole Meet Cutscene

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 3 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Meeting Cole---"));

	// Anim Play.

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
	UpdateVaribleState(ElectricKey_KeyActor, ElectricKey_KeyTagName);

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
	if (IsValid(ElectricKeyActor) && IsValid(ElectricKey_KeyActor)) // ElectricKey
	{
		ElectricKeyActor->SetActorHiddenInGame(false);
		ElectricKeyActor->SetActorEnableCollision(true);
		ElectricKey_KeyActor->SetActorEnableCollision(true);
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

	// Message from cole informing that he is in the Manegers.Office.
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("*Message from cole informing that he is in the Manegers_Office*"));
}

void AGameplayEvents::Step7()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 7 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Use the key & Restore the Light---"));

	UpdateVaribleState(FuseBox_InteractibleActor, FuseBox_InteractibleTagName);

	if (IsValid(FuseBox_InteractibleActor))
	{
		FuseBox_InteractibleActor->SetActorEnableCollision(true);
	}
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("---Fusebox Collusion On---"));
}
void AGameplayEvents::Step8()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 8 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Light Restored---"));

	UpdateVaribleState(F1Light, F1LightsTagName);
	UpdateVaribleState(F1OfficeLight, F1OfficeLightsTagName);
	UpdateVaribleState(F1ConferanceLight, F1ConferanceLightsTagName);
	UpdateVaribleState(F1StorageRoomLight, F1StorageRoomLightsTagName);

	UpdateVaribleState(Fuse10A_ToFuseBoxActor, Fuse10A_ToFuseBoxTagName);

	UpdateVaribleState(LighterActor, LighterTagName);

	ToggleOn();

	// Reception-Phone Rings // Play the sound // Colission Active
	UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
	if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(true);

	InitializeActorSoundSystem();
	if (IsValid(ActorSoundSystem))ActorSoundSystem->PlayReceptionPhoneAudio();
	else if (!IsValid(ActorSoundSystem)) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ActorSoundSystem is NOT Valid"));;
}
void AGameplayEvents::Step9()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 9 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Check the main office---"));

	// Stop the PhoneSound // Collision Not Active
	UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
	if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(false);
	else 
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("NOT Valid *ReceptionPhoneActor*"));
	}

	InitializeActorSoundSystem();
	if (IsValid(ActorSoundSystem))ActorSoundSystem->StopReceptionPhoneAudio();
	else if (!IsValid(ActorSoundSystem)) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("NOT Valid *ActorSoundSystem*"));

	// Reception light goes out
	UpdateVaribleState(ReceptionLight, ReceptionLightsTagName);

	if (IsValid(ReceptionLight)) ReceptionLight->SetActorHiddenInGame(true);
	else if (!IsValid(ReceptionLight)) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("NOT Valid *ReceptionLight*"));

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Lights in B1 goes out & Reception-Phone dies---"));
	// When it's dark.
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Footsteps runnging from F1 (Above)---"));
}
void AGameplayEvents::Step10()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 10 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---F1 Footprint to F2---"));

	// Sett active with trigger


}

void AGameplayEvents::Step11()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 11 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step12()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 12 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step13()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 13 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step14()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 14 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step15()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 15 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step16()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 16 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step17()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 17 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step18()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 18 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step19()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 19 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}

void AGameplayEvents::Step20() // END OF DEMO!!!
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 20 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("------"));
}
