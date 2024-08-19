// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Player/FirstPersonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AElevator_System_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UObjectivePanel_NoRegister();
INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin ScriptStruct FInteractionData
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastInteractionCheckTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractable_MetaData), NewProp_CurrentInteractable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, LastInteractionCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInteractionCheckTime_MetaData), NewProp_LastInteractionCheckTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionData_Statics::StructParams = {
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
UScriptStruct* Z_Construct_UScriptStruct_FInteractionData()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton, Z_Construct_UScriptStruct_FInteractionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton;
}
// End ScriptStruct FInteractionData

// Begin Class AFirstPersonCharacter Function LoadSublevel
struct Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics
{
	struct FirstPersonCharacter_eventLoadSublevel_Parms
	{
		FName LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | SubLevels" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacter_eventLoadSublevel_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "LoadSublevel", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::FirstPersonCharacter_eventLoadSublevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::FirstPersonCharacter_eventLoadSublevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacter::execLoadSublevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSublevel(Z_Param_LevelName);
	P_NATIVE_END;
}
// End Class AFirstPersonCharacter Function LoadSublevel

// Begin Class AFirstPersonCharacter Function OnSublevelLoaded
struct Z_Construct_UFunction_AFirstPersonCharacter_OnSublevelLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_OnSublevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "OnSublevelLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnSublevelLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_OnSublevelLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFirstPersonCharacter_OnSublevelLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_OnSublevelLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacter::execOnSublevelLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSublevelLoaded();
	P_NATIVE_END;
}
// End Class AFirstPersonCharacter Function OnSublevelLoaded

