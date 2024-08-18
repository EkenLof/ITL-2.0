// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/Inventory/InventoryItemSlot.h"

#include "UserInterface/Inventory/InventoryTooltip.h"
#include "UserInterface/Inventory/DragItemVisual.h"
#include "UserInterface/Inventory/ItemDragDropOperation.h"

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
			ItemBorder->SetBrushColor(FLinearColor(0.255f, 0.255f, 0.255f, 1.0f));
			break;
		case EItemType::RightHand: 
			ItemBorder->SetBrushColor(FLinearColor(0.255f, 0.255f, 0.255f, 1.0f));
			break;
		case EItemType::Consumable: 
			ItemBorder->SetBrushColor(FLinearColor(0.255f, 0.255f, 0.255f, 1.0f));
			break;
		case EItemType::Useables: 
			ItemBorder->SetBrushColor(FLinearColor(0.255f, 0.255f, 0.255f, 1.0f));
			break;
		case EItemType::Item: 
			ItemBorder->SetBrushColor(FLinearColor(0.255f, 0.255f, 0.255f, 1.0f));
			break;
		case EItemType::Collectibles: 
			ItemBorder->SetBrushColor(FLinearColor(0.255f, 0.255f, 0.255f, 1.0f));
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
	FReply Reply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	FString ItemClickOrDragTemp = ItemReference->ItemTextData.Name.ToString();

	FString FlashlightText = "Flashlight";
	FString LighterText = "Lighter";

	FString OfficeKeyText = "Office Key";
	FString ElectricKeyText = "Electic Key";
	FString Fuse10aText = "Fuse 10A";
	FString ColeKeycardText = "Cole's Keycard";

	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		if (ItemClickOrDragTemp == FlashlightText || 
			ItemClickOrDragTemp == LighterText ||
			ItemClickOrDragTemp == OfficeKeyText ||
			ItemClickOrDragTemp == ColeKeycardText ||
			ItemClickOrDragTemp == ElectricKeyText ||
			ItemClickOrDragTemp == Fuse10aText)
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---UI Item_Not_Dropable---"));

			return FReply::Handled();
		}
		else
		{
			return Reply.Handled().DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
		}
	}
	else if (InMouseEvent.GetEffectingButton() == EKeys::RightMouseButton) 	// SubMenu RightClick.
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---UI R_Interact---"));

		if (ItemClickOrDragTemp == Fuse10aText)
		{
			bIsFuse10a = true;
			bIsElectricKey = false;
			bIsOfficeKey = false;

			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---UI Fuse10A_Selected---"));

			return FReply::Handled();
		}
		else if (ItemClickOrDragTemp == ElectricKeyText)
		{
			bIsElectricKey = true;
			bIsFuse10a = false;
			bIsOfficeKey = false;

			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---UI ElectricKey_Selected---"));

			return FReply::Handled();
		}
		else if (ItemClickOrDragTemp == OfficeKeyText)
		{
			bIsOfficeKey = true;
			bIsFuse10a = false;
			bIsElectricKey = false;

			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---UI OfficeKey_Selected---"));

			return FReply::Handled();
		}
		else
		{
			bIsFuse10a = false;
			bIsElectricKey = false;
			bIsOfficeKey = false;

			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---UI No_Item_Selected\nOr No_Identified_Item_Selected---"));

			return FReply::Handled();
		}

		return FReply::Handled();
	}


	return Reply.Unhandled();
}

void UInventoryItemSlot::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
}

void UInventoryItemSlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if (DragItemVisualClass)
	{
		const TObjectPtr<UDragItemVisual> DragVisual 
			= CreateWidget<UDragItemVisual>(this, DragItemVisualClass);
		DragVisual->ItemIcon->SetBrushFromTexture(ItemReference->ItemAssetData.Icon);
		DragVisual->ItemBorder->SetBrushColor(ItemBorder->GetBrushColor());

		ItemReference->ItemNumData.bIsStackAble
			? DragVisual->ItemQuantity->SetText(FText::AsNumber(ItemReference->Quantity))
			: DragVisual->ItemQuantity->SetVisibility(ESlateVisibility::Collapsed);

		UItemDragDropOperation* DragItemOperation = NewObject<UItemDragDropOperation>();
		DragItemOperation->SourceItem = ItemReference;
		DragItemOperation->SourceInventory = ItemReference->OwningInventory;
		DragItemOperation->DefaultDragVisual = DragVisual;

		DragItemOperation->Pivot = EDragPivot::MouseDown; // Where the icon is acording to the curser.

		OutOperation = DragItemOperation;
	}
}

bool UInventoryItemSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}
