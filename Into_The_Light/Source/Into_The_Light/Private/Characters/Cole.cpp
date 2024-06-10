#include "Characters/Cole.h"

#include "Logging/LogMacros.h"

ACole::ACole()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsColeMeetOn = false;
	bIsColeFuseTakenOn = false;

	// Trigger_1_ACT1
}

void ACole::BeginPlay()
{
	Super::BeginPlay();

	// TEMP
	bIsColeFuseTakenOn = true;
}

void ACole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACole::ColeMeet(bool bIsColeMeetActivety)
{
	// TEMP
	bIsColeFuseTakenOn = false;

	bIsColeMeetOn = bIsColeMeetActivety;
}

