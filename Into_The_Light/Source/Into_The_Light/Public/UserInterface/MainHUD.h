#pragma once


#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHUD.generated.h"

struct FInteractableData;
class UMainMenu;
class UPauseMenu;
class UOptionsMenu;
class UInteractionWidget;

UCLASS()
class INTO_THE_LIGHT_API AMainHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly,Category = "Widgets")
	TSubclassOf<UMainMenu> MainMenuClass;
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UPauseMenu> PauseMenuClass;
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UOptionsMenu> OptionsMenuClass;

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<UInteractionWidget> InteractionWidgetClass;

	bool bIsMenuVisible;
	bool bIsPauseMenuVisible;
	bool bIsOptionsMenuVisible;

	//bool bIsMapMenuVisable;

	AMainHUD();

	// INVENTORY MENU
	void DisplayMenu();
	void HideMenu();
	void ToggleMenu();

	// PAUSE MENU
	void DisplayPauseMenu();
	void HidePauseMenu();
	void TogglePauseMenu();

	// OPTIONS MENU
	void DisplayOptionsMenu();
	void HideOptionsMenu();
	void ToggleOptionsMenu();

	//void DisplayMapMenu();
	//void HideMapMenu();

	void ShowInteractionWidget() const;
	void HideInteractionWidget() const;
	void UpdateInteractionWidget(const FInteractableData* InteractableData) const;

protected:
	UPROPERTY()
	UMainMenu* MainMenuWidget;
	UPROPERTY()
	UPauseMenu* PauseMenuWidget;
	UPROPERTY()
	UOptionsMenu* OptionsMenuWidget;


	UPROPERTY()
	UInteractionWidget* InteractionWidget;

	virtual void BeginPlay() override;
};
