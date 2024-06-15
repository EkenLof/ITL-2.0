#include "UserInterface/Objective/ObjectivePanel.h"

// Game
#include "..\Player/FirstPersonCharacter.h"

// Engine
#include "Components/TextBlock.h"

void UObjectivePanel::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	SetInfoText(ActiveText);
}


void UObjectivePanel::SetInfoText(FText& TempText)
{
	TextContent->SetText(FText::Format(FText::FromString("{0}"),
		TempText));
}