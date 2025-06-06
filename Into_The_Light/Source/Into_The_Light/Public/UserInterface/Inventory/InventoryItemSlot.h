#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryItemSlot.generated.h"

class UTextBlock;
class UInventoryTooltip;
class UDragItemVisual;
class UItemBase;
class UBorder;
class UImage;

UCLASS()
class INTO_THE_LIGHT_API UInventoryItemSlot : public UUserWidget
{
	GENERATED_BODY()
	
public:
	FORCEINLINE void SetItemReference(UItemBase* ItemIn) { ItemReference = ItemIn; };
	FORCEINLINE UItemBase* GetItemReference() const { return ItemReference; };

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsFuse10a = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsFuse16a = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsElectricKey = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsOfficeKey = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsKeycard = false;

	// MAPS
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsMapB1 = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsMapF1 = false;
	

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Inventory Slot")
	TSubclassOf<UDragItemVisual> DragItemVisualClass;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory Slot")
	TSubclassOf<UInventoryTooltip> ToolTipClass;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot")
	UItemBase* ItemReference;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot", meta = (BindWidget))
	UBorder* ItemBorder;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot", meta = (BindWidget))
	UImage* ItemIcon;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot", meta = (BindWidget))
	UTextBlock* ItemQuantity;

	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
};
