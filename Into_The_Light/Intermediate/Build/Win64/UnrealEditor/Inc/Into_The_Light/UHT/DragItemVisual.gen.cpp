// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/Inventory/DragItemVisual.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragItemVisual() {}
// Cross Module References
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UDragItemVisual();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UDragItemVisual_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	void UDragItemVisual::StaticRegisterNativesUDragItemVisual()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragItemVisual);
	UClass* Z_Construct_UClass_UDragItemVisual_NoRegister()
	{
		return UDragItemVisual::StaticClass();
	}
	struct Z_Construct_UClass_UDragItemVisual_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_UDragItemVisual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisual_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/Inventory/DragItemVisual.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemBorder = { "ItemBorder", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragItemVisual, ItemBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemBorder_MetaData), Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemBorder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragItemVisual, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemIcon_MetaData), Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemIcon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragItemVisual, ItemQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemQuantity_MetaData), Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemQuantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragItemVisual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemQuantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragItemVisual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragItemVisual>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragItemVisual_Statics::ClassParams = {
		&UDragItemVisual::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragItemVisual_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UDragItemVisual_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDragItemVisual()
	{
		if (!Z_Registration_Info_UClass_UDragItemVisual.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragItemVisual.OuterSingleton, Z_Construct_UClass_UDragItemVisual_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragItemVisual.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<UDragItemVisual>()
	{
		return UDragItemVisual::StaticClass();
	}
	UDragItemVisual::UDragItemVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragItemVisual);
	UDragItemVisual::~UDragItemVisual() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_DragItemVisual_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_DragItemVisual_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragItemVisual, UDragItemVisual::StaticClass, TEXT("UDragItemVisual"), &Z_Registration_Info_UClass_UDragItemVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragItemVisual), 2988604656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_DragItemVisual_h_3710351713(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_DragItemVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_DragItemVisual_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
