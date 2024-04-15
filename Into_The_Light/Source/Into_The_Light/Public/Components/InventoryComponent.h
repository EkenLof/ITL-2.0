#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnInventoryUpdated);

class UItemBase;

UENUM(BlueprintType)
enum class EItemAddResult : uint8
{
	IAR_NoItemAdded UMETA(DisplayName = "No item added"),
	IAR_PartialAmountItemAdded UMETA(DisplayName = "Partial amount of item added"),
	IAR_AllItemAdded UMETA(DisplayName = "All of item added")
};

USTRUCT(BlueprintType)
struct FItemAddResult
{
	GENERATED_BODY()

	FItemAddResult() :
		ActualAmountAdded(0),
		OperationResult(EItemAddResult::IAR_NoItemAdded),
		ResultMessage(FText::GetEmpty()) {};

	// Actual amount of the item that was added to the inventory
	UPROPERTY(BlueprintReadOnly, Category = "Item Add Result")
	int32 ActualAmountAdded;
	// Enum representing the end state of an add item Operation
	UPROPERTY(BlueprintReadOnly, Category = "Item Add Result")
	EItemAddResult OperationResult;
	// Info message that can be passed with the result
	UPROPERTY(BlueprintReadOnly, Category = "Item Add Result")
	FText ResultMessage;

	static FItemAddResult AddedNone(const FText& ErrorText)
	{
		FItemAddResult AddedNoneResult;
		AddedNoneResult.ActualAmountAdded = 0;
		AddedNoneResult.OperationResult = EItemAddResult::IAR_NoItemAdded;
		AddedNoneResult.ResultMessage = ErrorText;
		return AddedNoneResult;
	};

	static FItemAddResult AddedPartial(const int32 PartialAmountAdded, const FText& ErrorText)
	{
		FItemAddResult AddedPartialResult;
		AddedPartialResult.ActualAmountAdded = PartialAmountAdded;
		AddedPartialResult.OperationResult = EItemAddResult::IAR_PartialAmountItemAdded;
		AddedPartialResult.ResultMessage = ErrorText;
		return AddedPartialResult;
	};

	static FItemAddResult AddedAll(const int32 AmountAdded, const FText& Message)
	{
		FItemAddResult AddedAllResult;
		AddedAllResult.ActualAmountAdded = AmountAdded;
		AddedAllResult.OperationResult = EItemAddResult::IAR_AllItemAdded;
		AddedAllResult.ResultMessage = Message;
		return AddedAllResult;
	};
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INTO_THE_LIGHT_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	FOnInventoryUpdated OnInventoryUpdated;


	UInventoryComponent();

	//////////////////////////////---ITEM-MAIN-LOGIC---///////////////////////////////
	UFUNCTION(Category = "Inventory | ItemID")
	void ExposeItem(UItemBase* ItemOut);
	//////////////////////////////---ITEM-MAIN-LOGIC---///////////////////////////////

	//////////////////////////////////---ACTIVE---////////////////////////////////////
	/// LEFT-HAND-ITEMS
	UPROPERTY(EditAnywhere, Category = "Inventory | ItemID")
	bool IsFlshlight;
	UPROPERTY(EditAnywhere, Category = "Inventory | ItemID")
	bool IsLighter;
	/// LEFT-HAND-ITEMS

	/// USABLE-ITEMS
	UPROPERTY(EditAnywhere, Category = "Inventory | ItemID")
	bool IsBattery;
	/// USABLE-ITEMS

	/// KEY-ITEMS (ITEMS)
	UPROPERTY(EditAnywhere, Category = "Inventory | ItemID")
	bool IsColeKeycard;
	UPROPERTY(EditAnywhere, Category = "Inventory | ItemID")
	bool IsElectricKey;
	UPROPERTY(EditAnywhere, Category = "Inventory | ItemID")
	bool IsFuse10a;
	/// KEY-ITEMS (ITEMS)
	//////////////////////////////////---ACTIVE---////////////////////////////////////

