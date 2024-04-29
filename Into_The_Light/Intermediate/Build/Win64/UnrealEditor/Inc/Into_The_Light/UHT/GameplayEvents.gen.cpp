// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Gameplay/GameplayEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AGameplayEvents();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AGameplayEvents_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	DEFINE_FUNCTION(AGameplayEvents::execStep4)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Step4();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayEvents::execStep3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Step3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayEvents::execStep2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Step2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayEvents::execStep1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Step1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayEvents::execStep0)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Step0();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayEvents::execNextStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StepUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextStep(Z_Param_StepUp);
		P_NATIVE_END;
	}
	void AGameplayEvents::StaticRegisterNativesAGameplayEvents()
	{
		UClass* Class = AGameplayEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextStep", &AGameplayEvents::execNextStep },
			{ "Step0", &AGameplayEvents::execStep0 },
			{ "Step1", &AGameplayEvents::execStep1 },
			{ "Step2", &AGameplayEvents::execStep2 },
			{ "Step3", &AGameplayEvents::execStep3 },
			{ "Step4", &AGameplayEvents::execStep4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayEvents_NextStep_Statics
	{
		struct GameplayEvents_eventNextStep_Parms
		{
			int32 StepUp;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::NewProp_StepUp = { "StepUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayEvents_eventNextStep_Parms, StepUp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::NewProp_StepUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////\n// void NextStep();\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---NEXTSTEP ACTIVE---\n void NextStep();" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "NextStep", nullptr, nullptr, Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::GameplayEvents_eventNextStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AGameplayEvents_Step0_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayEvents_Step0_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Executed on each step (Every Step)\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executed on each step (Every Step)" },
#endif
	};
#endif
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
	struct Z_Construct_UFunction_AGameplayEvents_Step1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayEvents_Step1_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif
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
	struct Z_Construct_UFunction_AGameplayEvents_Step2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayEvents_Step2_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif
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
	struct Z_Construct_UFunction_AGameplayEvents_Step3_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayEvents_Step3_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif
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
	struct Z_Construct_UFunction_AGameplayEvents_Step4_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayEvents_Step4_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayEvents);
	UClass* Z_Construct_UClass_AGameplayEvents_NoRegister()
	{
		return AGameplayEvents::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionTriggerStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionTriggerStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionHiddenWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionHiddenWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayEvents_NextStep, "NextStep" }, // 1173644867
		{ &Z_Construct_UFunction_AGameplayEvents_Step0, "Step0" }, // 2430110827
		{ &Z_Construct_UFunction_AGameplayEvents_Step1, "Step1" }, // 1800076114
		{ &Z_Construct_UFunction_AGameplayEvents_Step2, "Step2" }, // 3909825645
		{ &Z_Construct_UFunction_AGameplayEvents_Step3, "Step3" }, // 3463231242
		{ &Z_Construct_UFunction_AGameplayEvents_Step4, "Step4" }, // 2552529891
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayEvents_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class UInventoryComponent;                                                               //(FIX SET LATER)\n" },
#endif
		{ "IncludePath", "Gameplay/GameplayEvents.h" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UInventoryComponent;                                                               (FIX SET LATER)" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionTriggerStart_MetaData[] = {
		{ "Category", "Event | Assign" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////---ASSIGN---///////////////////////////\n// ---Triggers--- //\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/---ASSIGN---\n ---Triggers---" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionTriggerStart = { "ReceptionTriggerStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, ReceptionTriggerStart), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionTriggerStart_MetaData), Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionTriggerStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionHiddenWall_MetaData[] = {
		{ "Category", "Event | Assign" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---HiddenWalls--- //\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---HiddenWalls---" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionHiddenWall = { "ReceptionHiddenWall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, ReceptionHiddenWall), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionHiddenWall_MetaData), Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionHiddenWall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LevelStep_MetaData[] = {
		{ "Category", "Character | Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CurrentStep\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CurrentStep" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LevelStep = { "LevelStep", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, LevelStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LevelStep_MetaData), Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LevelStep_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionTriggerStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_ReceptionHiddenWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_LevelStep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayEvents>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayEvents, AGameplayEvents::StaticClass, TEXT("AGameplayEvents"), &Z_Registration_Info_UClass_AGameplayEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayEvents), 1548085586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_836126511(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
