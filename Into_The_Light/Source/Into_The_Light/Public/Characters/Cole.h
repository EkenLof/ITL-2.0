#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Cole.generated.h"

UCLASS()
class INTO_THE_LIGHT_API ACole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACole();

	UFUNCTION(BlueprintCallable, Category = "Elevator | Event | Activity")
	void ColeMeet(bool bIsColeMeetActivety);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Elevator | Event | Activity")
	bool bIsColeMeetOn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
