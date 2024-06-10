#include "Gameplay/Elevator_System.h"
#include "Logging/LogMacros.h"

AElevator_System::AElevator_System()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsElevatorOn = false;

	// Tag: ElevatorCardReader
}

void AElevator_System::BeginPlay()
{
	Super::BeginPlay();
	
}

void AElevator_System::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AElevator_System::ElevatorActive(bool bIsElevatorActivety)
{
	bIsElevatorOn = bIsElevatorActivety;
	UE_LOG(LogTemp, Error, TEXT("Succeded to set bIsElevatorOn ACTIVE!"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Succeded to set bIsElevatorOn ACTIVE!"));
}