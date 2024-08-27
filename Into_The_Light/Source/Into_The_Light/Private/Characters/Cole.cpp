#include "Characters/Cole.h"

#include "Logging/LogMacros.h"

ACole::ACole()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsColeMeetOn = false;
	bIsColeSearchIdle = false;
	bIsColeFuseTakenOn = false;
	bIsColeStartCutscene = false;
}

void ACole::BeginPlay()
{
	Super::BeginPlay();

	// TEMP
	bIsColeStartCutscene = true;
}

void ACole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACole::ColeSearchIdle(bool bIsColeMeetActivety)
{
	bIsColeStartCutscene = false;

	bIsColeSearchIdle = bIsColeMeetActivety;
}

void ACole::ColeMeet(bool bIsColeMeetActivety)
{
	// TEMP
	bIsColeSearchIdle = false;

	bIsColeMeetOn = bIsColeMeetActivety;
}

