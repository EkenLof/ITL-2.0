#include "Gameplay/GameplayEvents.h"

#include "GameFramework/Actor.h"

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

// Other Scripts
#include "Audio/ActorSoundSystem.h"
#include "Sound/SoundCue.h"

AGameplayEvents::AGameplayEvents()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsTempWaitForInteractibleFuseBox = false;

	bIsStep1 = false;
	bIsStep2 = false;
	bIsStep3 = false;
	bIsStep4 = false;
	bIsStep5 = false;
	bIsStep6 = false;

	//Objective = CreateDefaultSubobject<UObjectivePanel>(TEXT("Objective"));
	
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
	ReceptionPhoneTagName = FName(TEXT("ReceptionPhone")); // ReceptionPhone
	LighterTagName = FName(TEXT("Lighter")); // Lighter
	Trig2TagName = FName(TEXT("Trigger_2_ACT1")); // MissingCole

	LightsB1Reception_SL = FName(TEXT("LightsB1Reception"));
	LightsF1_SL = FName(TEXT("LightsF1"));

	Trig3TagName = FName(TEXT("Trigger_3_ACT1")); //Trigger_3_ACT1
	Trig4TagName = FName(TEXT("Trigger_4_ACT1"));

	
	ReceptionPhoneKeyTagName = FName(TEXT("ReceptionPhone_Key")); // ReceptionPhone_Key
	// Door_To_OfficeKey
}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

	LoadSublevel(LightsB1Reception_SL);

	// Varible Check & assign. 
	UpdateVaribleState(MissingColeTriggerStart, Trig2TagName);
	UpdateVaribleState(ExitFuseBoxRoomActor, Trig3TagName);
	UpdateVaribleState(ExitReceptionPhoneActor, Trig4TagName);

	UpdateVaribleState(LanternActor, LanternTagName);
	UpdateVaribleState(LanternBrockenActor, LanternBrokenTagName);
	UpdateVaribleState(ColeStorageRoomActor, ColeStorageRoomTagName);
	UpdateVaribleState(ElectricKeyActor, ElectricKeyTagName);
	UpdateVaribleState(ElectricKey_KeyActor, ElectricKey_KeyTagName);

	UpdateVaribleState(Fuse10A_ToFuseBoxActor, Fuse10A_ToFuseBoxTagName);
	UpdateVaribleState(LighterActor, LighterTagName);
	UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
	UpdateVaribleState(ReceptionPhoneKeyActor, ReceptionPhoneKeyTagName);

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
	UWorld* World = GetWorld();

	if(!World)
	{
		UE_LOG(LogTemp, Error, TEXT("World is null in UpdateVaribleState"));
		return;
	}
	else
	{
		if (!IsValid(ActorReference))
		{
			//ActorReference = nullptr;

			TArray<AActor*> FoundActors;

			UGameplayStatics::GetAllActorsWithTag(World, TagName, FoundActors);

			if (FoundActors.Num() > 0)
			{
				UE_LOG(LogTemp, Error, TEXT("FOUND"));
				ActorReference = FoundActors[0];
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("NOT-FOUND"));
			}
		}
	}
}

void AGameplayEvents::InitializeActorSoundSystem()
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

// Function to load a sublevel
void AGameplayEvents::LoadSublevel(FName LevelName)
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

		UE_LOG(LogTemp, Warning, TEXT("World and LevelName are valid. Attempting to load sublevel: %s"), *LevelName.ToString());

		FLatentActionInfo LatentInfo;
		LatentInfo.CallbackTarget = this;
		LatentInfo.ExecutionFunction = "OnSublevelLoaded";
		LatentInfo.Linkage = 0;
		LatentInfo.UUID = __LINE__;

		// Attempt to load the level
		UGameplayStatics::LoadStreamLevel(this, LevelName, true, true, LatentInfo);

		UE_LOG(LogTemp, Warning, TEXT("LoadStreamLevel called for sublevel: %s"), *LevelName.ToString());
	}
}

void AGameplayEvents::OnSublevelLoaded()
{
	UE_LOG(LogTemp, Warning, TEXT("Sublevel successfully loaded"));
}

// Function to unload a sublevel
void AGameplayEvents::UnloadSublevel(FName LevelName)
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
			UE_LOG(LogTemp, Warning, TEXT("Attempting to unload sublevel: %s"), *LevelName.ToString());

			UGameplayStatics::UnloadStreamLevel(this, LevelName, FLatentActionInfo(), false); // ShouldBlockOnLoad: True = loaded before anything else runs / False = Loading in the background and gives a smoother gamplay.
		}
		else UE_LOG(LogTemp, Warning, TEXT("LevelName is None"));
	}

	//UGameplayStatics::UnloadStreamLevel(this, LevelName, FLatentActionInfo(), true); // Change to 'false' if you want non-blocking
}


void AGameplayEvents::ToggleOn()
{
	return;
}

void AGameplayEvents::ToggleOff()
{
	if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(false);

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

	if (IsValid(MissingColeTriggerStart)) MissingColeTriggerStart->SetActorEnableCollision(false);

	if (IsValid(ReceptionPhoneKeyActor)) ReceptionPhoneKeyActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("ReceptionPhoneKeyActor is NOT Valid"));

	if (IsValid(ExitFuseBoxRoomActor)) ExitFuseBoxRoomActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("ExitFuseBoxRoomActor is NOT Valid"));

	if (IsValid(ExitReceptionPhoneActor)) ExitReceptionPhoneActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("ExitReceptionPhoneActor is NOT Valid"));
}

