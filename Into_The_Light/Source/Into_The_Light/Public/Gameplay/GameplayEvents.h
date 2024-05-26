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
	FORCEINLINE AElevator_System* GetInteract() const { return Elevator_System; };

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

	// Activity
	UPROPERTY(EditAnywhere, Category = "Event | Activity")
	bool bIsTempWaitForInteractibleFuseBox;


	////////////////////////////---ASSIGN---///////////////////////////
	// --- Triggers --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* MissingColeTriggerStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* ExitFuseBoxRoomActor;
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
	AActor* Fuse10A_ToFuseBoxActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* LighterActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ReceptionPhoneActor;
	// --- Actors --- //

	// --- SubLevels --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	FName LightsB1Reception_SL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	FName LightsF1_SL;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	//FName Sublvl3;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	//FName SubLvl4;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	//FName Sublvl5;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | SubLevels")
	//FName SubLvl6;
	// --- Sublevels --- //
	////////////////////////////---ASSIGN---///////////////////////////

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Audio")
	AActorSoundSystem* ActorSoundSystem;
	AElevator_System* Elevator_System;

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

	FName Fuse10A_ToFuseBoxTagName;
	//FName Fuse10A_InFuseBoxTransTagName;
	//FName FuseBox_InteractibleTagName;
	FName LighterTagName;
	FName ReceptionPhoneTagName;

	FName Trig2TagName;
	FName Trig3TagName;
	FName Trig4TagName;


	void UpdateVaribleState(AActor*& ActorReference, const FName& TagName);

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:

	UFUNCTION()
	void OnSublevelLoaded();

	// Find and assign the ActorSoundSystem
	void InitializeActorSoundSystem();


	UFUNCTION()
	void Step0(); // 

	UFUNCTION()
	void Step1(); // 

	UFUNCTION()
	void Step2(); // 

	UFUNCTION()
	void Step3(); // 

	UFUNCTION()
	void Step4(); // 

	UFUNCTION()
	void Step5(); // 

	UFUNCTION()
	void Step6(); // 

	UFUNCTION()
	void Step7(); // 

	UFUNCTION()
	void Step8(); // 

	UFUNCTION()
	void Step9(); // Reception phone off

	UFUNCTION()
	void Step10(); // 

	UFUNCTION()
	void Step11();

	UFUNCTION()
	void Step12();

	UFUNCTION()
	void Step13();

	UFUNCTION()
	void Step14();

	UFUNCTION()
	void Step15();

	UFUNCTION()
	void Step16();

	UFUNCTION()
	void Step17();

	UFUNCTION()
	void Step18();

	UFUNCTION()
	void Step19();

	UFUNCTION()
	void Step20();
};