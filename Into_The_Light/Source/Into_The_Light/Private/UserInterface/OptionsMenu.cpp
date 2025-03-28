#include "UserInterface/OptionsMenu.h"

#include "..\Player/FirstPersonCharacter.h"

void UOptionsMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UOptionsMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerCharacter = Cast<AFirstPersonCharacter>(GetOwningPlayerPawn());
}