void AGameplayEvents::NextStep(int32 StepUp)
{
	switch (StepUp)
	{
	case 0: Step0(); break;
	case 1: Step1(); break;
	case 2: Step2(); break;
	case 3: Step3(); break;
	case 4: Step4(); break;
	case 5: Step5(); break;
	case 6: Step6(); break;
	case 7: Step7(); break;
	case 8: Step8(); break;
	case 9: Step9(); break;
	case 10: Step10(); break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("NextStep() encountered an unknown step number"));
		break;
	}
}


void AGameplayEvents::Step0() 
{
	// Blacksceen StoryScene Before entering Buildning.
	// Getting a message from Cole (With instructions of Flashlight and Where he is).
	// NEVER ACTIVE BECAUSE OF TEMP ---BEGINPLAY()---
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 0 Active---"));
}

void AGameplayEvents::Step1() 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 1 Active---"));
}

void AGameplayEvents::Step2() 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 2 Active---"));
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
	else UE_LOG(LogTemp, Warning, TEXT("---*Lantern ON* NOT POSSIBLE---"));

	if (IsValid(LanternBrockenActor)) // LanternBroken
	{
		LanternBrockenActor->SetActorHiddenInGame(false);
		LanternBrockenActor->SetActorEnableCollision(true);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*LanternBroken ON* NOT POSSIBLE---"));

	if (IsValid(ColeStorageRoomActor)) // Cole
	{
		ColeStorageRoomActor->SetActorHiddenInGame(true);
		ColeStorageRoomActor->SetActorEnableCollision(false);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*Cole ON* NOT POSSIBLE---"));

	if (IsValid(ElectricKeyActor) && IsValid(ElectricKey_KeyActor)) // ElectricKey
	{
		ElectricKeyActor->SetActorHiddenInGame(false);
		ElectricKeyActor->SetActorEnableCollision(true);
		ElectricKey_KeyActor->SetActorEnableCollision(true);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*ElectricKey ON* NOT POSSIBLE---"));
	
	if (IsValid(MissingColeTriggerStart))
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("---MissinColeTrigger ON---"));
		MissingColeTriggerStart->SetActorEnableCollision(true);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*MissinColeTrigger ON* NOT POSSIBLE---"));
}

void AGameplayEvents::Step6()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 6 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Look for the Electric-KEY---"));

	delete ColeStorageRoomActor;
	delete LanternActor;

	// Message from cole informing that he is in the Manegers.Office.
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("*Message from cole: \nInforming that he is in the Manegers_Office*"));
}

void AGameplayEvents::Step7()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 7 Active---"));
	
	// Value To FirstPersonCharacter
	bIsTempWaitForInteractibleFuseBox = true;

}
void AGameplayEvents::Step8()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 8 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Light Restored---"));

	// Fuse10A_ToFuseBoxActor
	UpdateVaribleState(Fuse10A_ToFuseBoxActor, Fuse10A_ToFuseBoxTagName);
	if (IsValid(Fuse10A_ToFuseBoxActor)) Fuse10A_ToFuseBoxActor->SetActorHiddenInGame(false);
	else UE_LOG(LogTemp, Warning, TEXT("Fuse10A_ToFuseBoxActor is NOT Valid"));

	// ReceptionPhoneActor
	UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
	if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(true);
	else UE_LOG(LogTemp, Warning, TEXT("ReceptionPhoneActor is NOT Valid"));

	// Trigger for Lights
	UpdateVaribleState(ExitFuseBoxRoomActor, Trig3TagName);
	if (IsValid(ExitFuseBoxRoomActor)) ExitFuseBoxRoomActor->SetActorEnableCollision(true);
	else UE_LOG(LogTemp, Warning, TEXT("ExitFuseBoxRoomActor is NOT Valid"));

	// Play Reception Phone audio
	InitializeActorSoundSystem();
	if (IsValid(ActorSoundSystem)) ActorSoundSystem->PlayReceptionPhoneAudio();
	else UE_LOG(LogTemp, Warning, TEXT("ActorSoundSystem is NOT Valid"));
}

void AGameplayEvents::Step9()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 9 Active---"));

	// Stop the PhoneSound // Collision Not Active
	UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
	if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("NOT Valid *ReceptionPhoneActor*"));

	InitializeActorSoundSystem();
	if (IsValid(ActorSoundSystem))ActorSoundSystem->StopReceptionPhoneAudio();
	else UE_LOG(LogTemp, Warning, TEXT("NOT Valid *ActorSoundSystem*"));

	UpdateVaribleState(ExitReceptionPhoneActor, Trig4TagName);
	if (IsValid(ExitReceptionPhoneActor)) ExitReceptionPhoneActor->SetActorEnableCollision(true);
	else UE_LOG(LogTemp, Warning, TEXT("ExitReceptionPhoneActor is NOT Valid"));
}
void AGameplayEvents::Step10()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 10 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Footsteps runnging from F1 (Above) \nF1 Footprint to F2---"));


	// Door To OfficeKey OPEN

}