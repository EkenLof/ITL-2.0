// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Doors_Objects/DoorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ADoorSystem();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ADoorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	void ADoorSystem::StaticRegisterNativesADoorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorSystem);
	UClass* Z_Construct_UClass_ADoorSystem_NoRegister()
	{
		return ADoorSystem::StaticClass();
	}
	struct Z_Construct_UClass_ADoorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Doors_Objects/DoorSystem.h" },
		{ "ModuleRelativePath", "Doors_Objects/DoorSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorSystem_Statics::ClassParams = {
		&ADoorSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorSystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADoorSystem()
	{
		if (!Z_Registration_Info_UClass_ADoorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorSystem.OuterSingleton, Z_Construct_UClass_ADoorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorSystem.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<ADoorSystem>()
	{
		return ADoorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorSystem);
	ADoorSystem::~ADoorSystem() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorSystem, ADoorSystem::StaticClass, TEXT("ADoorSystem"), &Z_Registration_Info_UClass_ADoorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorSystem), 1340647557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_388320172(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
