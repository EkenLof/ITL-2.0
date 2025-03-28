#include "UserInterface/PauseMenu.h"
//#include "UserInterface/MainHUD.h"

#include "..\Player/FirstPersonCharacter.h"

void UPauseMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerCharacter = Cast<AFirstPersonCharacter>(GetOwningPlayerPawn());
}

//void UPauseMenu::Resume()
//{
//	HUD->TogglePauseMenu();
//}