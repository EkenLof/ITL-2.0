// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/Inventory/InventoryItemSlot.h"
#include "UserInterface/Inventory/InventoryTooltip.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Items/ItemBase.h"

void UInventoryItemSlot::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (ToolTipClass)
	{
		UInventoryTooltip* ToolTip = CreateWidget<UInventoryTooltip>(this, ToolTipClass);
		ToolTip->InventorySlotBeingHovered = this;
		SetToolTip(ToolTip);
	}
}

void UInventoryItemSlot::NativeConstruct()
{
	Super::NativeConstruct();

	if (ItemReference)
	{
		switch (ItemReference->ItemType)
		{
		case EItemType::LeftHand: 
			ItemBorder->SetBrushColor(FLinearColor(0.0f, 0.200f, 0.255f, 0.4f)); // Cyan-ish //R,G,B,A
			break;
		case EItemType::RightHand: 
			ItemBorder->SetBrushColor(FLinearColor(0.0f, 0.255f, 0.200f, 0.4f)); // // Green/Cyan //R,G,B,A
			break;
		case EItemType::Consumable: 
			ItemBorder->SetBrushColor(FLinearColor(0.0f, 0.150f, 0.50f, 0.4f)); // Green-ish //R,G,B,A
			break;
		case EItemType::Useables: 
			ItemBorder->SetBrushColor(FLinearColor(0.175f, 0.255f, 0.225f, 0.4f)); // Green/Cyan Bright //R,G,B,A
			break;
		case EItemType::Item: 
			ItemBorder->SetBrushColor(FLinearColor(0.175f, 0.0f, 0.0f, 0.4f)); // Red-ish //R,G,B,A
			break;
		case EItemType::Collectibles: 
			ItemBorder->SetBrushColor(FLinearColor(0.125f, 0.0f, 0.255f, 0.4f)); // Peurple-ish //R,G,B,A
			break;
		default:;
		}

		ItemIcon->SetBrushFromTexture(ItemReference->ItemAssetData.Icon);

		if (ItemReference->ItemNumData.bIsStackAble)
		{
			ItemQuantity->SetText(FText::AsNumber(ItemReference->Quantity));
		}
		else
		{
			ItemQuantity->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

FReply UInventoryItemSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UInventoryItemSlot::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
}

void UInventoryItemSlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);
}

bool UInventoryItemSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}
