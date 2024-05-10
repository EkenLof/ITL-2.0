#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "Components/PrimitiveComponent.h"

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

	////////////////////////////---ASSIGN---///////////////////////////
	// ---Triggers--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AActor* ReceptionTriggerStart;
	// ---Triggers--- //

	// ---HiddenWalls--- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AActor* ReceptionHiddenWall;
	// ---HiddenWalls--- //
	////////////////////////////---ASSIGN---///////////////////////////

protected:

	UPROPERTY(EditAnywhere, Category = "Animations | Cole")
	class ULevelSequence* ColeInteractSequence;
	UPROPERTY(EditAnywhere, Category = "Animations | Cole")
	class ULevelSequence* ColeIdleSearchSequence;

	////////////////////////////---LevelSequence---///////////////////////////
	UObject* WorldContextObject;
	////////////////////////////---LevelSequence---///////////////////////////

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
};