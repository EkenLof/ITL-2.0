// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/Inventory/InventoryPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryPanel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryItemSlot_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryPanel();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class UInventoryPanel
void UInventoryPanel::StaticRegisterNativesUInventoryPanel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryPanel);
UClass* Z_Construct_UClass_UInventoryPanel_NoRegister()
{
	return UInventoryPanel::StaticClass();
}
struct Z_Construct_UClass_UInventoryPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/Inventory/InventoryPanel.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryPanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryPanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryPanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapacityInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryPanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryPanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryReferance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryPanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotClass_MetaData[] = {
		{ "Category", "InventoryPanel" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryPanel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapacityInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryReferance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventorySlotClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryPanel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryPanel_Statics::NewProp_InventoryPanel = { "InventoryPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryPanel, InventoryPanel), Z_Construct_UClass_UWrapBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryPanel_MetaData), NewProp_InventoryPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryPanel_Statics::NewProp_WeightInfo = { "WeightInfo", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryPanel, WeightInfo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightInfo_MetaData), NewProp_WeightInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryPanel_Statics::NewProp_CapacityInfo = { "CapacityInfo", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryPanel, CapacityInfo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapacityInfo_MetaData), NewProp_CapacityInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryPanel_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryPanel, PlayerCharacter), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryPanel_Statics::NewProp_InventoryReferance = { "InventoryReferance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryPanel, InventoryReferance), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryReferance_MetaData), NewProp_InventoryReferance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryPanel_Statics::NewProp_InventorySlotClass = { "InventorySlotClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryPanel, InventorySlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryItemSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotClass_MetaData), NewProp_InventorySlotClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryPanel_Statics::NewProp_InventoryPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryPanel_Statics::NewProp_WeightInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryPanel_Statics::NewProp_CapacityInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryPanel_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryPanel_Statics::NewProp_InventoryReferance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryPanel_Statics::NewProp_InventorySlotClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryPanel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryPanel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryPanel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryPanel_Statics::ClassParams = {
	&UInventoryPanel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryPanel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryPanel_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryPanel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryPanel()
{
	if (!Z_Registration_Info_UClass_UInventoryPanel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryPanel.OuterSingleton, Z_Construct_UClass_UInventoryPanel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryPanel.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<UInventoryPanel>()
{
	return UInventoryPanel::StaticClass();
}
UInventoryPanel::UInventoryPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryPanel);
UInventoryPanel::~UInventoryPanel() {}
// End Class UInventoryPanel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryPanel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryPanel, UInventoryPanel::StaticClass, TEXT("UInventoryPanel"), &Z_Registration_Info_UClass_UInventoryPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryPanel), 439533809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryPanel_h_690693455(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryPanel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