	//////////////////////////////////---NAMES---/////////////////////////////////////
	/// LEFT-HAND-ITEMS
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory | ItemID")
	FString Flashlight = "Flashlight";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory | ItemID")
	FString Lighter = "Lighter";
	/// LEFT-HAND-ITEMS

	/// USABLE-ITEMS
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory | ItemID")
	FString Battery = "Battery";
	/// USABLE-ITEMS

	/// KEY-ITEMS (ITEMS)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory | ItemID")
	FString ColeKeycard = "Cole's Keycard";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory | ItemID")
	FString ElectricKey = "Electic Key";

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory | ItemID")
	FString Fuse10a = "Fuse 10A";
	/// KEY-ITEMS (ITEMS)
	//////////////////////////////////---NAMES---/////////////////////////////////////

	/////////////////////////////---INVENTORY-LOGIC---////////////////////////////////
	UFUNCTION(Category = "Inventory")
	FItemAddResult HandleAddItem(UItemBase* InputItem);

	UFUNCTION(Category = "Inventory")
	UItemBase* FindMatchingItem(UItemBase* ItemIn) const;
	UFUNCTION(Category = "Inventory")
	UItemBase* FindNextItemByID(UItemBase* ItemIn) const;
	UFUNCTION(Category = "Inventory")
	UItemBase* FindNextPartialStack(UItemBase* ItemIn) const;

	UFUNCTION(Category = "Inventory")
	void RemoveSingleInstanceOfItem(UItemBase* ItemToRemove);
	UFUNCTION(Category = "Inventory")
	int32 RemoveAmountOfItem(UItemBase* ItemIn, int32 DesiredAmountToRemove);
	UFUNCTION(Category = "Inventory")
	void SplitExistingStack(UItemBase* ItemIn, const int32 AmountToSplit);

	// Getters
	UFUNCTION(Category = "Inventory")
	FORCEINLINE float GetInventoryTotalWeight() const { return InventoryTotalWeight; };
	UFUNCTION(Category = "Inventory")
	FORCEINLINE float GetWeightCapacity() const { return InventoryWeightCapacity; };
	UFUNCTION(Category = "Inventory")
	FORCEINLINE int32 GetSlotCapacity() const { return InventorySlotsCapacity; };

	UFUNCTION(Category = "Inventory")
	FORCEINLINE TArray<UItemBase*> GetInventoryContents() const { return InventoryContents; };

	// Setters
	UFUNCTION(Category = "Inventory")
	FORCEINLINE void SetSlotsCapacity(const int32 NewSlotsCapacity) { InventorySlotsCapacity = NewSlotsCapacity; };
	UFUNCTION(Category = "Inventory")
	FORCEINLINE void SetWeightCapacity(const int32 NewWeightCapacity) { InventoryWeightCapacity = NewWeightCapacity; };

protected:
	UPROPERTY(VisibleAnywhere, Category = "Inventory")
	float InventoryTotalWeight;
	UPROPERTY(EditInstanceOnly, Category = "Inventory")
	float InventoryWeightCapacity;
	UPROPERTY(EditInstanceOnly, Category = "Inventory")
	int32 InventorySlotsCapacity;

	UPROPERTY(VisibleAnywhere, Category = "Inventory")
	TArray<TObjectPtr<UItemBase>> InventoryContents;


	virtual void BeginPlay() override;	

	FItemAddResult HandleNonStackableItems(UItemBase* InputItem);
	int32 HandleStackableItems(UItemBase* ItemIn, int32 RequestedAddAmount);
	int32 CalculateWeightAddAmount(UItemBase* ItemIn, int32 RequestedAddAmount);
	int32 CalculateNumberForFullStack(UItemBase* StackableItem, int32 InitioalRequestedAddAmount);

	void AddNewItem(UItemBase* Item, const int32 AmountToAdd);
	/////////////////////////////---INVENTORY-LOGIC---////////////////////////////////
};
