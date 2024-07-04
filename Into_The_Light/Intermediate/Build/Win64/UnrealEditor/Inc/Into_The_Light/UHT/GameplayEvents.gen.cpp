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

// Begin Class AGameplayEvents Function NextStep
struct Z_Construct_UFunction_AGameplayEvents_NextStep_Statics
{
	struct GameplayEvents_eventNextStep_Parms
	{
		int32 StepUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////\n// void NextStep();\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---NEXTSTEP ACTIVE---\n void NextStep();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StepUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::NewProp_StepUp = { "StepUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEvents_eventNextStep_Parms, StepUp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::NewProp_StepUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "NextStep", nullptr, nullptr, Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::GameplayEvents_eventNextStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::GameplayEvents_eventNextStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameplayEvents_NextStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execNextStep)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StepUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextStep(Z_Param_StepUp);
	P_NATIVE_END;
}
// End Class AGameplayEvents Function NextStep

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

// Begin Class AGameplayEvents Function Step0
struct Z_Construct_UFunction_AGameplayEvents_Step0_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step0", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step0_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step0_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step0()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step0_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep0)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step0();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step0

// Begin Class AGameplayEvents Function Step1
struct Z_Construct_UFunction_AGameplayEvents_Step1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step1();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step1

// Begin Class AGameplayEvents Function Step10
struct Z_Construct_UFunction_AGameplayEvents_Step10_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step10_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step10", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step10_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step10_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step10()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step10_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep10)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step10();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step10

// Begin Class AGameplayEvents Function Step2
struct Z_Construct_UFunction_AGameplayEvents_Step2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step2();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step2

// Begin Class AGameplayEvents Function Step3
struct Z_Construct_UFunction_AGameplayEvents_Step3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step3", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step3_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step3_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step3();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step3

// Begin Class AGameplayEvents Function Step4
struct Z_Construct_UFunction_AGameplayEvents_Step4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step4", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step4_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step4_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep4)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step4();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step4

// Begin Class AGameplayEvents Function Step5
struct Z_Construct_UFunction_AGameplayEvents_Step5_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step5", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step5_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step5_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step5()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step5_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep5)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step5();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step5

// Begin Class AGameplayEvents Function Step6
struct Z_Construct_UFunction_AGameplayEvents_Step6_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step6_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step6", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step6_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step6_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step6()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step6_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep6)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step6();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step6

// Begin Class AGameplayEvents Function Step7
struct Z_Construct_UFunction_AGameplayEvents_Step7_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step7_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step7", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step7_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step7_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step7()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step7_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep7)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step7();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step7

// Begin Class AGameplayEvents Function Step8
struct Z_Construct_UFunction_AGameplayEvents_Step8_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step8", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step8_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step8_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step8()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step8_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep8)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step8();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step8

// Begin Class AGameplayEvents Function Step9
struct Z_Construct_UFunction_AGameplayEvents_Step9_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_Step9_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "Step9", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_Step9_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_Step9_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameplayEvents_Step9()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayEvents_Step9_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameplayEvents::execStep9)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step9();
	P_NATIVE_END;
}
// End Class AGameplayEvents Function Step9

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
		{ "NextStep", &AGameplayEvents::execNextStep },
		{ "OnSublevelLoaded", &AGameplayEvents::execOnSublevelLoaded },
		{ "Step0", &AGameplayEvents::execStep0 },
		{ "Step1", &AGameplayEvents::execStep1 },
		{ "Step10", &AGameplayEvents::execStep10 },
		{ "Step2", &AGameplayEvents::execStep2 },
		{ "Step3", &AGameplayEvents::execStep3 },
		{ "Step4", &AGameplayEvents::execStep4 },
		{ "Step5", &AGameplayEvents::execStep5 },
		{ "Step6", &AGameplayEvents::execStep6 },
		{ "Step7", &AGameplayEvents::execStep7 },
		{ "Step8", &AGameplayEvents::execStep8 },
		{ "Step9", &AGameplayEvents::execStep9 },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LighterActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Actors --- //\x09\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Actors ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionPhoneActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionPhoneKeyActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LighterActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionPhoneActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionPhoneKeyActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LightsB1Reception_SL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LightsF1_SL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LightsF2_SL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayEvents_LoadSublevel, "LoadSublevel" }, // 1788453732
		{ &Z_Construct_UFunction_AGameplayEvents_NextStep, "NextStep" }, // 452918355
		{ &Z_Construct_UFunction_AGameplayEvents_OnSublevelLoaded, "OnSublevelLoaded" }, // 1957554179
		{ &Z_Construct_UFunction_AGameplayEvents_Step0, "Step0" }, // 140066084
		{ &Z_Construct_UFunction_AGameplayEvents_Step1, "Step1" }, // 3744467042
		{ &Z_Construct_UFunction_AGameplayEvents_Step10, "Step10" }, // 4183978094
		{ &Z_Construct_UFunction_AGameplayEvents_Step2, "Step2" }, // 3647741597
		{ &Z_Construct_UFunction_AGameplayEvents_Step3, "Step3" }, // 2240352314
		{ &Z_Construct_UFunction_AGameplayEvents_Step4, "Step4" }, // 3015971388
		{ &Z_Construct_UFunction_AGameplayEvents_Step5, "Step5" }, // 3982976046
		{ &Z_Construct_UFunction_AGameplayEvents_Step6, "Step6" }, // 667451690
		{ &Z_Construct_UFunction_AGameplayEvents_Step7, "Step7" }, // 3199753067
		{ &Z_Construct_UFunction_AGameplayEvents_Step8, "Step8" }, // 2320462625
		{ &Z_Construct_UFunction_AGameplayEvents_Step9, "Step9" }, // 2465062377
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LighterActor = { "LighterActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LighterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LighterActor_MetaData), NewProp_LighterActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionPhoneActor = { "ReceptionPhoneActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, ReceptionPhoneActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceptionPhoneActor_MetaData), NewProp_ReceptionPhoneActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionPhoneKeyActor = { "ReceptionPhoneKeyActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, ReceptionPhoneKeyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceptionPhoneKeyActor_MetaData), NewProp_ReceptionPhoneKeyActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsB1Reception_SL = { "LightsB1Reception_SL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LightsB1Reception_SL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightsB1Reception_SL_MetaData), NewProp_LightsB1Reception_SL_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsF1_SL = { "LightsF1_SL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LightsF1_SL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightsF1_SL_MetaData), NewProp_LightsF1_SL_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LightsF2_SL = { "LightsF2_SL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LightsF2_SL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightsF2_SL_MetaData), NewProp_LightsF2_SL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_bIsTempWaitForInteractibleFuseBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ExitReceptionPhoneTrigActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LighterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionPhoneActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionPhoneKeyActor,
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
		{ Z_Construct_UClass_AGameplayEvents, AGameplayEvents::StaticClass, TEXT("AGameplayEvents"), &Z_Registration_Info_UClass_AGameplayEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayEvents), 3496499282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_2076227241(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