// Begin Class AFirstPersonCharacter Function UnloadSublevel
struct Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics
{
	struct FirstPersonCharacter_eventUnloadSublevel_Parms
	{
		FName LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | SubLevels" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacter_eventUnloadSublevel_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "UnloadSublevel", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::FirstPersonCharacter_eventUnloadSublevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::FirstPersonCharacter_eventUnloadSublevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFirstPersonCharacter::execUnloadSublevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadSublevel(Z_Param_LevelName);
	P_NATIVE_END;
}
// End Class AFirstPersonCharacter Function UnloadSublevel

// Begin Class AFirstPersonCharacter
void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
{
	UClass* Class = AFirstPersonCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadSublevel", &AFirstPersonCharacter::execLoadSublevel },
		{ "OnSublevelLoaded", &AFirstPersonCharacter::execOnSublevelLoaded },
		{ "UnloadSublevel", &AFirstPersonCharacter::execUnloadSublevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonCharacter);
UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
{
	return AFirstPersonCharacter::StaticClass();
}
struct Z_Construct_UClass_AFirstPersonCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFuse10a_MetaData[] = {
		{ "Category", "Inventory | Items" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsElectricKey_MetaData[] = {
		{ "Category", "Inventory | Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bIsFuse10a Selected\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bIsFuse10a Selected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOfficeKey_MetaData[] = {
		{ "Category", "Inventory | Items" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bIsElectricKey Selected\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bIsElectricKey Selected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectiveFlashlight_MetaData[] = {
		{ "Category", "Event | Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bIsOfficeKey Selected\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bIsOfficeKey Selected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectiveFuseCollected_MetaData[] = {
		{ "Category", "Event | Value" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectiveFindElectricKey_MetaData[] = {
		{ "Category", "Event | Value" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectiveElectricKeyCollected_MetaData[] = {
		{ "Category", "Event | Value" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectiveOfficeKeyCollected_MetaData[] = {
		{ "Category", "Event | Value" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectiveKeycardCollected_MetaData[] = {
		{ "Category", "Event | Value" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValueFusePickedUp_MetaData[] = {
		{ "Category", "Event | Value" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorSystem_MetaData[] = {
		{ "Category", "Event | Assign" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightMesh_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandMesh_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemReference_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "FirstPersonCharacter | Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Player + Movment ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Player + Movment ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMovementsValues_MetaData[] = {
		{ "Category", "FirstPersonCharacter | Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkForwardAnim_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkBackwardAnim_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFlashlightEquiped_MetaData[] = {
		{ "Category", "FirstPersonCharacter | ItemLogic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Item Logic\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item Logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFlashlightInInventory_MetaData[] = {
		{ "Category", "FirstPersonCharacter | ItemLogic" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isElectricKeyInInventory_MetaData[] = {
		{ "Category", "FirstPersonCharacter | ItemLogic" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUiActive_MetaData[] = {
		{ "Category", "FirstPersonCharacter | UiLogic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////////////--- UI System ---////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- UI System ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiTexture_MetaData[] = {
		{ "Category", "FirstPersonCharacter | UiLogic" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UiMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInteractable_MetaData[] = {
		{ "Category", "Character | Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---- Inventory - Item - Interaction **Systems** ----\n// --- VARIBLES ---\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Inventory - Item - Interaction **Systems** ----\n --- VARIBLES ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Character | Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckFrequency_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCheckDistance_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNeedFlashlight_MetaData[] = {
		{ "Category", "FirstPersonCharacter | Interactible | Logic" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNeedElectricKey_MetaData[] = {
		{ "Category", "FirstPersonCharacter | Interactible | Logic" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitReceptionPhoneTrigActor_MetaData[] = {
		{ "Category", "Event | Assign | Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Triggers --- //\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Triggers ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitFuseBoxRoomActor_MetaData[] = {
		{ "Category", "Event | Assign | Trigger" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoingToMissingColeTrigActor_MetaData[] = {
		{ "Category", "Event | Assign | Trigger" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fuse10A_InFuseBoxTransActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Actors --- //\n" },
#endif
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Actors ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fuse10A_ToFuseBoxActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionPhoneKeyActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteFaceF2Actor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveClass_MetaData[] = {
		{ "Category", "Event | Assign | UI" },
		{ "ModuleRelativePath", "Player/FirstPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFuse10a_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFuse10a;
	static void NewProp_bIsElectricKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsElectricKey;
	static void NewProp_bIsOfficeKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOfficeKey;
	static void NewProp_bIsObjectiveFlashlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectiveFlashlight;
	static void NewProp_bIsObjectiveFuseCollected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectiveFuseCollected;
	static void NewProp_bIsObjectiveFindElectricKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectiveFindElectricKey;
	static void NewProp_bIsObjectiveElectricKeyCollected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectiveElectricKeyCollected;
	static void NewProp_bIsObjectiveOfficeKeyCollected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectiveOfficeKeyCollected;
	static void NewProp_bIsObjectiveKeycardCollected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectiveKeycardCollected;
	static void NewProp_bIsValueFusePickedUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValueFusePickedUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElevatorSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMovementsValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkForwardAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkBackwardAnim;
	static void NewProp_isFlashlightEquiped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFlashlightEquiped;
	static void NewProp_isFlashlightInInventory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFlashlightInInventory;
	static void NewProp_isElectricKeyInInventory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isElectricKeyInInventory;
	static void NewProp_bIsUiActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUiActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UiTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UiMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UiMeshComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TargetInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCheckFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCheckDistance;
	static void NewProp_bIsNeedFlashlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNeedFlashlight;
	static void NewProp_bIsNeedElectricKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNeedElectricKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitReceptionPhoneTrigActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitFuseBoxRoomActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoingToMissingColeTrigActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fuse10A_InFuseBoxTransActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fuse10A_ToFuseBoxActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionPhoneKeyActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteFaceF2Actor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectiveClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacter_LoadSublevel, "LoadSublevel" }, // 2075827994
		{ &Z_Construct_UFunction_AFirstPersonCharacter_OnSublevelLoaded, "OnSublevelLoaded" }, // 1179316234
		{ &Z_Construct_UFunction_AFirstPersonCharacter_UnloadSublevel, "UnloadSublevel" }, // 320830652
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsFuse10a_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsFuse10a = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsFuse10a = { "bIsFuse10a", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsFuse10a_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFuse10a_MetaData), NewProp_bIsFuse10a_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsElectricKey_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsElectricKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsElectricKey = { "bIsElectricKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsElectricKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsElectricKey_MetaData), NewProp_bIsElectricKey_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsOfficeKey_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsOfficeKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsOfficeKey = { "bIsOfficeKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsOfficeKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOfficeKey_MetaData), NewProp_bIsOfficeKey_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFlashlight_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsObjectiveFlashlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFlashlight = { "bIsObjectiveFlashlight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFlashlight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectiveFlashlight_MetaData), NewProp_bIsObjectiveFlashlight_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFuseCollected_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsObjectiveFuseCollected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFuseCollected = { "bIsObjectiveFuseCollected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFuseCollected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectiveFuseCollected_MetaData), NewProp_bIsObjectiveFuseCollected_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFindElectricKey_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsObjectiveFindElectricKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFindElectricKey = { "bIsObjectiveFindElectricKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFindElectricKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectiveFindElectricKey_MetaData), NewProp_bIsObjectiveFindElectricKey_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveElectricKeyCollected_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsObjectiveElectricKeyCollected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveElectricKeyCollected = { "bIsObjectiveElectricKeyCollected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveElectricKeyCollected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectiveElectricKeyCollected_MetaData), NewProp_bIsObjectiveElectricKeyCollected_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveOfficeKeyCollected_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsObjectiveOfficeKeyCollected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveOfficeKeyCollected = { "bIsObjectiveOfficeKeyCollected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveOfficeKeyCollected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectiveOfficeKeyCollected_MetaData), NewProp_bIsObjectiveOfficeKeyCollected_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveKeycardCollected_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsObjectiveKeycardCollected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveKeycardCollected = { "bIsObjectiveKeycardCollected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveKeycardCollected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsObjectiveKeycardCollected_MetaData), NewProp_bIsObjectiveKeycardCollected_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsValueFusePickedUp_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsValueFusePickedUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsValueFusePickedUp = { "bIsValueFusePickedUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsValueFusePickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValueFusePickedUp_MetaData), NewProp_bIsValueFusePickedUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ElevatorSystem = { "ElevatorSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, ElevatorSystem), Z_Construct_UClass_AElevator_System_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElevatorSystem_MetaData), NewProp_ElevatorSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FlashlightMesh = { "FlashlightMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, FlashlightMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlashlightMesh_MetaData), NewProp_FlashlightMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_RightHandMesh = { "RightHandMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, RightHandMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandMesh_MetaData), NewProp_RightHandMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ItemReference = { "ItemReference", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, ItemReference), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemReference_MetaData), NewProp_ItemReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerMovementsValues = { "PlayerMovementsValues", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, PlayerMovementsValues), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMovementsValues_MetaData), NewProp_PlayerMovementsValues_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkForwardAnim = { "WalkForwardAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, WalkForwardAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkForwardAnim_MetaData), NewProp_WalkForwardAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkBackwardAnim = { "WalkBackwardAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, WalkBackwardAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkBackwardAnim_MetaData), NewProp_WalkBackwardAnim_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightEquiped_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->isFlashlightEquiped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightEquiped = { "isFlashlightEquiped", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightEquiped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFlashlightEquiped_MetaData), NewProp_isFlashlightEquiped_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightInInventory_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->isFlashlightInInventory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightInInventory = { "isFlashlightInInventory", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightInInventory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFlashlightInInventory_MetaData), NewProp_isFlashlightInInventory_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isElectricKeyInInventory_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->isElectricKeyInInventory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isElectricKeyInInventory = { "isElectricKeyInInventory", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isElectricKeyInInventory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isElectricKeyInInventory_MetaData), NewProp_isElectricKeyInInventory_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsUiActive_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsUiActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsUiActive = { "bIsUiActive", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsUiActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUiActive_MetaData), NewProp_bIsUiActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_UiTexture = { "UiTexture", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, UiTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiTexture_MetaData), NewProp_UiTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_UiMaterial = { "UiMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, UiMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiMaterial_MetaData), NewProp_UiMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_UiMeshComponent = { "UiMeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, UiMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UiMeshComponent_MetaData), NewProp_UiMeshComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_TargetInteractable = { "TargetInteractable", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, TargetInteractable), Z_Construct_UClass_UInteractionInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInteractable_MetaData), NewProp_TargetInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, PlayerInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInventory_MetaData), NewProp_PlayerInventory_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_InteractionCheckFrequency = { "InteractionCheckFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, InteractionCheckFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckFrequency_MetaData), NewProp_InteractionCheckFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_InteractionCheckDistance = { "InteractionCheckDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, InteractionCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionCheckDistance_MetaData), NewProp_InteractionCheckDistance_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedFlashlight_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsNeedFlashlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedFlashlight = { "bIsNeedFlashlight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedFlashlight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNeedFlashlight_MetaData), NewProp_bIsNeedFlashlight_MetaData) };
void Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedElectricKey_SetBit(void* Obj)
{
	((AFirstPersonCharacter*)Obj)->bIsNeedElectricKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedElectricKey = { "bIsNeedElectricKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFirstPersonCharacter), &Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedElectricKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNeedElectricKey_MetaData), NewProp_bIsNeedElectricKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ExitReceptionPhoneTrigActor = { "ExitReceptionPhoneTrigActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, ExitReceptionPhoneTrigActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitReceptionPhoneTrigActor_MetaData), NewProp_ExitReceptionPhoneTrigActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ExitFuseBoxRoomActor = { "ExitFuseBoxRoomActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, ExitFuseBoxRoomActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitFuseBoxRoomActor_MetaData), NewProp_ExitFuseBoxRoomActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GoingToMissingColeTrigActor = { "GoingToMissingColeTrigActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, GoingToMissingColeTrigActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoingToMissingColeTrigActor_MetaData), NewProp_GoingToMissingColeTrigActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Fuse10A_InFuseBoxTransActor = { "Fuse10A_InFuseBoxTransActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, Fuse10A_InFuseBoxTransActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fuse10A_InFuseBoxTransActor_MetaData), NewProp_Fuse10A_InFuseBoxTransActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Fuse10A_ToFuseBoxActor = { "Fuse10A_ToFuseBoxActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, Fuse10A_ToFuseBoxActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fuse10A_ToFuseBoxActor_MetaData), NewProp_Fuse10A_ToFuseBoxActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ReceptionPhoneKeyActor = { "ReceptionPhoneKeyActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, ReceptionPhoneKeyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceptionPhoneKeyActor_MetaData), NewProp_ReceptionPhoneKeyActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WhiteFaceF2Actor = { "WhiteFaceF2Actor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, WhiteFaceF2Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteFaceF2Actor_MetaData), NewProp_WhiteFaceF2Actor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ObjectiveClass = { "ObjectiveClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, ObjectiveClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObjectivePanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveClass_MetaData), NewProp_ObjectiveClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsFuse10a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsElectricKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsOfficeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFlashlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFuseCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveFindElectricKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveElectricKeyCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveOfficeKeyCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsObjectiveKeycardCollected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsValueFusePickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ElevatorSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FlashlightMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_RightHandMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ItemReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerMovementsValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkForwardAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WalkBackwardAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightEquiped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isFlashlightInInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_isElectricKeyInInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsUiActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_UiTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_UiMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_UiMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_TargetInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_PlayerInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_InteractionCheckFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_InteractionCheckDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedFlashlight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_bIsNeedElectricKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ExitReceptionPhoneTrigActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ExitFuseBoxRoomActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GoingToMissingColeTrigActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Fuse10A_InFuseBoxTransActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Fuse10A_ToFuseBoxActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ReceptionPhoneKeyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_WhiteFaceF2Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ObjectiveClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
	&AFirstPersonCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams)
};
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
// End Class AFirstPersonCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractionData::StaticStruct, Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps, TEXT("InteractionData"), &Z_Registration_Info_UScriptStruct_InteractionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionData), 2377451553U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharacter, AFirstPersonCharacter::StaticClass, TEXT("AFirstPersonCharacter"), &Z_Registration_Info_UClass_AFirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacter), 416261799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_4016166567(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
