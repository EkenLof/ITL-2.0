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

	//FORCEINLINE AActorSoundSystem* GetInventory() const { return ActorSoundSystem; };

	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////
	//UFUNCTION(BlueprintCallable)
	// void NextStep();
	//void NextStep(int32 StepUp);
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

	// Activity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsTempWaitForInteractibleFuseBox;

	////////////////////////////---ASSIGN---///////////////////////////
	// --- Triggers --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* ExitReceptionPhoneTrigActor;
	// --- Triggers --- //
	
	// --- Actors --- //	
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
	UObject* WorldContextObject;

	FName ReceptionLightsTagName;
	FName F1LightsTagName;
	FName F1OfficeLightsTagName;
	FName F1ConferanceLightsTagName;
	FName F1StorageRoomLightsTagName;

	FName ReceptionPhoneTagName;
	FName ReceptionPhoneKeyTagName;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
	void OnSublevelLoaded();

	/*
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
	*/
};