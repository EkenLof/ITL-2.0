// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ItemBase.h"

UItemBase::UItemBase()
{

}

UItemBase* UItemBase::CreateItemCopy() const
{
	UItemBase* ItemCopy = NewObject<UItemBase>(StaticClass());

	ItemCopy->ID = this->ID;
	ItemCopy->Quantity = this->Quantity;
	ItemCopy->ItemCatagory = this->ItemCatagory;
	ItemCopy->ItemType = this->ItemType;
	ItemCopy->ItemTextData = this->ItemTextData;
	ItemCopy->ItemNumData = this->ItemNumData;
	ItemCopy->ItemStats = this->ItemStats;
	ItemCopy->ItemAssetData = this->ItemAssetData;

	return ItemCopy;
}

void UItemBase::SetQuantity(const int32 NewQuantity)
{
	if (NewQuantity != Quantity) // ? = True / : = False
	{
		Quantity = FMath::Clamp(NewQuantity, 0, ItemNumData.bIsStackAble ? ItemNumData.MaxStackSize : 1);
	
		/*
		if (OwningInventory)
		{
			if (Quantity < 0)
			{
				OwningInventory->RemoveItem(This);
			}
		}
		*/
	
	}
}

void UItemBase::Use(AFirstPersonCharacter* Character)
{

}