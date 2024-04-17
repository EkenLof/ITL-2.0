#include "Gameplay/GameplayEvents.h"

AGameplayEvents::AGameplayEvents()
{
	// Default Value 
	LevelStep = 0;

	// PlayerInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));
	// TriggerBox = CreateDefaultSubobject<ABoxCollider>(TEXT("TriggerBox"));
}

void AGameplayEvents::BeginPlay()
{
	Super::BeginPlay();

	NextStep(1); // Temp. Change to some action to Active for Events
}

void AGameplayEvents::NextStep(int32 StepUp)
{
	LevelStep += StepUp;

	switch (LevelStep)
	{
	case 0:
		Step0();
		break;
	case 1:
		Step1();
		break;
	case 2:
		Step2();
		break;
	case 3:
		Step3();
		break;
	case 4:
		Step4();
		break;

	default:
		break;
	}
}
/*
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
*/

void AGameplayEvents::Step0() // 
{
	// SpawnPoint.
	// Blacksceen StoryScene Before entering Buildning.
	// Getting a message from Cole (With instructions of Flashlight and Where he is).
	// NEVER ACTIVE BECAUSE OF TEMP ---BEGINPLAY()---
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 0 Active---"));
}

void AGameplayEvents::Step1() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 1 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Get FLashlight and battery---"));

	// Door to Second floor is locked
}

void AGameplayEvents::Step2() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 2 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Door Open, Go to second floor storageroom (Cole)---"));
}

void AGameplayEvents::Step3()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 3 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Meeting Cole---"));
}

void AGameplayEvents::Step4()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 4 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Pick Up Fuse---"));
}
