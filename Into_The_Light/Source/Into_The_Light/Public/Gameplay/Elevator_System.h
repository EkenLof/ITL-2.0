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

	void ElevatorActive();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsElevatorOn;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
