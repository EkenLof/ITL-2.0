#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Elevator_System.generated.h"

UCLASS()
class INTO_THE_LIGHT_API AElevator_System : public AActor
{
	GENERATED_BODY()
	
public:	
	AElevator_System();

	UFUNCTION(BlueprintCallable, Category = "Elevator | Event | Activity")
	void ElevatorActive(bool bIsElevatorActivety);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Elevator | Event | Activity")
	bool bIsElevatorOn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Elevator | Event | Activity")
	bool bISCrElevator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Elevator | Event | Activity")
	bool bIsFuse16aPlaced;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
