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
	
	ReceptionLightsTagName = FName(TEXT("Reception_Lights"));
	F1LightsTagName = FName(TEXT("F1_Lights"));
	F1OfficeLightsTagName = FName(TEXT("F1_Office_Lights"));
	F1ConferanceLightsTagName = FName(TEXT("F1_Conferance_Lights"));
	F1StorageRoomLightsTagName = FName(TEXT("F1_StorageRoom_Lights"));
	
	ReceptionPhoneTagName = FName(TEXT("ReceptionPhone")); // ReceptionPhone **
	LighterTagName = FName(TEXT("Lighter")); // Lighter

	LightsB1Reception_SL = FName(TEXT("LightsB1Reception"));
	//LightsF1_SL = FName(TEXT("LightsF1"));
	//LightsF2_SL = FName(TEXT("LightsF2"));

	ReceptionPhoneKeyTagName = FName(TEXT("ReceptionPhone_Key")); // ReceptionPhone_Key
	// Door_To_OfficeKey

	//ReceptionPhoneTrigTagName = FName(TEXT("ReceptionPhoneTrigger"));
}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

	//LoadSublevel(LightsB1Reception_SL);
	

	// Varible Check & assign. 
	UpdateVaribleState(LighterActor, LighterTagName);
	UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
	UpdateVaribleState(ReceptionPhoneKeyActor, ReceptionPhoneKeyTagName);

	//InitializeActorSoundSystem();

	ToggleOff(); // Start Values
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

//InitializeActorSoundSystem()
/*
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
} */

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

	if (IsValid(ReceptionPhoneKeyActor)) ReceptionPhoneKeyActor->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("ReceptionPhoneKeyActor is NOT Valid"));
}

/*
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
*/

/*
void AGameplayEvents::Step0() 
{
	// Blacksceen StoryScene Before entering Buildning.
	// NEVER ACTIVE BECAUSE OF TEMP ---BEGINPLAY()---
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 0 Active---"));
}

void AGameplayEvents::Step1() 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 1 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("*Message from Cole*"));
}

void AGameplayEvents::Step2() 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 2 Active---"));
	//LoadSublevel(LightsF2_SL);
}

void AGameplayEvents::Step3()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 3 Active---"));
}

void AGameplayEvents::Step4()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 4 Active---"));
}

void AGameplayEvents::Step5()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 5 Active---"));
    // BC 
}

void AGameplayEvents::Step6()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 6 Active---"));
}

void AGameplayEvents::Step7()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 7 Active---"));
	
	// Value To FirstPersonCharacter
	//bIsTempWaitForInteractibleFuseBox = true;

}

void AGameplayEvents::Step8()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 8 Active---"));

	//PlaySound *FPC
	
	
	// Play Reception Phone audio
	//InitializeActorSoundSystem();
	//if (IsValid(ActorSoundSystem)) ActorSoundSystem->PlayReceptionPhoneAudio();
	//else UE_LOG(LogTemp, Warning, TEXT("ActorSoundSystem is NOT Valid"));
	
	
}

void AGameplayEvents::Step9()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 9 Active---"));

	//StopSound *FPC

	
	// Stop the PhoneSound 
	//InitializeActorSoundSystem();
	//if (IsValid(ActorSoundSystem))ActorSoundSystem->StopReceptionPhoneAudio();
	//else UE_LOG(LogTemp, Warning, TEXT("ActorSoundSystem is NOT Valid"));
	

	

	//UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
	//if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(false);
	//else UE_LOG(LogTemp, Warning, TEXT("ReceptionPhoneActor is NOT Valid"));
	
	
	//UpdateVaribleState(ExitReceptionPhoneActor, ReceptionPhoneTrigTagName);
	//if (IsValid(ExitReceptionPhoneActor)) ExitReceptionPhoneActor->SetActorEnableCollision(true);
	//else UE_LOG(LogTemp, Warning, TEXT("ExitReceptionPhoneActor is NOT Valid"));


	
}

void AGameplayEvents::Step10()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 10 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---Footsteps runnging from F1 (Above) \nF1 Footprint to F2---"));

	// Footstep sounds from above
}
*/