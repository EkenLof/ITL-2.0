// Fill out your copyright notice in the Description page of Project Settings.

#include "UserInterface/MainHUD.h"
#include "UserInterface/MainMenu.h"
#include "UserInterface/PauseMenu.h"
#include "UserInterface/OptionsMenu.h"
#include "UserInterface/Interaction/InteractionWidget.h"

#include "GameFramework/WorldSettings.h"
#include "Kismet/GameplayStatics.h"

AMainHUD::AMainHUD()
{
	/*// Assign
	static ConstructorHelpers::FClassFinder<UPauseMenu> PauseMenuBPClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UI/WBP_PauseMenuPanel.WBP_PauseMenuPanel'")); // /Script/UMGEditor.WidgetBlueprint'/Game/UI/WBP_PauseMenuPanel.WBP_PauseMenuPanel'
	if (PauseMenuBPClass.Succeeded()) // /Game/UI/WBP_PauseMenuPanel.WBP_PauseMenuPanel
	{
		PauseMenuClass = PauseMenuBPClass.Class;

		UE_LOG(LogTemp, Warning, TEXT("PauseMenuClass successfully assigned"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PauseMenuClass not assigned"));
	}

	
	static ConstructorHelpers::FClassFinder<UPauseMenu> PauseMenuBPClass(TEXT("/Game/UI/WBP_PauseMenuPanel.WBP_PauseMenuPanel"));
	if (PauseMenuBPClass.Succeeded())
	if (PauseMenuBPClass.Class != nullptr)
	{
		PauseMenuClass = PauseMenuBPClass.Class;
	}
	*/
}

