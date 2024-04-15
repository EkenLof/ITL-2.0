#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEvents.generated.h"

class UInventoryComponent;
class ABoxCollider;

UCLASS()
class INTO_THE_LIGHT_API AGameplayEvents : public AActor
{
	GENERATED_BODY()

public:
	AGameplayEvents();

	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	FORCEINLINE UInventoryComponent* GetInventory() const { return PlayerInventory; };
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	
	FORCEINLINE ABoxCollider* GetTriggerBox() const { return TriggerBox; };

	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////
	UFUNCTION(BlueprintCallable)
	void NextStep();
	/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////

protected:

	virtual void BeginPlay() override;

private:
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	UPROPERTY(VisibleAnywhere, Category = "Character | Inventory")
	UInventoryComponent* PlayerInventory;
	//////////////////////////---Inventory Base-Logic---//////////////////////////////////
	
	ABoxCollider* TriggerBox;

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