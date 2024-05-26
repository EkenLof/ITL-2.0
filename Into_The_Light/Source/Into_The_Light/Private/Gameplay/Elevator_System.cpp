#include "Gameplay/Elevator_System.h"
#include "Logging/LogMacros.h"

// Sets default values
AElevator_System::AElevator_System()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsElevatorOn = false;
}

// Called when the game starts or when spawned
void AElevator_System::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElevator_System::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AElevator_System::ElevatorActive()
{
	if (!bIsElevatorOn) bIsElevatorOn = true;
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to set bIsElevatorOn ACTIVE!"));
		return;
	}
}