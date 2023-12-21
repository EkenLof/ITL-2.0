#include "Components/InventoryComponent.h"

#include "Items/ItemBase.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

UItemBase* UInventoryComponent::FindMatchingItem(UItemBase* ItemIn) const
{
	if (ItemIn)
	{
		if (InventoryContents.Contains(ItemIn))
		{
			return ItemIn;
		}
	}
	return nullptr;
}

UItemBase* UInventoryComponent::FindNextItemByID(UItemBase* ItemIn) const
{
	if (ItemIn)
	{
		if (const TArray<TObjectPtr<UItemBase>>::ElementType* Result = InventoryContents.FindByKey(ItemIn))
		{
			return *Result;
		}
	}
	return nullptr;
}

UItemBase* UInventoryComponent::FindNextPartialStack(UItemBase* ItemIn) const
{
	if (const TArray<TObjectPtr<UItemBase>>::ElementType* Result = InventoryContents.FindByPredicate([&ItemIn](const UItemBase* InventoryItem)
			{
				return InventoryItem->ID == ItemIn->ID && !InventoryItem->IsFullItemStack();
			}
		))
	{
		return *Result;
	}
	return nullptr;
}

int32 UInventoryComponent::CalculateWeightAddAmount(UItemBase* ItemIn, int32 RequestedAddAmount)
{
	const int32 WeightMaxAddAmount = FMath::FloorToInt((GetWeightCapacity() - InventoryTotalWeight) / ItemIn->GetItemSingleWeight());
	if (WeightMaxAddAmount >= RequestedAddAmount)
	{
		return RequestedAddAmount;
	}
	return WeightMaxAddAmount;
}

int32 UInventoryComponent::CalculateNumberForFullStack(UItemBase* StackableItem, int32 InitioalRequestedAddAmount)
{
	const int32 AddAmountToMakeFullStack = StackableItem->ItemNumData.MaxStackSize - StackableItem->Quantity;

	return FMath::Min(InitioalRequestedAddAmount, AddAmountToMakeFullStack);
}

void UInventoryComponent::RemoveSingleInstanceOfItem(UItemBase* ItemToRemove)
{
	InventoryContents.RemoveSingle(ItemToRemove);
	OnInventoryUpdated.Broadcast();
}

int32 UInventoryComponent::RemoveAmountOfItem(UItemBase* ItemIn, int32 DesiredAmountToRemove)
{
	const int32 ActualAmountToRemove = FMath::Min(DesiredAmountToRemove, ItemIn->Quantity);

	ItemIn->SetQuantity(ItemIn->Quantity - ActualAmountToRemove);

	OnInventoryUpdated.Broadcast();

	return ActualAmountToRemove;
}

void UInventoryComponent::SplitExistingStack(UItemBase* ItemIn, const int32 AmountToSplit)
{
	if (!(InventoryContents.Num() + 1 > InventorySlotsCapacity))
	{
		RemoveAmountOfItem(ItemIn, AmountToSplit);
		AddNewItem(ItemIn, AmountToSplit);
	}
}

FItemAddResult UInventoryComponent::HandleNonStackableItems(UItemBase* InputItem)
{
	// Check if in the input item had valid weight
	if (FMath::IsNearlyZero(InputItem->GetItemStackWeight()) || InputItem->GetItemStackWeight() < 0)
	{
		return FItemAddResult::AddedNone(FText::Format(
			FText::FromString("Could not add {0} to the Invetory. Item has invalid weight value."), 
			InputItem->ItemTextData.Name));
	}

	// Will the item weight overflow weight capacity
	if (InventoryTotalWeight + InputItem->GetItemStackWeight() > GetWeightCapacity())
	{
		return FItemAddResult::AddedNone(FText::Format(
			FText::FromString("Could not add {0} to the Invetory. Item would overflow weight limit."),
			InputItem->ItemTextData.Name));
	}

	// Adding one more item would overflow slot Capacity
	if (InventoryContents.Num() + 1 > InventorySlotsCapacity)
	{
		return FItemAddResult::AddedNone(FText::Format(
			FText::FromString("Could not add {0} to the Invetory. All Inventory slots are FULL."), 
			InputItem->ItemTextData.Name));
	}

	AddNewItem(InputItem, 1);

	return FItemAddResult::AddedAll(1, FText::Format(
		FText::FromString("Successfully added single {0} to the Invetory."), 
		InputItem->ItemTextData.Name));
}

