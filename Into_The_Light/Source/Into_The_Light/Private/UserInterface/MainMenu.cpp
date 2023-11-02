// Fill out your copyright notice in the Description page of Project Settings.

#include "UserInterface/MainMenu.h"
#include "..\Player/FirstPersonCharacter.h"

void UMainMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerCharacter = Cast<AFirstPersonCharacter>(GetOwningPlayerPawn());
}

bool UMainMenu::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	return false;

	// Cast to Item Drag drop, Check if player is valid, Call Item drop in player
}
