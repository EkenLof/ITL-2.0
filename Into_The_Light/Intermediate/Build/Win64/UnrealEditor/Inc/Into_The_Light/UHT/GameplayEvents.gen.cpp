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
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AGameplayEvents();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AGameplayEvents_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
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
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextStep();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////---NEXTSTEP ACTIVE---////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---NEXTSTEP ACTIVE---" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayEvents, nullptr, "NextStep", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameplayEvents_NextStep_Statics::Function_MetaDataParams) };
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
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
		{ &Z_Construct_UFunction_AGameplayEvents_NextStep, "NextStep" }, // 20192036
		{ &Z_Construct_UFunction_AGameplayEvents_Step0, "Step0" }, // 2430110827
		{ &Z_Construct_UFunction_AGameplayEvents_Step1, "Step1" }, // 1800076114
		{ &Z_Construct_UFunction_AGameplayEvents_Step2, "Step2" }, // 3909825645
		{ &Z_Construct_UFunction_AGameplayEvents_Step3, "Step3" }, // 3463231242
		{ &Z_Construct_UFunction_AGameplayEvents_Step4, "Step4" }, // 2552529891
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayEvents_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/GameplayEvents.h" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayEvents_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Character | Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////---Inventory Base-Logic---//////////////////////////////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/GameplayEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---Inventory Base-Logic---/" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayEvents_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameplayEvents, PlayerInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayEvents_Statics::NewProp_PlayerInventory_MetaData), Z_Construct_UClass_AGameplayEvents_Statics::NewProp_PlayerInventory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayEvents_Statics::NewProp_PlayerInventory,
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
		{ Z_Construct_UClass_AGameplayEvents, AGameplayEvents::StaticClass, TEXT("AGameplayEvents"), &Z_Registration_Info_UClass_AGameplayEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayEvents), 1707768750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_2297040755(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
