#include "Gameplay/GameplayEvents.h"

#include "Components/InventoryComponent.h"
#include "Triggers/BoxCollider.h"

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

void AGameplayEvents::Step0() // 
{
	// SpawnPoint.
	// Blacksceen StoryScene Before entering Buildning.
	// Getting a message from Cole (With instructions of Flashlight and Where he is).
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Cutscene ended Game Started"));
}

void AGameplayEvents::Step1() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Step1 Active"));
	// Door to Second floor is locked
	if (PlayerInventory->IsFlshlight)
	{
		// Open Door to Second Floor
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Lobbydoor to Second floor is Open"));
	}

	// Trigger Activates Cole-Meet & Jumps to Step 2
	if (TriggerBox->IsMeetCole)
	{
		NextStep();
	}
}

void AGameplayEvents::Step2() // 
{
	// Trigger Activated, Cole-Meet started
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Meeting Cole"));
}

void AGameplayEvents::Step3()
{
	// 
}

void AGameplayEvents::Step4()
{
}
