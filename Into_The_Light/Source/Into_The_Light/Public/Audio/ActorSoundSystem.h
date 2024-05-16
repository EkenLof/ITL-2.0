#pragma once

#include "Components/AudioComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorSoundSystem.generated.h"

UCLASS()
class INTO_THE_LIGHT_API AActorSoundSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorSoundSystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PlayReceptionPhoneAudio();
	void StopReceptionPhoneAudio();

	// --- Sounds --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Sounds", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* ReceptionPhone_AudioComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Event | Assign | Sounds", meta = (AllowPrivateAccess = "true"))
	class USoundCue* ReceptionPhone_SoundCue;
	// --- Sounds --- //
	////////////////////////////---ASSIGN---///////////////////////////
};
