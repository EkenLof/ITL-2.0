// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Items/ItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	void UItemBase::StaticRegisterNativesUItemBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemBase);
	UClass* Z_Construct_UClass_UItemBase_NoRegister()
	{
		return UItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/ItemBase.h" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemBase_Statics::ClassParams = {
		&UItemBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UItemBase()
	{
		if (!Z_Registration_Info_UClass_UItemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemBase.OuterSingleton, Z_Construct_UClass_UItemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemBase.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<UItemBase>()
	{
		return UItemBase::StaticClass();
	}
	UItemBase::UItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBase);
	UItemBase::~UItemBase() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemBase, UItemBase::StaticClass, TEXT("UItemBase"), &Z_Registration_Info_UClass_UItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemBase), 1356679256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_3743449527(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
