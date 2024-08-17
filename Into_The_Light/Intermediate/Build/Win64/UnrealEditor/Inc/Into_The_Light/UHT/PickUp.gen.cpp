// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/World/PickUp.h"
#include "Into_The_Light/Public/Interfaces/InteractionInterface.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_APickUp();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_APickUp_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class APickUp
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "World/PickUp.h" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Pickup | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemReferance_MetaData[] = {
		{ "Category", "Pickup | Item Referance" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceInteractableData_MetaData[] = {
		{ "Category", "Pickup | Interaction" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[] = {
		{ "Category", "Pickup | Item Initialization" },
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRowHandle_MetaData[] = {
		{ "Category", "Pickup | Item Initialization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW VERSION\n" },
#endif
		{ "ModuleRelativePath", "Public/World/PickUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW VERSION" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemReferance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceInteractableData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemRowHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMesh_MetaData), NewProp_PickupMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_ItemReferance = { "ItemReferance", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, ItemReferance), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemReferance_MetaData), NewProp_ItemReferance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_InstanceInteractableData = { "InstanceInteractableData", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, InstanceInteractableData), Z_Construct_UScriptStruct_FInteractableData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceInteractableData_MetaData), NewProp_InstanceInteractableData_MetaData) }; // 3223735885
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, ItemQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuantity_MetaData), NewProp_ItemQuantity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_ItemRowHandle = { "ItemRowHandle", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUp, ItemRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRowHandle_MetaData), NewProp_ItemRowHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_PickupMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_ItemReferance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_InstanceInteractableData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_ItemQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_ItemRowHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickUp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(APickUp, IInteractionInterface), false },  // 3026575339
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
// End Class APickUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickUp, APickUp::StaticClass, TEXT("APickUp"), &Z_Registration_Info_UClass_APickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUp), 1926486079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_2064933476(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_World_PickUp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