int32 UInventoryComponent::HandleStackableItems(UItemBase* ItemIn, int32 RequestedAddAmount)
{
	if (RequestedAddAmount <= 0 || FMath::IsNearlyZero(ItemIn->GetItemStackWeight()))
	{
		return 0;
	}

	int32 AmountToDistribute = RequestedAddAmount;

	// Check if input item already exists in Inventory and is not a full stack.
	UItemBase* ExistingItemStack = FindNextPartialStack(ItemIn);

	// Distribute item stack over -Existing- stacks.
	while (ExistingItemStack)
	{
		// Calculate how many existing item would be needed to make the next full stack.
		const int32 AmountToMakeFullStack = CalculateNumberForFullStack(ExistingItemStack, AmountToDistribute);
		// Calculate how many AmountToMakeFulStack can actually be carried bassed on weight capacity.
		const int32 WeightLimitAddAmount = CalculateWeightAddAmount(ExistingItemStack, AmountToMakeFullStack);

		// As long as the remaining amount of the item does not overflow weight capacity.
		if (WeightLimitAddAmount > 0)
		{
			// Adjust the existing items stack quanitity and Inventory total weight.
			ExistingItemStack->SetQuantity(ExistingItemStack->Quantity + WeightLimitAddAmount);
			InventoryTotalWeight += (ExistingItemStack->GetItemSingleWeight() * WeightLimitAddAmount);

			// Adjust the count to be distrubuted.
			AmountToDistribute -= WeightLimitAddAmount;

			ItemIn->SetQuantity(AmountToDistribute);

			// if max weight capacity is reached, no need to run the loop again.
			if (InventoryTotalWeight >= InventorySlotsCapacity)
			{
				OnInventoryUpdated.Broadcast();
				return RequestedAddAmount - AmountToDistribute;
			}
		}
		else if (WeightLimitAddAmount <= 0)
		{
			if (AmountToDistribute != RequestedAddAmount)
			{
				// If distributing an item across multible stacks, then this is reashed,
				// And the weight limit is hit during thos process.
				OnInventoryUpdated.Broadcast();
				return RequestedAddAmount - AmountToDistribute;
			}
			return 0;
		}

		if (AmountToDistribute <= 0)
		{
			// All input item was distributed across -Existing Stacks-.
			OnInventoryUpdated.Broadcast();
			return RequestedAddAmount;
		}

		// Check if it still another valid existing partial stack of item input. 
		ExistingItemStack = FindNextPartialStack(ItemIn);
	}

	// No more -Partial- stacks forund, Check if -New- stack can be added.
	if (InventoryContents.Num() + 1 <= InventorySlotsCapacity)
	{
		// Trying to add as many items to remaining quanyity if inventory weight capacity is enough.
		const int32 WeightLimitAddAmount = CalculateWeightAddAmount(ItemIn, AmountToDistribute);

		if (WeightLimitAddAmount > 0)
		{
			// If weight limit is reashed but still items left to distribute.
			if (WeightLimitAddAmount < AmountToDistribute)
			{
				// Adjust Item and new stack With possible amount that can be held.
				AmountToDistribute -= WeightLimitAddAmount;
				ItemIn->SetQuantity(AmountToDistribute);

				// Create -copy- due to a partial stack amount is only added.
				AddNewItem(ItemIn->CreateItemCopy(), WeightLimitAddAmount);
				return RequestedAddAmount - AmountToDistribute;
			}
			// Otherwise, full remainer of stack can be added.
			AddNewItem(ItemIn, AmountToDistribute);
			return RequestedAddAmount;
		}
	}
	OnInventoryUpdated.Broadcast();
	return RequestedAddAmount - AmountToDistribute;
}

FItemAddResult UInventoryComponent::HandleAddItem(UItemBase* InputItem)
{
	if (GetOwner())
	{
		const int32 InitialRequestedAddAmount = InputItem->Quantity;

		// Handle None Stackable items
		if (!InputItem->ItemNumData.bIsStackAble)
		{
			return HandleNonStackableItems(InputItem);
		}

		// Handle Stacable items
		const int32 StackableAmontAdded = HandleStackableItems(InputItem, InitialRequestedAddAmount);

		if (StackableAmontAdded == InitialRequestedAddAmount)
		{
			return FItemAddResult::AddedAll(InitialRequestedAddAmount, FText::Format(
				FText::FromString("Successfully added {0} {1} to the Inventory."),
				InitialRequestedAddAmount,
				InputItem->ItemTextData.Name));
		}

		if (StackableAmontAdded < InitialRequestedAddAmount && StackableAmontAdded > 0)
		{
			return FItemAddResult::AddedPartial(StackableAmontAdded, FText::Format(
				FText::FromString("Partial amount of {0} added to the Inventory. Number added = {1}"),
				InputItem->ItemTextData.Name,
				StackableAmontAdded));
		}

		if (StackableAmontAdded <= 0)
		{
			return FItemAddResult::AddedNone(FText::Format(
				FText::FromString("Couldn't add {0} to the Inventory. No remaining Inventory slots, or invalid item."),
				InputItem->ItemTextData.Name));
		}
	}

	check(false);
	return FItemAddResult::AddedNone(FText::FromString("TryAddItem Falltrough error. GetOwner() check somehow failed."));
}

void UInventoryComponent::AddNewItem(UItemBase* Item, const int32 AmountToAdd)
{
	UItemBase* NewItem;

	if (Item->bIsCopy || Item->bIsPickup)
	{
		// if the item is already a copy, or is a world pickup
		NewItem = Item;
		NewItem->ResetItemFlags();
	}
	else
	{
		// used when splitting or dragging to/from another inventory
		NewItem = Item->CreateItemCopy();
	}

	NewItem->OwningInventory = this;
	NewItem->SetQuantity(AmountToAdd);

	InventoryContents.Add(NewItem);
	InventoryTotalWeight += NewItem->GetItemStackWeight();
	OnInventoryUpdated.Broadcast();
}

