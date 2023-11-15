// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/Inventory/InventoryItemSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemSlot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UDragItemVisual_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryItemSlot();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryItemSlot_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryTooltip_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	void UInventoryItemSlot::StaticRegisterNativesUInventoryItemSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemSlot);
	UClass* Z_Construct_UClass_UInventoryItemSlot_NoRegister()
	{
		return UInventoryItemSlot::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragItemVisualClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DragItemVisualClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ToolTipClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemQuantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/Inventory/InventoryItemSlot.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_DragItemVisualClass_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_DragItemVisualClass = { "DragItemVisualClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, DragItemVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDragItemVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_DragItemVisualClass_MetaData), Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_DragItemVisualClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ToolTipClass_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ToolTipClass = { "ToolTipClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ToolTipClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryTooltip_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ToolTipClass_MetaData), Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ToolTipClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemReference_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemReference = { "ItemReference", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemReference), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemReference_MetaData), Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemBorder = { "ItemBorder", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemBorder_MetaData), Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemBorder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemIcon_MetaData), Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemIcon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemQuantity_MetaData), Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemQuantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_DragItemVisualClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ToolTipClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemQuantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemSlot_Statics::ClassParams = {
		&UInventoryItemSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryItemSlot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryItemSlot()
	{
		if (!Z_Registration_Info_UClass_UInventoryItemSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemSlot.OuterSingleton, Z_Construct_UClass_UInventoryItemSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryItemSlot.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<UInventoryItemSlot>()
	{
		return UInventoryItemSlot::StaticClass();
	}
	UInventoryItemSlot::UInventoryItemSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemSlot);
	UInventoryItemSlot::~UInventoryItemSlot() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemSlot, UInventoryItemSlot::StaticClass, TEXT("UInventoryItemSlot"), &Z_Registration_Info_UClass_UInventoryItemSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemSlot), 4281866631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryItemSlot_h_2636590331(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
