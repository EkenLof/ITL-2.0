#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEvents.generated.h"

//class UInventoryComponent;                                                                 (FIX SET LATER)
//class ABoxCollider;                                                                        (FIX SET LATER)

UCLASS()
class INTO_THE_LIGHT_API AGameplayEvents : public AActor
{
	GENERATED_BODY()

public:
	AGameplayEvents();

	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	//FORCEINLINE UInventoryComponent* SetInventory() const { return PlayerInventory; };     (FIX SET LATER)
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////   
	//FORCEINLINE ABoxCollider* SetTriggerBox() const { return TriggerBox; };                (FIX SET LATER)

	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////
	UFUNCTION(BlueprintCallable)
	
	// void NextStep();
	void NextStep(int32 StepUp);
	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////

protected:

	virtual void BeginPlay() override;

private:
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	UPROPERTY(VisibleAnywhere, Category = "Character | Inventory")
	//UInventoryComponent* PlayerInventory;                                                   (FIX SET LATER)
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	
	//ABoxCollider* TriggerBox;                                                               (FIX SET LATER)

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
};