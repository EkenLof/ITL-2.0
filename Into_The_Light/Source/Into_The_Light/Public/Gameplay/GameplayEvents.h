#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/ActorComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/RectLightComponent.h"

#include "GameplayEvents.generated.h"

//class UInventoryComponent;                                                               //(FIX SET LATER)

UCLASS()
class INTO_THE_LIGHT_API AGameplayEvents : public AActor
{
	GENERATED_BODY()

public:
	AGameplayEvents();

	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	//FORCEINLINE UInventoryComponent* SetInventory() const { return PlayerInventory; };     (FIX SET LATER)
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////   

	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////
	UFUNCTION(BlueprintCallable)
	
	// void NextStep();
	void NextStep(int32 StepUp);
	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////


	// ---Toggle Lights--- //
	UFUNCTION(BlueprintCallable)
	void ToggleOn();

	UFUNCTION(BlueprintCallable)
	void ToggleOff();
	// ---Toggle Lights--- //

	////////////////////////////---ASSIGN---///////////////////////////
	// ---Triggers--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AActor* ReceptionTriggerStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AActor* MissingColeTriggerStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AActor* FuseBoxTriggerStart;
	// ---Triggers--- //

	// ---HiddenWalls--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AActor* ReceptionHiddenWall;
	// ---HiddenWalls--- //

	// ---Array Of Light--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Lights")
	TArray<AActor*> Lights;
	// ---Array Of Light--- //
	
	// ---Array Of Actors--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	TArray<AActor*> EventActors;
	// ---Array Of Actors--- //
	////////////////////////////---ASSIGN---///////////////////////////

protected:

	UPROPERTY(EditAnywhere, Category = "Animations | Cole")
	class UAnimSequence* ColeInteractAnimSeq;
	UPROPERTY(EditAnywhere, Category = "Animations | Cole")
	class UAnimSequence* ColeIdleSearchAnimSeq;

	////////////////////////////---LevelSequence---///////////////////////////
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

	FName Trig3TagName;
	FName Trig4TagName;


	virtual void BeginPlay() override;

private:
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	UPROPERTY(VisibleAnywhere, Category = "Character | Inventory")
	//UInventoryComponent* PlayerInventory;                                                 //(FIX SET LATER)
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////

	// CurrentStep
	int32 LevelStep;

	// Executed on each step (Every Step)
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
};