void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	if (MainMenuClass)
	{
		MainMenuWidget = CreateWidget<UMainMenu>(GetWorld(), MainMenuClass);
		MainMenuWidget->AddToViewport(5); // Layer in depth visability / interaction
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
		UE_LOG(LogTemp, Warning, TEXT("MenuClass is assigned!"));
	}

	if (PauseMenuClass)
	{
		PauseMenuWidget = CreateWidget<UPauseMenu>(GetWorld(), PauseMenuClass);
		PauseMenuWidget->AddToViewport(50); // Layer in depth visability / interaction
		PauseMenuWidget->SetVisibility(ESlateVisibility::Collapsed);

		UE_LOG(LogTemp, Warning, TEXT("PauseMenuClass is assigned!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PauseMenuClass is not assigned!"));
	}

	if (OptionsMenuClass)
	{
		OptionsMenuWidget = CreateWidget<UOptionsMenu>(GetWorld(), OptionsMenuClass);
		OptionsMenuWidget->AddToViewport(55); // Layer in depth visability / interaction
		OptionsMenuWidget->SetVisibility(ESlateVisibility::Collapsed);

		UE_LOG(LogTemp, Warning, TEXT("OptionsMenuClass is assigned!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("OptionsMenuClass is not assigned!"));
	}

	if (InteractionWidgetClass)
	{
		InteractionWidget = CreateWidget<UInteractionWidget>(GetWorld(), InteractionWidgetClass);
		InteractionWidget->AddToViewport(-1); // Layer in depth visability / interaction
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}
/////////////////////////////////////************ INVENTORY MENU ************/////////////////////////////////////
void AMainHUD::DisplayMenu()
{
	if (MainMenuWidget)
	{
		bIsMenuVisible = true;
		MainMenuWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainHUD::HideMenu()
{
	if (MainMenuWidget)
	{
		bIsMenuVisible = false;
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void AMainHUD::ToggleMenu()
{
	UWorld* World = GetWorld();

	if (World)
	{
		if (bIsMenuVisible) // In Game & No visable Game Menu...
		{
			HideMenu();

			const FInputModeGameOnly InputMode;
			GetOwningPlayerController()->SetInputMode(InputMode);
			GetOwningPlayerController()->SetShowMouseCursor(false);

			World->GetWorldSettings()->SetTimeDilation(1.0f);
		}
		else // Game Menu Open (set pause function...)
		{
			DisplayMenu();

			const FInputModeGameAndUI InputMode;
			GetOwningPlayerController()->SetInputMode(InputMode);
			GetOwningPlayerController()->SetShowMouseCursor(true);

			World->GetWorldSettings()->SetTimeDilation(0.0f);
		}
	}	
}
/////////////////////////////////////************ INVENTORY MENU ************/////////////////////////////////////

/////////////////////////////////////************** PAUSE MENU **************/////////////////////////////////////
void AMainHUD::DisplayPauseMenu()
{
	if (PauseMenuWidget)
	{
		bIsPauseMenuVisible = true;
		PauseMenuWidget->SetVisibility(ESlateVisibility::Visible);

		UE_LOG(LogTemp, Warning, TEXT("Pause menu is now visible"));
	}
}

void AMainHUD::HidePauseMenu()
{
	if (PauseMenuWidget)
	{
		bIsPauseMenuVisible = false;
		PauseMenuWidget->SetVisibility(ESlateVisibility::Collapsed);

		UE_LOG(LogTemp, Warning, TEXT("Pause menu is not visible"));
	}
}

void AMainHUD::TogglePauseMenu()
{
	UWorld* World = GetWorld();

	if (World)
	{
		if (bIsPauseMenuVisible) // In Game & No visable Menu...
		{
			HidePauseMenu();

			const FInputModeGameOnly InputMode;
			GetOwningPlayerController()->SetInputMode(InputMode);
			GetOwningPlayerController()->SetShowMouseCursor(false);

			World->GetWorldSettings()->SetTimeDilation(1.0f);
		}
		else // Menu Open (set pause function...)
		{
			DisplayPauseMenu();

			const FInputModeGameAndUI InputMode;
			GetOwningPlayerController()->SetInputMode(InputMode);
			GetOwningPlayerController()->SetShowMouseCursor(true);

			World->GetWorldSettings()->SetTimeDilation(0.0f);
		}
	}
}
/////////////////////////////////////************** PAUSE MENU **************/////////////////////////////////////

/////////////////////////////////////************* OPTIONS MENU *************/////////////////////////////////////
void AMainHUD::DisplayOptionsMenu()
{
	if (OptionsMenuWidget)
	{
		bIsOptionsMenuVisible = true;
		OptionsMenuWidget->SetVisibility(ESlateVisibility::Visible);

		UE_LOG(LogTemp, Warning, TEXT("Options menu is now visible"));
	}
}

void AMainHUD::HideOptionsMenu()
{
	if (OptionsMenuWidget)
	{
		bIsOptionsMenuVisible = false;
		OptionsMenuWidget->SetVisibility(ESlateVisibility::Collapsed);

		UE_LOG(LogTemp, Warning, TEXT("Options menu is not visible"));
	}
}

void AMainHUD::ToggleOptionsMenu()
{
	UWorld* World = GetWorld();

	if (World)
	{
		if (bIsOptionsMenuVisible) // In Game & No visable Menu...
		{
			HideOptionsMenu();

			//const FInputModeGameOnly InputMode;
			//GetOwningPlayerController()->SetInputMode(InputMode);
			//GetOwningPlayerController()->SetShowMouseCursor(false);

			//World->GetWorldSettings()->SetTimeDilation(1.0f);
		}
		else // Menu Open (set pause function...)
		{
			DisplayOptionsMenu();

			//const FInputModeGameAndUI InputMode;
			//GetOwningPlayerController()->SetInputMode(InputMode);
			//GetOwningPlayerController()->SetShowMouseCursor(true);

			//World->GetWorldSettings()->SetTimeDilation(0.0f);
		}
	}
}
/////////////////////////////////////************* OPTIONS MENU *************/////////////////////////////////////

void AMainHUD::ShowInteractionWidget() const
{
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainHUD::HideInteractionWidget() const
{
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void AMainHUD::UpdateInteractionWidget(const FInteractableData* InteractableData) const
{
	if (InteractionWidget) // Showing the widget
	{
		if (InteractionWidget->GetVisibility() == ESlateVisibility::Collapsed)
		{
			InteractionWidget->SetVisibility(ESlateVisibility::Visible);
		}

		InteractionWidget->UpdateWidget(InteractableData);
	}
}
