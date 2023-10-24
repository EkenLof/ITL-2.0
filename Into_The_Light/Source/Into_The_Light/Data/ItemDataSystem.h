#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataSystem.generated.h"

UENUM()
enum class EItemCategory : uint8
{
	KeyItem UMETA(DisplayName = "KeyItem"),
	Equipment UMETA(DisplayName = "Equipment"),
	Items UMETA(DisplayName = "Items"),
	Collectibles UMETA(DisplayName = "Collectibles")
};

UENUM()
enum class EItemType : uint8
{
	LeftHand UMETA(DisplayName = "LeftHandEquipment"), // Lighter, flashlight + more
	RightHand UMETA(DisplayName = "RightHandEquipment"), // Phone + more
	Consumable UMETA(DisplayName = "Consumable"), // Health item + more
	Useables UMETA(DisplayName = "Useables"), // Battary + more
	Item UMETA(DisplayName = "Item"), // Fuses, Keys + more
	Collectibles UMETA(DisplayName = "Collectibles") // Notes + more
};

USTRUCT()
struct FItemStats
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere)
	float FlashlightBattery;

	UPROPERTY(EditAnywhere)
	float HealthPillsRestorationAmount;
};

USTRUCT()
struct FItemTextData
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	FText InteractionText;

	UPROPERTY(EditAnywhere)
	FText UsageText;
};

USTRUCT()
struct FItemNumericData // Holding Logic data
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere)
	float Weight;

	UPROPERTY(EditAnywhere)
	int32 MaxStackSize;

	UPROPERTY(EditAnywhere)
	bool bIsStackAble;
};

USTRUCT()
struct FItemAssetData
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;

	// Sound
};


USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY();

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
};
