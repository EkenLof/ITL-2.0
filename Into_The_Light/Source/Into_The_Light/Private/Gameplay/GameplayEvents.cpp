#include "Gameplay/GameplayEvents.h"

AGameplayEvents::AGameplayEvents()
{
	// Default Value 
	LevelStep = 0;
}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

	NextStep(); // Temp. Change to some action to Active for Events
}

void AGameplayEvents::NextStep()
{
	LevelStep++;

	switch (LevelStep)
	{
	case 0:
		Step0();
		break;
	case 1:
		Step1();
		break;
	case 2:
		Step1();
		break;
	case 3:
		Step1();
		break;
	case 4:
		Step1();
		break;

	default:
		break;
	}
}

void AGameplayEvents::Step0() // Beginning Lobby
{
	// Blacksceen StoryScene Before entering Buildning.
	// Getting a message from Cole (With instructions of Flashlight and Where he is).
}

void AGameplayEvents::Step1() // Picking up Flashlight
{
	// Picking Up Flashlight.
	// Door Opens.
}

void AGameplayEvents::Step2() // Meeting Cole
{
	// Dialog with Cole.
	// Getting 10A fuse.
}

void AGameplayEvents::Step3()
{
	// Using the 10A fuse in Cabinet.
	// Everything lights up.
	// Hearing Something breaking on the floor above.

	// Seeing the Lantern on the floor, Cole is gone.
	// Hears someone running somewhere in the building (Once)
}

void AGameplayEvents::Step4()
{
}
