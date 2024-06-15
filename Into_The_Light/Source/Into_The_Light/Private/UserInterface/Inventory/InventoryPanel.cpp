// Game
#include "UserInterface/Inventory/InventoryPanel.h"

#include "UserInterface/Inventory/InventoryItemSlot.h"
#include "UserInterface/Inventory/ItemDragDropOperation.h"
#include "..\Player/FirstPersonCharacter.h"
#include "Components/InventoryComponent.h"
// Engine
#include "Components/TextBlock.h"
#include "Components/WrapBox.h"


void UInventoryPanel::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	PlayerCharacter = Cast<AFirstPersonCharacter>(GetOwningPlayerPawn());
	if (PlayerCharacter)
	{
		InventoryReferance = PlayerCharacter->GetInventory();
		if (InventoryReferance)
		{
			InventoryReferance->OnInventoryUpdated.AddUObject(this, &UInventoryPanel::RefreshInventory);
			SetInfoText();
		}
	}
}

void UInventoryPanel::SetInfoText() const
{
	WeightInfo->SetText(FText::Format(FText::FromString("Weight: {0}/{1}"), 
		InventoryReferance->GetInventoryTotalWeight(),
		InventoryReferance->GetWeightCapacity()));

	CapacityInfo->SetText(FText::Format(FText::FromString("Capacity: {0}/{1}"),
		InventoryReferance->GetInventoryContents().Num(),
		InventoryReferance->GetSlotCapacity()));
}

void UInventoryPanel::RefreshInventory()
{
	if (InventoryReferance && InventorySlotClass)
	{
		InventoryPanel->ClearChildren();

		for (UItemBase* const& InventoryItem : InventoryReferance->GetInventoryContents())
		{
			UInventoryItemSlot* ItemSlot = CreateWidget<UInventoryItemSlot>(this, InventorySlotClass);
			ItemSlot->SetItemReference(InventoryItem);
			InventoryPanel->AddChildToWrapBox(ItemSlot);
		}
		SetInfoText();
	}
}

bool UInventoryPanel::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	const UItemDragDropOperation* ItemDragDrop = Cast<UItemDragDropOperation>(InOperation);

	if (ItemDragDrop->SourceItem && InventoryReferance)
	{
		UE_LOG(LogTemp, Warning, TEXT("Detected an Item drop on InventoryPanel."))

			// returning true will stop the drop operation at this widget.
			return true;
	}
	// Returning false will cause the drop operation to fall through the underlying widget (IF ANY).
	return false;
}
