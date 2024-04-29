// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/Inventory/InventoryTooltip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryTooltip() {}

// Begin Cross Module References
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryItemSlot_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryTooltip();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryTooltip_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class UInventoryTooltip
void UInventoryTooltip::StaticRegisterNativesUInventoryTooltip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryTooltip);
UClass* Z_Construct_UClass_UInventoryTooltip_NoRegister()
{
	return UInventoryTooltip::StaticClass();
}
struct Z_Construct_UClass_UInventoryTooltip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/Inventory/InventoryTooltip.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotBeingHovered_MetaData[] = {
		{ "Category", "InventoryTooltip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightBatteryText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightBatteryProcentText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text Only\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text Only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightBattery_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text Only\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text Only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPillsRestorationAmountText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n//UTextBlock* DamageAmount; // Maybe for weapon\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\nUTextBlock* DamageAmount;  Maybe for weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPillsRestorationAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSizeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text Only\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text Only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackWeightText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackWeight_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryTooltip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySlotBeingHovered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightBatteryText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightBatteryProcentText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightBattery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthPillsRestorationAmountText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthPillsRestorationAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UsageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxStackSizeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StackWeightText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StackWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryTooltip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_InventorySlotBeingHovered = { "InventorySlotBeingHovered", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, InventorySlotBeingHovered), Z_Construct_UClass_UInventoryItemSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotBeingHovered_MetaData), NewProp_InventorySlotBeingHovered_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, ItemType), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_FlashlightBatteryText = { "FlashlightBatteryText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, FlashlightBatteryText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightBatteryText_MetaData), NewProp_FlashlightBatteryText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_FlashlightBatteryProcentText = { "FlashlightBatteryProcentText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, FlashlightBatteryProcentText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightBatteryProcentText_MetaData), NewProp_FlashlightBatteryProcentText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_FlashlightBattery = { "FlashlightBattery", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, FlashlightBattery), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightBattery_MetaData), NewProp_FlashlightBattery_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_HealthPillsRestorationAmountText = { "HealthPillsRestorationAmountText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, HealthPillsRestorationAmountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPillsRestorationAmountText_MetaData), NewProp_HealthPillsRestorationAmountText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_HealthPillsRestorationAmount = { "HealthPillsRestorationAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, HealthPillsRestorationAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPillsRestorationAmount_MetaData), NewProp_HealthPillsRestorationAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_UsageText = { "UsageText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, UsageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsageText_MetaData), NewProp_UsageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, ItemDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_MaxStackSizeText = { "MaxStackSizeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, MaxStackSizeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSizeText_MetaData), NewProp_MaxStackSizeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, MaxStackSize), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_StackWeightText = { "StackWeightText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, StackWeightText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackWeightText_MetaData), NewProp_StackWeightText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_StackWeight = { "StackWeight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryTooltip, StackWeight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackWeight_MetaData), NewProp_StackWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryTooltip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_InventorySlotBeingHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_FlashlightBatteryText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_FlashlightBatteryProcentText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_FlashlightBattery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_HealthPillsRestorationAmountText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_HealthPillsRestorationAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_UsageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_MaxStackSizeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_StackWeightText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTooltip_Statics::NewProp_StackWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryTooltip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryTooltip_Statics::ClassParams = {
	&UInventoryTooltip::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryTooltip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltip_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTooltip_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryTooltip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryTooltip()
{
	if (!Z_Registration_Info_UClass_UInventoryTooltip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryTooltip.OuterSingleton, Z_Construct_UClass_UInventoryTooltip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryTooltip.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<UInventoryTooltip>()
{
	return UInventoryTooltip::StaticClass();
}
UInventoryTooltip::UInventoryTooltip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryTooltip);
UInventoryTooltip::~UInventoryTooltip() {}
// End Class UInventoryTooltip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryTooltip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryTooltip, UInventoryTooltip::StaticClass, TEXT("UInventoryTooltip"), &Z_Registration_Info_UClass_UInventoryTooltip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryTooltip), 3927570258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryTooltip_h_159654430(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryTooltip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryTooltip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
