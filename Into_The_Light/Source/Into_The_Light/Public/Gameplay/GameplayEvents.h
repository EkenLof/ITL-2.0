#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/RectLightComponent.h"
#include "Components/AudioComponent.h"
#include "GameplayEvents.generated.h"

class AActorSoundSystem;
class AElevator_System;


UCLASS()
class INTO_THE_LIGHT_API AGameplayEvents : public AActor
{
	GENERATED_BODY()

public:
	AGameplayEvents();

	FORCEINLINE AActorSoundSystem* GetInventory() const { return ActorSoundSystem; };

	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////
	UFUNCTION(BlueprintCallable)
	// void NextStep();
	void NextStep(int32 StepUp);
	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////


	// Function to load a sublevel
	UFUNCTION(BlueprintCallable, Category = "Event | SubLevels")
	void LoadSublevel(FName LevelName);

	// Function to unload a sublevel
	UFUNCTION(BlueprintCallable, Category = "Event | SubLevels")
	void UnloadSublevel(FName LevelName);


	// ---Toggle--- //
	UFUNCTION(BlueprintCallable)
	void ToggleOn();

	UFUNCTION(BlueprintCallable)
	void ToggleOff();
	// ---Toggle--- //

	//Actor Update state
	void UpdateVaribleState(AActor*& ActorReference, const FName& TagName);
	// Find and assign the ActorSoundSystem
	void InitializeActorSoundSystem();

	// Activity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsTempWaitForInteractibleFuseBox;

	////////////////////////////---ASSIGN---///////////////////////////
	// --- Triggers --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* MissingColeTriggerStart;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* ExitReceptionPhoneActor;
	// --- Triggers --- //
	
	// --- Actors --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* LanternActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* LanternBrockenActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ColeStorageRoomActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ElectricKeyActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ElectricKey_KeyActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* LighterActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ReceptionPhoneActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ReceptionPhoneKeyActor;
	// --- Actors --- //

	// --- SubLevels --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	FName LightsB1Reception_SL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	FName LightsF1_SL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	FName LightsF2_SL;
	// --- Sublevels --- //
	////////////////////////////---ASSIGN---///////////////////////////

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Audio")
	AActorSoundSystem* ActorSoundSystem;
	

	////////////////////////////---LevelSequence---///////////////////////////
	//UPROPERTY(EditAnywhere, Category = "Animations | Cole")
	//class UAnimSequence* ColeInteractAnimSeq;
	
	UObject* WorldContextObject;
	////////////////////////////---LevelSequence---///////////////////////////

	FName ReceptionLightsTagName;
	FName F1LightsTagName;
	FName F1OfficeLightsTagName;
	FName F1ConferanceLightsTagName;
	FName F1StorageRoomLightsTagName;

	FName ColeStorageRoomTagName;
	FName LanternTagName;
	FName LanternBrokenTagName;
	FName ElectricKeyTagName;
	FName ElectricKey_KeyTagName;

	
	FName LighterTagName;
	FName ReceptionPhoneTagName;
	FName ReceptionPhoneKeyTagName;

	FName Trig2TagName;

	FName Trig4TagName;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	//TSubclassOf<UObjectivePanel> widgetclass;

private:
	UFUNCTION()
	void OnSublevelLoaded();

	UFUNCTION()
	void Step0(); 

	UFUNCTION()
	void Step1(); 

	UFUNCTION()
	void Step2(); 

	UFUNCTION()
	void Step3(); 

	UFUNCTION()
	void Step4(); 

	UFUNCTION()
	void Step5(); 

	UFUNCTION()
	void Step6(); 

	UFUNCTION()
	void Step7(); 

	UFUNCTION()
	void Step8(); 

	UFUNCTION()
	void Step9(); 

	UFUNCTION()
	void Step10();
};