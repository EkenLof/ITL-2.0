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
		UE_LOG(LogTemp, Log, TEXT("AFirstPersonCharacter Found!"));
		break;
	}

	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("AFirstPersonCharacter not found!"));
		return;
	}

	if (IsValid(Player))
	{
		UE_LOG(LogTemp, Log, TEXT("AFirstPersonCharacter Valid!"));
		if (Player->bIsObjectiveFlashlight && bIsObjectiveFlashlight) // Flashlight
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveFlashlight True!"));
			ActiveText = FText::FromString(TEXT("Go up to Cole."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveFlashlight = false;
		}
		else if (Player->bIsObjectiveFuseCollected && bIsObjectiveFuseCollected) // Fuse
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveFuseCollected True!"));
			ActiveText = FText::FromString(TEXT("Head to the Fusebox and place the fuse."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveFuseCollected = false;
		}
		// Finding the fusebox key ADD
		else if (Player->bIsObjectiveFindElectricKey && bIsObjectiveFindElectricKey)
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveFindElectricKey True!"));
			ActiveText = FText::FromString(TEXT("Go to the storageroom and find the Electric key."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveFindElectricKey = false;
		}
		else if (Player->bIsObjectiveElectricKeyCollected && bIsObjectiveElectricKeyCollected) // Electric key
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveElectricKeyCollected True!"));
			ActiveText = FText::FromString(TEXT("Head down to the Fusebox and place the fuse."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveElectricKeyCollected = false;
		}
		else if (Player->bIsObjectiveOfficeKeyCollected && bIsObjectiveOfficeKeyCollected) // Office KEy
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveOfficeKeyCollected True!"));
			ActiveText = FText::FromString(TEXT("Head to the F1 Office."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveOfficeKeyCollected = false;
		}
		else if (Player->bIsObjectiveKeycardCollected && bIsObjectiveKeycardCollected) // Keycard
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveKeycardCollected True!"));
			ActiveText = FText::FromString(TEXT("Head to the Manager's office and find Cole."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveKeycardCollected = false;
		}
		else if (Player->bIsObjectiveFuse16aCollected && bIsObjectiveFuse16aCollected) // Fuse
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveFuse16aCollected True!"));
			ActiveText = FText::FromString(TEXT("Head to the Basement Fusebox and place the 16 amp fuse."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveFuse16aCollected = false;
		}
		else if (Player->bIsObjectiveLighter && bIsObjectiveLighter) // Fuse
		{
			UE_LOG(LogTemp, Log, TEXT("bIsObjectiveLighter True!"));
			ActiveText = FText::FromString(TEXT("..."));
			InfoText(ActiveText);

			bIsObjectiveNone = true;
			bIsObjectiveLighter = false;
		}
		else if (bIsObjectiveNone)
		{
			UE_LOG(LogTemp, Error, TEXT("Else True!"));
			ActiveText = FText::FromString(TEXT("..."));
			InfoText(ActiveText);

			bIsObjectiveNone = false;
		}
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("Player NOT VALID..."));
	}
}
