#include "Gameplay/GameplayEvents.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#include "Components/BoxComponent.h"

AGameplayEvents::AGameplayEvents()
{
	// Default Value 
	LevelStep = 0;

	// PlayerInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));
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
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("OBJECTIVE: Get FLashlight and battery."));

	// Door to Second floor is locked
}

void AGameplayEvents::Step2() // 
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Step 2 Active---"));
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Items collected, go to second floor storageroom (Cole)---"));
	// Trigger OFF & HiddenWall OFF (RECEPTION)
	//ReceptionTriggerStart->SetVisibility(false);

	/*
	To assign a tag to an object in Unreal Engine, you can follow these steps:
	
	Select the Object: In the level editor, select the object (actor or component) to which you want to assign a tag.

	Details Panel: With the object selected, look at the Details panel on the right side of the editor window. If the 
	object is an actor, you'll find a field called "Tags" under the "Actor" category. If the object is a component, 
	you may need to scroll down to find the "Tags" field under the component's category.

	Add Tag: In the "Tags" field, click on the empty space next to the "+" icon. This will allow you to add a new tag.

	Enter Tag Name: Type in the name of the tag you want to assign to the object and press Enter. 
	The tag will be added to the list of tags associated with the object.

	Compile and Save: After adding the tag, make sure to compile and save your level or Blueprint to apply the changes.

	Once you've assigned a tag to an object, you can use functions like FindActorByTag or FindComponentByTag in your code 
	to locate and interact with objects based on their tags. These functions allow you to search for objects in the 
	level based on the tags you've assigned to them.
	
	// TAGS:
	Trigger_1_ACT1
	Trigger_2_ACT1
	HiddenWall_1_ACT1

	*/

	/*
	// Hide actor
	if (RecetionHiddenWall)
	{
		RecetionHiddenWall->SetActorHiddenInGame(true);
	}

	// Disable collision
	if (RecetionHiddenWall)
	{
		RecetionHiddenWall->SetActorEnableCollision(false);
	}

	// Destroy actor
	if (RecetionHiddenWall)
	{
		RecetionHiddenWall->Destroy();
	}
	*/

	FName Trig1TagName = FName(TEXT("Trigger_1_ACT1"));
	FName Trig2TagName = FName(TEXT("Trigger_2_ACT1"));

	FName HidWallTagName = FName(TEXT("HiddenWall_1_ACT1"));

	TArray<AActor*> ActorFoundByTagTrig1;
	//TArray<AActor*> ActorFoundByTagTrig2;
	TArray<AActor*> ActorFoundByTagHidWall1;

	UWorld* LevelWorld = GetWorld();

	if (LevelWorld)
	{
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, Trig1TagName, ActorFoundByTagTrig1);
		//UGameplayStatics::GetAllActorsWithTag(LevelWorld, Trig2TagName, ActorFoundByTagTrig2);
		UGameplayStatics::GetAllActorsWithTag(LevelWorld, HidWallTagName, ActorFoundByTagHidWall1);

		// Trigger 1
		for (AActor* Actor : ActorFoundByTagTrig1)
		{
			if (ActorFoundByTagTrig1.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
				ReceptionTriggerStart = ActorFoundByTagTrig1[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Not-Found---"));
			}
		}
		// Trigger 2
		/*
		for (AActor* Actor : ActorFoundByTagTrig2)
		{
			if (ActorFoundByTagTrig2.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Found---"));
				ReceptionTriggerStart = ActorFoundByTagTrig2[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Not-Found---"));
			}
		}
		*/
		
		// HiddenWall 1
		for (AActor* Actor : ActorFoundByTagHidWall1)
		{
			if (ActorFoundByTagHidWall1.Num() > 0)
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionHiddenWall Found---"));
				ReceptionHiddenWall = ActorFoundByTagHidWall1[0];
			}
			else
			{
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionHiddenWall Not-Found---"));
			}
		}
	}
	
	if (ReceptionTriggerStart)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionTriggerStart Active---"));
		ReceptionTriggerStart->SetActorEnableCollision(false);
	}
	if (ReceptionHiddenWall)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---ReceptionHiddenWall Active---"));
		ReceptionHiddenWall->SetActorEnableCollision(false);
	}		
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
