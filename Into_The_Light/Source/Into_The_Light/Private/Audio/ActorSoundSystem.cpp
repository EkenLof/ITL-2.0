#include "Audio/ActorSoundSystem.h"
#include "Sound/SoundCue.h"

// Sets default values
AActorSoundSystem::AActorSoundSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USoundCue>
		SoundCueAsset(TEXT("/Script/Engine.SoundCue'/Game/Audio/Phone/Reception-Phone/Reception_PhoneCall.Reception_PhoneCall'"));
	if (SoundCueAsset.Succeeded())
	{
		ReceptionPhone_SoundCue = SoundCueAsset.Object;

		ReceptionPhone_AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("RP_AudioComponent"));

		ReceptionPhone_AudioComponent->SetupAttachment(RootComponent);
	}

}

// Called when the game starts or when spawned
void AActorSoundSystem::BeginPlay()
{
	Super::BeginPlay();

	// Set the SoundCue to play
	if (ReceptionPhone_AudioComponent && ReceptionPhone_SoundCue) ReceptionPhone_AudioComponent->SetSound(ReceptionPhone_SoundCue);
	
}

// Called every frame
void AActorSoundSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorSoundSystem::PlayReceptionPhoneAudio()
{
	if (ReceptionPhone_AudioComponent && ReceptionPhone_SoundCue)ReceptionPhone_AudioComponent->Play(0.0f);
}

void AActorSoundSystem::StopReceptionPhoneAudio()
{
	if (ReceptionPhone_AudioComponent && ReceptionPhone_SoundCue)ReceptionPhone_AudioComponent->Stop();
}



