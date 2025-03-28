// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Gameplay/GameplayEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEvents() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AGameplayEvents();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AGameplayEvents_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class AGameplayEvents Function LoadSublevel
struct Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics
{
	struct GameplayEvents_eventLoadSublevel_Parms
	{
		FName LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | SubLevels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to load a sublevel\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to load a sublevel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEvents_eventLoadSublevel_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "LoadSublevel", nullptr, nullptr, Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::GameplayEvents_eventLoadSublevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::GameplayEvents_eventLoadSublevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayEvents_LoadSublevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_LoadSublevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execLoadSublevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSublevel(Z_Param_LevelName);
	P_NATIVE_END;
}
// End Class AGameplayEvents Function LoadSublevel

// Begin Class AGameplayEvents Function OnSublevelLoaded
struct Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "OnSublevelLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execOnSublevelLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSublevelLoaded();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function OnSublevelLoaded

// Begin Class AGameplayEvents Function ToggleOff
struct Z_Construct_UFunction_AGameplayEvents_ToggleOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_ToggleOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "ToggleOff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_ToggleOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_ToggleOff_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_ToggleOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_ToggleOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execToggleOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleOff();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function ToggleOff

// Begin Class AGameplayEvents Function ToggleOn
struct Z_Construct_UFunction_AGameplayEvents_ToggleOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---Toggle--- //\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---Toggle---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_ToggleOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "ToggleOn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_ToggleOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_ToggleOn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_ToggleOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_ToggleOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execToggleOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleOn();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function ToggleOn

// Begin Class AGameplayEvents Function UnloadSublevel
struct Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics
{
	struct GameplayEvents_eventUnloadSublevel_Parms
	{
		FName LevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | SubLevels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to unload a sublevel\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to unload a sublevel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEvents_eventUnloadSublevel_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::NewProp_LevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "UnloadSublevel", nullptr, nullptr, Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::GameplayEvents_eventUnloadSublevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::GameplayEvents_eventUnloadSublevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayEvents_UnloadSublevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_UnloadSublevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execUnloadSublevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnloadSublevel(Z_Param_LevelName);
	P_NATIVE_END;
}
// End Class AGameplayEvents Function UnloadSublevel

// Begin Class AGameplayEvents
void AGameplayEvents::StaticRegisterNativesAGameplayEvents()
{
	UClass* Class = AGameplayEvents::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadSublevel", &AGameplayEvents::execLoadSublevel },
		{ "OnSublevelLoaded", &AGameplayEvents::execOnSublevelLoaded },
		{ "ToggleOff", &AGameplayEvents::execToggleOff },
		{ "ToggleOn", &AGameplayEvents::execToggleOn },
		{ "UnloadSublevel", &AGameplayEvents::execUnloadSublevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayEvents);
UClass* Z_Construct_UClass_AGameplayEvents_NoRegister()
{
	return AGameplayEvents::StaticClass();
}
struct Z_Construct_UClass_AGameplayEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/GameplayEvents.h" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTempWaitForInteractibleFuseBox_MetaData[] = {
		{ "Category", "Event | Activity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Activity\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitReceptionPhoneTrigActor_MetaData[] = {
		{ "Category", "Event | Assign | Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////---ASSIGN---///////////////////////////\n// --- Triggers --- //\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/---ASSIGN---\n --- Triggers ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionPhoneActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Actors --- //\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Actors ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightsB1Reception_SL_MetaData[] = {
		{ "Category", "Event | Assign | SubLevels" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SubLevels --- //\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SubLevels ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightsF1_SL_MetaData[] = {
		{ "Category", "Event | Assign | SubLevels" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightsF2_SL_MetaData[] = {
		{ "Category", "Event | Assign | SubLevels" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTempWaitForInteractibleFuseBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTempWaitForInteractibleFuseBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitReceptionPhoneTrigActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionPhoneActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LightsB1Reception_SL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LightsF1_SL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LightsF2_SL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayEvents_LoadSublevel, "LoadSublevel" }, // 1788453732
		{ &Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded, "OnSublevelLoaded" }, // 1957554179
		{ &Z_Construct_UFunction_AGameplayEvents_ToggleOff, "ToggleOff" }, // 83995692
		{ &Z_Construct_UFunction_AGameplayEvents_ToggleOn, "ToggleOn" }, // 379029772
		{ &Z_Construct_UFunction_AGameplayEvents_UnloadSublevel, "UnloadSublevel" }, // 2693158880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayEvents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGameplayEvents_Statics::NewProp_bIsTempWaitForInteractibleFuseBox_SetBit(void* Obj)
{
	((AGameplayEvents*)Obj)->bIsTempWaitForInteractibleFuseBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_bIsTempWaitForInteractibleFuseBox = { "bIsTempWaitForInteractibleFuseBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameplayEvents), &Z_Construct_UClass_AGameplayEvents_Statics::NewProp_bIsTempWaitForInteractibleFuseBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTempWaitForInteractibleFuseBox_MetaData), NewProp_bIsTempWaitForInteractibleFuseBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ExitReceptionPhoneTrigActor = { "ExitReceptionPhoneTrigActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, ExitReceptionPhoneTrigActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitReceptionPhoneTrigActor_MetaData), NewProp_ExitReceptionPhoneTrigActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionPhoneActor = { "ReceptionPhoneActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, ReceptionPhoneActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceptionPhoneActor_MetaData), NewProp_ReceptionPhoneActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsB1Reception_SL = { "LightsB1Reception_SL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LightsB1Reception_SL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightsB1Reception_SL_MetaData), NewProp_LightsB1Reception_SL_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsF1_SL = { "LightsF1_SL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LightsF1_SL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightsF1_SL_MetaData), NewProp_LightsF1_SL_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsF2_SL = { "LightsF2_SL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LightsF2_SL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightsF2_SL_MetaData), NewProp_LightsF2_SL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_bIsTempWaitForInteractibleFuseBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ExitReceptionPhoneTrigActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionPhoneActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsB1Reception_SL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsF1_SL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsF2_SL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameplayEvents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayEvents_Statics::ClassParams = {
	&AGameplayEvents::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameplayEvents_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameplayEvents_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameplayEvents()
{
	if (!Z_Registration_Info_UClass_AGameplayEvents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayEvents.OuterSingleton, Z_Construct_UClass_AGameplayEvents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameplayEvents.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<AGameplayEvents>()
{
	return AGameplayEvents::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayEvents);
AGameplayEvents::~AGameplayEvents() {}
// End Class AGameplayEvents

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayEvents, AGameplayEvents::StaticClass, TEXT("AGameplayEvents"), &Z_Registration_Info_UClass_AGameplayEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayEvents), 1158972200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_2323722866(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
