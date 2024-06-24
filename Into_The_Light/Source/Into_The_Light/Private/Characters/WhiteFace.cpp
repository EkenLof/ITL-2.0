#include "Characters/WhiteFace.h"



AWhiteFace::AWhiteFace()
{
	PrimaryActorTick.bCanEverTick = true;

	bIsWhiteFaceClapp = false;
	bIsWhiteFaceIdle = false;
}

void AWhiteFace::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWhiteFace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWhiteFace::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AWhiteFace::WhiteFaceIdle(bool bIsWhiteFaceActivety)
{
	bIsWhiteFaceClapp = false;
	bIsWhiteFaceIdle = bIsWhiteFaceActivety;
}

void AWhiteFace::WhiteFaceClapp(bool bIsWhiteFaceActivety)
{
	bIsWhiteFaceIdle = false;
	bIsWhiteFaceClapp = bIsWhiteFaceActivety;
}

