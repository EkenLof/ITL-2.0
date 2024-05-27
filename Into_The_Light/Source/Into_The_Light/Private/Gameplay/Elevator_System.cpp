#include "Gameplay/Elevator_System.h"
#include "Logging/LogMacros.h"

// Sets default values
AElevator_System::AElevator_System()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsElevatorOn = false;

	// Tag: ElevatorCardReader
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

void AElevator_System::ElevatorActive(bool bIsElevatorActivety)
{
	bIsElevatorOn = bIsElevatorActivety;
	UE_LOG(LogTemp, Error, TEXT("Succeded to set bIsElevatorOn ACTIVE!"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Succeded to set bIsElevatorOn ACTIVE!"));
}