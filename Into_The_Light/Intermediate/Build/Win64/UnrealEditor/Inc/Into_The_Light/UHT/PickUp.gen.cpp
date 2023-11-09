// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/World/PickUp.h"
#include "Into_The_Light/Public/Interfaces/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_APickUp();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_APickUp_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	void APickUp::StaticRegisterNativesAPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUp);
	UClass* Z_Construct_UClass_APickUp_NoRegister()
	{
		return APickUp::StaticClass();
	}
	struct Z_Construct_UClass_APickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredItemID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DesiredItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemReferance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemReferance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceInteractableData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceInteractableData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "World/PickUp.h" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Pickup | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_PickupMesh_MetaData), Z_Construct_UClass_APickUp_Statics::NewProp_PickupMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "Pickup | Item Initialization" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_ItemDataTable_MetaData), Z_Construct_UClass_APickUp_Statics::NewProp_ItemDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_DesiredItemID_MetaData[] = {
		{ "Category", "Pickup | Item Initialization" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_DesiredItemID = { "DesiredItemID", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, DesiredItemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_DesiredItemID_MetaData), Z_Construct_UClass_APickUp_Statics::NewProp_DesiredItemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_ItemReferance_MetaData[] = {
		{ "Category", "Pickup | Item Referance" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_ItemReferance = { "ItemReferance", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, ItemReferance), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_ItemReferance_MetaData), Z_Construct_UClass_APickUp_Statics::NewProp_ItemReferance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_ItemQuantity_MetaData[] = {
		{ "Category", "Pickup | Item Initialization" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, ItemQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_ItemQuantity_MetaData), Z_Construct_UClass_APickUp_Statics::NewProp_ItemQuantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_InstanceInteractableData_MetaData[] = {
		{ "Category", "Pickup | Interaction" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_InstanceInteractableData = { "InstanceInteractableData", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, InstanceInteractableData), Z_Construct_UScriptStruct_FInteractableData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_InstanceInteractableData_MetaData), Z_Construct_UClass_APickUp_Statics::NewProp_InstanceInteractableData_MetaData) }; // 3490317016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PickupMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_ItemDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_DesiredItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_ItemReferance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_ItemQuantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_InstanceInteractableData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickUp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(APickUp, IInteractionInterface), false },  // 1996588132
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUp_Statics::ClassParams = {
		&APickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickUp_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickUp()
	{
		if (!Z_Registration_Info_UClass_APickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUp.OuterSingleton, Z_Construct_UClass_APickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickUp.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<APickUp>()
	{
		return APickUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUp);
	APickUp::~APickUp() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickUp, APickUp::StaticClass, TEXT("APickUp"), &Z_Registration_Info_UClass_APickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUp), 1284673250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_940037579(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
