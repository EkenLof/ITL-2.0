// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Data/ItemDataSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
INTO_THE_LIGHT_API UEnum* Z_Construct_UEnum_Into_The_Light_EItemCategory();
INTO_THE_LIGHT_API UEnum* Z_Construct_UEnum_Into_The_Light_EItemType();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemStats();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemTextData();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Enum EItemCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemCategory;
static UEnum* EItemCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Into_The_Light_EItemCategory, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("EItemCategory"));
	}
	return Z_Registration_Info_UEnum_EItemCategory.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UEnum* StaticEnum<EItemCategory>()
{
	return EItemCategory_StaticEnum();
}
struct Z_Construct_UEnum_Into_The_Light_EItemCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Collectibles.DisplayName", "Collectibles" },
		{ "Collectibles.Name", "EItemCategory::Collectibles" },
		{ "Equipment.DisplayName", "Equipment" },
		{ "Equipment.Name", "EItemCategory::Equipment" },
		{ "Items.DisplayName", "Items" },
		{ "Items.Name", "EItemCategory::Items" },
		{ "KeyItem.DisplayName", "KeyItem" },
		{ "KeyItem.Name", "EItemCategory::KeyItem" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemCategory::KeyItem", (int64)EItemCategory::KeyItem },
		{ "EItemCategory::Equipment", (int64)EItemCategory::Equipment },
		{ "EItemCategory::Items", (int64)EItemCategory::Items },
		{ "EItemCategory::Collectibles", (int64)EItemCategory::Collectibles },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Into_The_Light_EItemCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Into_The_Light,
	nullptr,
	"EItemCategory",
	"EItemCategory",
	Z_Construct_UEnum_Into_The_Light_EItemCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EItemCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EItemCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Into_The_Light_EItemCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Into_The_Light_EItemCategory()
{
	if (!Z_Registration_Info_UEnum_EItemCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemCategory.InnerSingleton, Z_Construct_UEnum_Into_The_Light_EItemCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemCategory.InnerSingleton;
}
// End Enum EItemCategory

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Into_The_Light_EItemType, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_Into_The_Light_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Collectibles.Comment", "// Fuses, Keys + more\n" },
		{ "Collectibles.DisplayName", "Collectibles" },
		{ "Collectibles.Name", "EItemType::Collectibles" },
		{ "Collectibles.ToolTip", "Fuses, Keys + more" },
		{ "Consumable.Comment", "// Phone + more\n" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "Consumable.ToolTip", "Phone + more" },
		{ "Item.Comment", "// Battary + more\n" },
		{ "Item.DisplayName", "Item" },
		{ "Item.Name", "EItemType::Item" },
		{ "Item.ToolTip", "Battary + more" },
		{ "LeftHand.DisplayName", "LeftHandEquipment" },
		{ "LeftHand.Name", "EItemType::LeftHand" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
		{ "RightHand.Comment", "// Lighter, flashlight + more\n" },
		{ "RightHand.DisplayName", "RightHandEquipment" },
		{ "RightHand.Name", "EItemType::RightHand" },
		{ "RightHand.ToolTip", "Lighter, flashlight + more" },
		{ "Useables.Comment", "// Health item + more\n" },
		{ "Useables.DisplayName", "Useables" },
		{ "Useables.Name", "EItemType::Useables" },
		{ "Useables.ToolTip", "Health item + more" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::LeftHand", (int64)EItemType::LeftHand },
		{ "EItemType::RightHand", (int64)EItemType::RightHand },
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::Useables", (int64)EItemType::Useables },
		{ "EItemType::Item", (int64)EItemType::Item },
		{ "EItemType::Collectibles", (int64)EItemType::Collectibles },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Into_The_Light_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Into_The_Light,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_Into_The_Light_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Into_The_Light_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Into_The_Light_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Into_The_Light_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin ScriptStruct FItemStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStats;
class UScriptStruct* FItemStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStats, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("ItemStats"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStats.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FItemStats>()
{
	return FItemStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightBattery_MetaData[] = {
		{ "Category", "ItemStats" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPillsRestorationAmount_MetaData[] = {
		{ "Category", "ItemStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//float HealthDamageAmount;\n" },
#endif
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nfloat HealthDamageAmount;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlashlightBattery;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPillsRestorationAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStats_Statics::NewProp_FlashlightBattery = { "FlashlightBattery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStats, FlashlightBattery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightBattery_MetaData), NewProp_FlashlightBattery_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStats_Statics::NewProp_HealthPillsRestorationAmount = { "HealthPillsRestorationAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStats, HealthPillsRestorationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPillsRestorationAmount_MetaData), NewProp_HealthPillsRestorationAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStats_Statics::NewProp_FlashlightBattery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStats_Statics::NewProp_HealthPillsRestorationAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	nullptr,
	&NewStructOps,
	"ItemStats",
	Z_Construct_UScriptStruct_FItemStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStats_Statics::PropPointers),
	sizeof(FItemStats),
	alignof(FItemStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemStats()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStats.InnerSingleton, Z_Construct_UScriptStruct_FItemStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemStats.InnerSingleton;
}
// End ScriptStruct FItemStats

// Begin ScriptStruct FItemTextData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemTextData;
class UScriptStruct* FItemTextData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemTextData, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("ItemTextData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FItemTextData>()
{
	return FItemTextData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemTextData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsageText_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UsageText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemTextData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, InteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionText_MetaData), NewProp_InteractionText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText = { "UsageText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, UsageText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsageText_MetaData), NewProp_UsageText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemTextData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	nullptr,
	&NewStructOps,
	"ItemTextData",
	Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers),
	sizeof(FItemTextData),
	alignof(FItemTextData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemTextData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton, Z_Construct_UScriptStruct_FItemTextData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton;
}
// End ScriptStruct FItemTextData

// Begin ScriptStruct FItemNumericData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemNumericData;
class UScriptStruct* FItemNumericData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemNumericData, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("ItemNumericData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FItemNumericData>()
{
	return FItemNumericData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemNumericData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holding Logic data\n" },
#endif
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holding Logic data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackAble_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static void NewProp_bIsStackAble_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackAble;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemNumericData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemNumericData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemNumericData, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
void Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackAble_SetBit(void* Obj)
{
	((FItemNumericData*)Obj)->bIsStackAble = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackAble = { "bIsStackAble", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemNumericData), &Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackAble_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackAble_MetaData), NewProp_bIsStackAble_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackAble,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemNumericData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	nullptr,
	&NewStructOps,
	"ItemNumericData",
	Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers),
	sizeof(FItemNumericData),
	alignof(FItemNumericData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton, Z_Construct_UScriptStruct_FItemNumericData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton;
}
// End ScriptStruct FItemNumericData

// Begin ScriptStruct FItemAssetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAssetData;
class UScriptStruct* FItemAssetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAssetData, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("ItemAssetData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FItemAssetData>()
{
	return FItemAssetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAssetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAssetData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAssetData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAssetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	nullptr,
	&NewStructOps,
	"ItemAssetData",
	Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers),
	sizeof(FItemAssetData),
	alignof(FItemAssetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton, Z_Construct_UScriptStruct_FItemAssetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton;
}
// End ScriptStruct FItemAssetData

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCatagory_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStats_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTextData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemNumData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemAssetData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Data/ItemDataSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCatagory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCatagory;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTextData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemNumData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemAssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCatagory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCatagory = { "ItemCatagory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemCatagory), Z_Construct_UEnum_Into_The_Light_EItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCatagory_MetaData), NewProp_ItemCatagory_MetaData) }; // 472673794
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_Into_The_Light_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 3296943425
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStats = { "ItemStats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemStats), Z_Construct_UScriptStruct_FItemStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStats_MetaData), NewProp_ItemStats_MetaData) }; // 3382570554
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTextData = { "ItemTextData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemTextData), Z_Construct_UScriptStruct_FItemTextData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTextData_MetaData), NewProp_ItemTextData_MetaData) }; // 3211484182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemNumData = { "ItemNumData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemNumData), Z_Construct_UScriptStruct_FItemNumericData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemNumData_MetaData), NewProp_ItemNumData_MetaData) }; // 3114701021
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemAssetData = { "ItemAssetData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemAssetData), Z_Construct_UScriptStruct_FItemAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemAssetData_MetaData), NewProp_ItemAssetData_MetaData) }; // 4098095419
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCatagory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemCatagory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTextData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemNumData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemAssetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemCategory_StaticEnum, TEXT("EItemCategory"), &Z_Registration_Info_UEnum_EItemCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 472673794U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3296943425U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemStats::StaticStruct, Z_Construct_UScriptStruct_FItemStats_Statics::NewStructOps, TEXT("ItemStats"), &Z_Registration_Info_UScriptStruct_ItemStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStats), 3382570554U) },
		{ FItemTextData::StaticStruct, Z_Construct_UScriptStruct_FItemTextData_Statics::NewStructOps, TEXT("ItemTextData"), &Z_Registration_Info_UScriptStruct_ItemTextData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemTextData), 3211484182U) },
		{ FItemNumericData::StaticStruct, Z_Construct_UScriptStruct_FItemNumericData_Statics::NewStructOps, TEXT("ItemNumericData"), &Z_Registration_Info_UScriptStruct_ItemNumericData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemNumericData), 3114701021U) },
		{ FItemAssetData::StaticStruct, Z_Construct_UScriptStruct_FItemAssetData_Statics::NewStructOps, TEXT("ItemAssetData"), &Z_Registration_Info_UScriptStruct_ItemAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAssetData), 4098095419U) },
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 136351539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_3528831940(TEXT("/Script/Into_The_Light"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
