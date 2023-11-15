// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/Inventory/ItemDragDropOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDragDropOperation() {}
// Cross Module References
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemDragDropOperation();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemDragDropOperation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	void UItemDragDropOperation::StaticRegisterNativesUItemDragDropOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDragDropOperation);
	UClass* Z_Construct_UClass_UItemDragDropOperation_NoRegister()
	{
		return UItemDragDropOperation::StaticClass();
	}
	struct Z_Construct_UClass_UItemDragDropOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDragDropOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDragDropOperation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDragDropOperation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/Inventory/ItemDragDropOperation.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/ItemDragDropOperation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDragDropOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDragDropOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDragDropOperation_Statics::ClassParams = {
		&UItemDragDropOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDragDropOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDragDropOperation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UItemDragDropOperation()
	{
		if (!Z_Registration_Info_UClass_UItemDragDropOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDragDropOperation.OuterSingleton, Z_Construct_UClass_UItemDragDropOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemDragDropOperation.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<UItemDragDropOperation>()
	{
		return UItemDragDropOperation::StaticClass();
	}
	UItemDragDropOperation::UItemDragDropOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDragDropOperation);
	UItemDragDropOperation::~UItemDragDropOperation() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_ItemDragDropOperation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_ItemDragDropOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemDragDropOperation, UItemDragDropOperation::StaticClass, TEXT("UItemDragDropOperation"), &Z_Registration_Info_UClass_UItemDragDropOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDragDropOperation), 111753911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_ItemDragDropOperation_h_1536866666(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_ItemDragDropOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Inventory_ItemDragDropOperation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
