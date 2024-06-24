#include "UserInterface/Objective/ObjectivePanel.h"

// Engine
#include "Components/TextBlock.h"

#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

// OTHER
#include "Gameplay/GameplayEvents.h"
#include "..\Player/FirstPersonCharacter.h"

void UObjectivePanel::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	ActiveText = FText::FromString(TEXT("Get the Flashlight."));
	InfoText(ActiveText);
}


void UObjectivePanel::InfoText(FText& TempText)
{
	if (TextContent)
	{
		TextContent->SetText(FText::Format(FText::FromString("{0}"), 
			TempText));
		UE_LOG(LogTemp, Log, TEXT("TextContent updated with: %s"), *TempText.ToString());
	}
	else UE_LOG(LogTemp, Error, TEXT("TextContent is null"));
}

void UObjectivePanel::SetInfoText()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("World is null in AFirstPersonCharacter"));
		return;
	}

	for (TActorIterator<AFirstPersonCharacter> It(World); It; ++It)
	{
		Player = *It;
		UE_LOG(LogTemp, Error, TEXT("AFirstPersonCharacter Found!"));
		break;
	}

	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("AFirstPersonCharacter not found!"));
		return;
	}

	if (IsValid(Player))
	{
		UE_LOG(LogTemp, Error, TEXT("AFirstPersonCharacter Valid!"));
		if (Player->bIsObjectiveFlashlight) // Flashlight
		{
			UE_LOG(LogTemp, Error, TEXT("bIsObjectiveFlashlight True!"));
			ActiveText = FText::FromString(TEXT("Go up to Cole."));
			InfoText(ActiveText);
		}
		else if (Player->bIsObjectiveFuseCollected) // Fuse
		{
			UE_LOG(LogTemp, Error, TEXT("bIsObjectiveFuseCollected True!"));
			ActiveText = FText::FromString(TEXT("Head to the Fusebox and place the fuse."));
			InfoText(ActiveText);
		}
		// Finding the fusebox key ADD
		else if (Player->bIsObjectiveFindElectricKey)
		{
			UE_LOG(LogTemp, Error, TEXT("bIsObjectiveFindElectricKey True!"));
			ActiveText = FText::FromString(TEXT("Go to the storageroom and find the Electric key."));
			InfoText(ActiveText);
		}
		else if (Player->bIsObjectiveElectricKeyCollected) // Electric key
		{
			UE_LOG(LogTemp, Error, TEXT("bIsObjectiveElectricKeyCollected True!"));
			ActiveText = FText::FromString(TEXT("Head down to the Fusebox and place the fuse."));
			InfoText(ActiveText);
		}
		else if (Player->bIsObjectiveOfficeKeyCollected) // Office KEy
		{
			UE_LOG(LogTemp, Error, TEXT("bIsObjectiveOfficeKeyCollected True!"));
			ActiveText = FText::FromString(TEXT("Head to the F1 Office."));
			InfoText(ActiveText);
		}
		else if (Player->bIsObjectiveKeycardCollected) // Keycard
		{
			UE_LOG(LogTemp, Error, TEXT("bIsObjectiveKeycardCollected True!"));
			ActiveText = FText::FromString(TEXT("Head to the Manager's office and find Cole."));
			InfoText(ActiveText);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Else True!"));
			ActiveText = FText::FromString(TEXT(""));
			InfoText(ActiveText);
		}
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("Player NOT VALID..."));
	}
}
