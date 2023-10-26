// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/World/InterfaceActorT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceActorT() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AInterfaceActorT();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AInterfaceActorT_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInterfaceActorT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterfaceActorT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/InterfaceActorT.h" },
		{ "ModuleRelativePath", "Public/World/InterfaceActorT.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Test Actor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/InterfaceActorT.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInterfaceActorT, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInterfaceActorT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterfaceActorT_Statics::NewProp_Mesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInterfaceActorT_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInterfaceActorT, IInteractionInterface), false },  // 1996588132
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInterfaceActorT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInterfaceActorT>::IsAbstract,
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInterfaceActorT_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInterfaceActorT, AInterfaceActorT::StaticClass, TEXT("AInterfaceActorT"), &Z_Registration_Info_UClass_AInterfaceActorT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInterfaceActorT), 3079564400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_1165967526(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_InterfaceActorT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
