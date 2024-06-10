#include "Characters/Cole.h"

#include "Logging/LogMacros.h"

ACole::ACole()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsColeMeetOn = false;
}

void ACole::BeginPlay()
{
	Super::BeginPlay();

}

void ACole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACole::ColeMeet(bool bIsColeMeetActivety)
{
	bIsColeMeetOn = bIsColeMeetActivety;
}

