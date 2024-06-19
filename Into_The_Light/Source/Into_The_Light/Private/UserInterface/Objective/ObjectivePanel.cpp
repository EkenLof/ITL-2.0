#include "UserInterface/Objective/ObjectivePanel.h"

// Game
#include "..\Player/FirstPersonCharacter.h"

// Engine
#include "Components/TextBlock.h"

#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

// OTHER
#include "Gameplay/GameplayEvents.h"

void UObjectivePanel::NativeConstruct()
{
	Super::NativeConstruct();

	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("World is null in AFirstPersonCharacter"));
		return;
	}
	else
	{
		for (TActorIterator<AFirstPersonCharacter> It(World); It; ++It)
		{
			Player = *It;
			break;
		}
		if (!Player) UE_LOG(LogTemp, Error, TEXT("AFirstPersonCharacter not found!"));
	}

	if (IsValid(Player))
	{
		if (Player->bIsObjectiveFlashlight)
		{
			ActiveText = FText::FromString(TEXT("Go up to Cole."));
			SetInfoText(ActiveText);
		}
		else
		{
			ActiveText = FText::FromString(TEXT("*NOTHING is Working or active*"));
			SetInfoText(ActiveText);
		}
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("Events NOT VALID..."));
	}
}


void UObjectivePanel::SetInfoText(FText& TempText)
{
	TextContent->SetText(FText::Format(FText::FromString("{0}"),
		TempText));
}