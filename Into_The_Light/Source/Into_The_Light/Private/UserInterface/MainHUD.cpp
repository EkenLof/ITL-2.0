// Fill out your copyright notice in the Description page of Project Settings.

#include "UserInterface/MainHUD.h"
#include "UserInterface/MainMenu.h"
#include "UserInterface/Interaction/InteractionWidget.h"

#include "GameFramework/WorldSettings.h"
#include "Kismet/GameplayStatics.h"

AMainHUD::AMainHUD()
{

}

void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	if (MainMenuClass)
	{
		MainMenuWidget = CreateWidget<UMainMenu>(GetWorld(), MainMenuClass);
		MainMenuWidget->AddToViewport(5); // Layer in depth visability / interaction
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (InteractionWidgetClass)
	{
		InteractionWidget = CreateWidget<UInteractionWidget>(GetWorld(), InteractionWidgetClass);
		InteractionWidget->AddToViewport(-1); // Layer in depth visability / interaction
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

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
		else // Game Menu Open (Maybe set pause function...)
		{
			DisplayMenu();

			const FInputModeGameAndUI InputMode;
			GetOwningPlayerController()->SetInputMode(InputMode);
			GetOwningPlayerController()->SetShowMouseCursor(true);

			World->GetWorldSettings()->SetTimeDilation(0.0f);
		}
	}	
}

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
