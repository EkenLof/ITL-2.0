#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/ActorComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/RectLightComponent.h"

#include "GameplayEvents.generated.h"

UCLASS()
class INTO_THE_LIGHT_API AGameplayEvents : public AActor
{
	GENERATED_BODY()

public:
	AGameplayEvents();

	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////
	UFUNCTION(BlueprintCallable)
	
	// void NextStep();
	void NextStep(int32 StepUp);
	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////


	// ---Toggle--- //
	UFUNCTION(BlueprintCallable)
	void ToggleOn();

	UFUNCTION(BlueprintCallable)
	void ToggleOff();
	// ---Toggle--- //

	////////////////////////////---ASSIGN---///////////////////////////
	// ---Triggers--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AActor* MissingColeTriggerStart;
	// ---Triggers--- //

	// ---Lights--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Lights")
	AActor* ReceptionLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Lights")
	AActor* F1Light;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Lights")
	AActor* F1OfficeLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Lights")
	AActor* F1ConferanceLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Lights")
	AActor* F1StorageRoomLight;
	// ---Lights--- //
	
	// ---Actors--- //
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
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	//AActor* Fuse10A_InFuseBoxTransActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* FuseBox_InteractibleActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* LighterActor;
	// ---Actors--- //
	////////////////////////////---ASSIGN---///////////////////////////

protected:
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
	FName Fuse10A_InFuseBoxTransTagName;
	FName FuseBox_InteractibleTagName;
	FName LighterTagName;

	FName Trig2TagName;

	void UpdateVaribleState(AActor*& ActorReference, const FName& TagName);

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
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
	void Step9(); // 

	UFUNCTION()
	void Step10(); // 
};