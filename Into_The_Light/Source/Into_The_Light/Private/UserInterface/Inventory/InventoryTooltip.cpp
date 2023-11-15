#include "UserInterface/Inventory/InventoryTooltip.h"
#include "UserInterface/Inventory/InventoryItemSlot.h"
#include "Components/TextBlock.h"
#include "Items/ItemBase.h"

void UInventoryTooltip::NativeConstruct()
{
	Super::NativeConstruct();

	const UItemBase* ItemBeingHovered = InventorySlotBeingHovered->GetItemReference();

	switch (ItemBeingHovered->ItemType)
	{
	case EItemType::LeftHand:
		ItemType->SetText(FText::FromString("Left-hand Equipment"));
		ItemType->SetColorAndOpacity(FLinearColor(0.0f, 0.200f, 0.255f, 0.75f)); // Cyan-ish //R,G,B,A
		HealthPillsRestorationAmount->SetVisibility(ESlateVisibility::Collapsed);
		HealthPillsRestorationAmountText->SetVisibility(ESlateVisibility::Collapsed);
		break;

	case EItemType::RightHand:
		ItemType->SetText(FText::FromString("Right-hand Equipment"));
		ItemType->SetColorAndOpacity(FLinearColor(0.0f, 0.255f, 0.200f, 0.75f)); // // Green/Cyan //R,G,B,A
		HealthPillsRestorationAmount->SetVisibility(ESlateVisibility::Collapsed);
		HealthPillsRestorationAmountText->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBattery->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryText->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryProcentText->SetVisibility(ESlateVisibility::Collapsed);
		break;

	case EItemType::Consumable:
		ItemType->SetText(FText::FromString("Consumable"));
		ItemType->SetColorAndOpacity(FLinearColor(0.0f, 0.150f, 0.50f, 0.75f)); // Green-ish //R,G,B,A
		FlashlightBattery->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryText->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryProcentText->SetVisibility(ESlateVisibility::Collapsed);
		break;

	case EItemType::Useables:
		ItemType->SetText(FText::FromString("Useables"));
		ItemType->SetColorAndOpacity(FLinearColor(0.175f, 0.255f, 0.225f, 0.75f)); // Green/Cyan Bright //R,G,B,A
		HealthPillsRestorationAmount->SetVisibility(ESlateVisibility::Collapsed);
		HealthPillsRestorationAmountText->SetVisibility(ESlateVisibility::Collapsed);
		break;

	case EItemType::Item:
		ItemType->SetText(FText::FromString("Key Item"));
		ItemType->SetColorAndOpacity(FLinearColor(0.175f, 0.0f, 0.0f, 0.75f)); // Red-ish //R,G,B,A
		HealthPillsRestorationAmount->SetVisibility(ESlateVisibility::Collapsed);
		HealthPillsRestorationAmountText->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBattery->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryText->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryProcentText->SetVisibility(ESlateVisibility::Collapsed);
		break;

	case EItemType::Collectibles:
		ItemType->SetText(FText::FromString("Collectibles"));
		ItemType->SetColorAndOpacity(FLinearColor(0.125f, 0.0f, 0.255f, 0.75f)); // Peurple-ish //R,G,B,A
		HealthPillsRestorationAmount->SetVisibility(ESlateVisibility::Collapsed);
		HealthPillsRestorationAmountText->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBattery->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryText->SetVisibility(ESlateVisibility::Collapsed);
		FlashlightBatteryProcentText->SetVisibility(ESlateVisibility::Collapsed);
		break;
	default:;
	}

	ItemName->SetText(ItemBeingHovered->ItemTextData.Name);
	FlashlightBattery->SetText(FText::AsNumber(ItemBeingHovered->ItemStats.FlashlightBattery));
	HealthPillsRestorationAmount->SetText(FText::AsNumber(ItemBeingHovered->ItemStats.HealthPillsRestorationAmount));
	UsageText->SetText(ItemBeingHovered->ItemTextData.UsageText);
	ItemDescription->SetText(ItemBeingHovered->ItemTextData.Description);
	StackWeight->SetText(FText::AsNumber(ItemBeingHovered->GetItemStackWeight()));

	if (ItemBeingHovered->ItemNumData.bIsStackAble)
	{
		MaxStackSize->SetText(FText::AsNumber(ItemBeingHovered->ItemNumData.MaxStackSize));
		MaxStackSizeText->SetVisibility(ESlateVisibility::Visible);; // Text only
	}
	else
	{
		MaxStackSize->SetVisibility(ESlateVisibility::Collapsed);
		MaxStackSizeText->SetVisibility(ESlateVisibility::Collapsed);; // Text only
	}
}
