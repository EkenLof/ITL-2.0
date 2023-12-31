// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Player/FirstPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionData;
class UScriptStruct* FInteractionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionData, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("InteractionData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FInteractionData>()
{
	return FInteractionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastInteractionCheckTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable_MetaData), Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, LastInteractionCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime_MetaData), Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
		nullptr,
		&NewStructOps,
		"InteractionData",
		Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers),
		sizeof(FInteractionData),
		alignof(FInteractionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionData()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton, Z_Construct_UScriptStruct_FInteractionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton;
	}
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonCharacter);
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMovementsValues_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMovementsValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkForwardAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkForwardAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkBackwardAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkBackwardAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TargetInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Player + Movment ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Player + Movment ---" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerMovementsValues_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerMovementsValues = { "PlayerMovementsValues", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, PlayerMovementsValues), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerMovementsValues_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerMovementsValues_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FlashlightMesh_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FlashlightMesh = { "FlashlightMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, FlashlightMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FlashlightMesh_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FlashlightMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkForwardAnim_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkForwardAnim = { "WalkForwardAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, WalkForwardAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkForwardAnim_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkForwardAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkBackwardAnim_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkBackwardAnim = { "WalkBackwardAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, WalkBackwardAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkBackwardAnim_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkBackwardAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_TargetInteractable_MetaData[] = {
		{ "Category", "Character | Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---- Inventory - Item - Interaction **Systems** ----\n// --- VARIBLES ---\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Inventory - Item - Interaction **Systems** ----\n --- VARIBLES ---" },
#endif
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_TargetInteractable = { "TargetInteractable", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, TargetInteractable), Z_Construct_UClass_UInteractionInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_TargetInteractable_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_TargetInteractable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Character | Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, PlayerInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerInventory_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerInventory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerMovementsValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FlashlightMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkForwardAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkBackwardAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_TargetInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
	AFirstPersonCharacter::~AFirstPersonCharacter() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ScriptStructInfo[] = {
		{ FInteractionData::StaticStruct, Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps, TEXT("InteractionData"), &Z_Registration_Info_UScriptStruct_InteractionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionData), 746018718U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharacter, AFirstPersonCharacter::StaticClass, TEXT("AFirstPersonCharacter"), &Z_Registration_Info_UClass_AFirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacter), 2508524372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_2592512456(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
