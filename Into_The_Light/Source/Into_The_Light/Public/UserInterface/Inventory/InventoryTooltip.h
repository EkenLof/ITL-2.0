// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryTooltip.generated.h"

class UTextBlock;
class UInventoryItemSlot;

UCLASS()
class INTO_THE_LIGHT_API UInventoryTooltip : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere)
	UInventoryItemSlot* InventorySlotBeingHovered;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemName;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemType;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* FlashlightBatteryText; // Text Only

	UPROPERTY(meta = (BindWidget))
	UTextBlock* FlashlightBatteryProcentText; // Text Only

	UPROPERTY(meta = (BindWidget))
	UTextBlock* FlashlightBattery;

	//UPROPERTY(meta = (BindWidget))
	//UTextBlock* DamageAmount; // Maybe for weapon

	UPROPERTY(meta = (BindWidget))
	UTextBlock* HealthPillsRestorationAmountText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* HealthPillsRestorationAmount;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* UsageText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemDescription;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MaxStackSizeText; // Text Only

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MaxStackSize;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* StackWeightText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* StackWeight;

protected:
	virtual void NativeConstruct() override;
};
