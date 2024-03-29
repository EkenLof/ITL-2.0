#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEvents.generated.h"

UCLASS()
class INTO_THE_LIGHT_API AGameplayEvents : public AActor
{
	GENERATED_BODY()

public:
	// Dafault VALUES
	AGameplayEvents();

	// NEXTSTEP ACTIVE
	UFUNCTION(BlueprintCallable)
	void NextStep();

protected:

	virtual void BeginPlay() override;

private:

	// CurrentStep
	int32 LevelStep;

	// Executed on each step (Every Step)
	UFUNCTION()
	void Step0(); // Start Lobby

	UFUNCTION()
	void Step1(); // Picking up Flashlight

	UFUNCTION()
	void Step2(); // Meeting Cole

	UFUNCTION()
	void Step3(); // Fixing the lights (10A fuse)

	UFUNCTION()
	void Step4(); // 
};