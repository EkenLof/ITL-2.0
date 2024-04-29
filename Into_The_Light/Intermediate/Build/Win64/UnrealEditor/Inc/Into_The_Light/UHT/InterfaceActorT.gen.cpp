// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/World/InterfaceActorT.h"
#include "Into_The_Light/Public/Interfaces/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceActorT() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AInterfaceActorT();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AInterfaceActorT_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class AInterfaceActorT
void AInterfaceActorT::StaticRegisterNativesAInterfaceActorT()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInterfaceActorT);
UClass* Z_Construct_UClass_AInterfaceActorT_NoRegister()
{
	return AInterfaceActorT::StaticClass();
}
struct Z_Construct_UClass_AInterfaceActorT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "World/InterfaceActorT.h" },
		{ "ModuleRelativePath", "Public/World/InterfaceActorT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Test Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/InterfaceActorT.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceInteractiableData_MetaData[] = {
		{ "Category", "Test Actor" },
		{ "ModuleRelativePath", "Public/World/InterfaceActorT.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceInteractiableData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInterfaceActorT>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInterfaceActorT, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_InstanceInteractiableData = { "InstanceInteractiableData", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInterfaceActorT, InstanceInteractiableData), Z_Construct_UScriptStruct_FInteractableData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceInteractiableData_MetaData), NewProp_InstanceInteractiableData_MetaData) }; // 3223735885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInterfaceActorT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_InstanceInteractiableData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInterfaceActorT_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInterfaceActorT_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInterfaceActorT, IInteractionInterface), false },  // 3026575339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInterfaceActorT_Statics::ClassParams = {
	&AInterfaceActorT::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInterfaceActorT_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::Class_MetaDataParams), Z_Construct_UClass_AInterfaceActorT_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInterfaceActorT()
{
	if (!Z_Registration_Info_UClass_AInterfaceActorT.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInterfaceActorT.OuterSingleton, Z_Construct_UClass_AInterfaceActorT_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInterfaceActorT.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<AInterfaceActorT>()
{
	return AInterfaceActorT::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInterfaceActorT);
AInterfaceActorT::~AInterfaceActorT() {}
// End Class AInterfaceActorT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInterfaceActorT, AInterfaceActorT::StaticClass, TEXT("AInterfaceActorT"), &Z_Registration_Info_UClass_AInterfaceActorT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInterfaceActorT), 57436485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_3995535833(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
