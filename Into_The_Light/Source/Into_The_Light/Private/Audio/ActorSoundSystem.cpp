#include "Audio/ActorSoundSystem.h"
#include "Sound/SoundCue.h"

#include "UObject/ConstructorHelpers.h"
#include "Logging/LogMacros.h"

// Sets default values
AActorSoundSystem::AActorSoundSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsManagerCalling = false;

	static ConstructorHelpers::FObjectFinder<USoundCue>
		SoundCueAsset(TEXT("/Script/Engine.SoundCue'/Game/Audio/Phone/Reception-Phone/Reception_PhoneCall.Reception_PhoneCall'"));
	if (SoundCueAsset.Succeeded())
	{
		ReceptionPhone_SoundCue = SoundCueAsset.Object;

		ReceptionPhone_AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("RP_AudioComponent"));

		ReceptionPhone_AudioComponent->SetupAttachment(RootComponent);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load SoundCue!"));
	}
}

// Called when the game starts or when spawned
void AActorSoundSystem::BeginPlay()
{
	Super::BeginPlay();

	// Set the SoundCue to play
	if (ReceptionPhone_AudioComponent && ReceptionPhone_SoundCue) 
	{
		ReceptionPhone_AudioComponent->SetSound(ReceptionPhone_SoundCue);

		StopReceptionPhoneAudio();

		UE_LOG(LogTemp, Error, TEXT("ReceptionPhone_AudioComponent and SoundCue initialized"));
	}
	else
	{
		if (!ReceptionPhone_AudioComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("ReceptionPhone_AudioComponent is not initialized!"));
		}
		if (!ReceptionPhone_SoundCue)
		{
			UE_LOG(LogTemp, Error, TEXT("ReceptionPhone_SoundCue is not initialized!"));
		}
	}
}

// Called every frame
void AActorSoundSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsPlaySound) PlayReceptionPhoneAudio();
	else if (bIsStopSound)
	{
		bIsPlaySound = false;
		StopReceptionPhoneAudio();
	}

}

void AActorSoundSystem::PlayReceptionPhoneAudio()
{
	if (ReceptionPhone_AudioComponent && ReceptionPhone_SoundCue)
	{
		ReceptionPhone_AudioComponent->Play(0.0f);
		UE_LOG(LogTemp, Error, TEXT("Play ACTIVE."));

		bIsManagerCalling = true;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot play audio, component or sound cue is not initialized."));
	}
}

void AActorSoundSystem::StopReceptionPhoneAudio()
{
	if (ReceptionPhone_AudioComponent && ReceptionPhone_SoundCue)
	{
		ReceptionPhone_AudioComponent->Stop();
		UE_LOG(LogTemp, Error, TEXT("Stop ACTIVE."));

		bIsManagerCalling = false;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot stop audio, component or sound cue is not initialized."));
	}
}



