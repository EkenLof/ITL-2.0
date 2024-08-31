#include "Gameplay/Elevator_System.h"
#include "Logging/LogMacros.h"

AElevator_System::AElevator_System()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsElevatorOn = false;
	bISCrElevator = false;
	bIsFuse16aPlaced = false;
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
	bIsFuse16aPlaced = bIsElevatorActivety;

	UE_LOG(LogTemp, Error, TEXT("Succeded to set bIsElevatorOn ACTIVE!"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Succeded to set bIsElevatorOn ACTIVE!"));
}