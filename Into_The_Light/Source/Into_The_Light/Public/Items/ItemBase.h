// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "..\Data/ItemDataSystem.h"
#include "..\Player/FirstPersonCharacter.h"
#include "ItemBase.generated.h"

/**
 */
UCLASS()
class INTO_THE_LIGHT_API UItemBase : public UObject
{
	GENERATED_BODY()

public:
	//**********************************************
	//            VARIBLES & PROPERTIES
	//**********************************************

	//UPROPERTY()
	//UInventoryComponent* OwningInventory;

	UPROPERTY(VisibleAnywhere, Category = "Item Data", meta = (UIMin=1, UIMax=100))
	int32 Quantity;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	FName ID;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	EItemCategory ItemCatagory;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	EItemType ItemType;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	FItemStats ItemStats;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	FItemTextData ItemTextData;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	FItemNumericData ItemNumData;

	UPROPERTY(EditAnywhere, Category = "Item Data")
	FItemAssetData ItemAssetData;

	//**********************************************
	//                 FUNCTIONS
	//**********************************************

	UItemBase();

	UFUNCTION(Category = "Item")
	UItemBase* CreateItemCopy() const;

	UFUNCTION(Category = "Item")
	FORCEINLINE float GetItemStackWeight() const { return Quantity * ItemNumData.Weight; };

	UFUNCTION(Category = "Item")
	FORCEINLINE float GetItemSingleWeight() const { return ItemNumData.Weight; };

	UFUNCTION(Category = "Item")
	FORCEINLINE bool IsFullItemStack() const { return Quantity == ItemNumData.MaxStackSize; };

	UFUNCTION(Category = "Item")
	void SetQuantity(const int32 NewQuantity);

	UFUNCTION(Category = "Item")
	virtual void Use(AFirstPersonCharacter* Character);

protected:
	bool operator==(const FName & OtherID) const
	{
		return ID == OtherID;
	}
};
