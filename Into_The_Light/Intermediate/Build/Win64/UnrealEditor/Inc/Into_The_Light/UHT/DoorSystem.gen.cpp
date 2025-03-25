// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Doors_Objects/DoorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ADoorSystem();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ADoorSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class ADoorSystem
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Doors_Objects/DoorSystem.h" },
		{ "ModuleRelativePath", "Doors_Objects/DoorSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADoorSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorSystem_Statics::DependentSingletons) < 16);
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
// End Class ADoorSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoorSystem, ADoorSystem::StaticClass, TEXT("ADoorSystem"), &Z_Registration_Info_UClass_ADoorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorSystem), 773719880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_1379349790(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Doors_Objects_DoorSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
