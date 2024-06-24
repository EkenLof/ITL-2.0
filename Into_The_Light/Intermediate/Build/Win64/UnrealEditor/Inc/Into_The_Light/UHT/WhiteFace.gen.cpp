// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Characters/WhiteFace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhiteFace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AWhiteFace();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AWhiteFace_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class AWhiteFace Function WhiteFaceClapp
struct Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics
{
	struct WhiteFace_eventWhiteFaceClapp_Parms
	{
		bool bIsWhiteFaceActivety;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | Activity" },
		{ "ModuleRelativePath", "Public/Characters/WhiteFace.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsWhiteFaceActivety_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteFaceActivety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::NewProp_bIsWhiteFaceActivety_SetBit(void* Obj)
{
	((WhiteFace_eventWhiteFaceClapp_Parms*)Obj)->bIsWhiteFaceActivety = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::NewProp_bIsWhiteFaceActivety = { "bIsWhiteFaceActivety", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteFace_eventWhiteFaceClapp_Parms), &Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::NewProp_bIsWhiteFaceActivety_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::NewProp_bIsWhiteFaceActivety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteFace, nullptr, "WhiteFaceClapp", nullptr, nullptr, Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::WhiteFace_eventWhiteFaceClapp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::WhiteFace_eventWhiteFaceClapp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteFace::execWhiteFaceClapp)
{
	P_GET_UBOOL(Z_Param_bIsWhiteFaceActivety);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WhiteFaceClapp(Z_Param_bIsWhiteFaceActivety);
	P_NATIVE_END;
}
// End Class AWhiteFace Function WhiteFaceClapp

// Begin Class AWhiteFace Function WhiteFaceIdle
struct Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics
{
	struct WhiteFace_eventWhiteFaceIdle_Parms
	{
		bool bIsWhiteFaceActivety;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | Activity" },
		{ "ModuleRelativePath", "Public/Characters/WhiteFace.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsWhiteFaceActivety_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteFaceActivety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::NewProp_bIsWhiteFaceActivety_SetBit(void* Obj)
{
	((WhiteFace_eventWhiteFaceIdle_Parms*)Obj)->bIsWhiteFaceActivety = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::NewProp_bIsWhiteFaceActivety = { "bIsWhiteFaceActivety", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteFace_eventWhiteFaceIdle_Parms), &Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::NewProp_bIsWhiteFaceActivety_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::NewProp_bIsWhiteFaceActivety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteFace, nullptr, "WhiteFaceIdle", nullptr, nullptr, Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::WhiteFace_eventWhiteFaceIdle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::WhiteFace_eventWhiteFaceIdle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteFace::execWhiteFaceIdle)
{
	P_GET_UBOOL(Z_Param_bIsWhiteFaceActivety);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WhiteFaceIdle(Z_Param_bIsWhiteFaceActivety);
	P_NATIVE_END;
}
// End Class AWhiteFace Function WhiteFaceIdle

// Begin Class AWhiteFace
void AWhiteFace::StaticRegisterNativesAWhiteFace()
{
	UClass* Class = AWhiteFace::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WhiteFaceClapp", &AWhiteFace::execWhiteFaceClapp },
		{ "WhiteFaceIdle", &AWhiteFace::execWhiteFaceIdle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWhiteFace);
UClass* Z_Construct_UClass_AWhiteFace_NoRegister()
{
	return AWhiteFace::StaticClass();
}
struct Z_Construct_UClass_AWhiteFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/WhiteFace.h" },
		{ "ModuleRelativePath", "Public/Characters/WhiteFace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWhiteFaceIdle_MetaData[] = {
		{ "Category", "Event | Activity" },
		{ "ModuleRelativePath", "Public/Characters/WhiteFace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWhiteFaceClapp_MetaData[] = {
		{ "Category", "Event | Activity" },
		{ "ModuleRelativePath", "Public/Characters/WhiteFace.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsWhiteFaceIdle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteFaceIdle;
	static void NewProp_bIsWhiteFaceClapp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteFaceClapp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWhiteFace_WhiteFaceClapp, "WhiteFaceClapp" }, // 151102286
		{ &Z_Construct_UFunction_AWhiteFace_WhiteFaceIdle, "WhiteFaceIdle" }, // 249167163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWhiteFace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceIdle_SetBit(void* Obj)
{
	((AWhiteFace*)Obj)->bIsWhiteFaceIdle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceIdle = { "bIsWhiteFaceIdle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWhiteFace), &Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceIdle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWhiteFaceIdle_MetaData), NewProp_bIsWhiteFaceIdle_MetaData) };
void Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceClapp_SetBit(void* Obj)
{
	((AWhiteFace*)Obj)->bIsWhiteFaceClapp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceClapp = { "bIsWhiteFaceClapp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWhiteFace), &Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceClapp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWhiteFaceClapp_MetaData), NewProp_bIsWhiteFaceClapp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWhiteFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceIdle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteFace_Statics::NewProp_bIsWhiteFaceClapp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteFace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWhiteFace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteFace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWhiteFace_Statics::ClassParams = {
	&AWhiteFace::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWhiteFace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteFace_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteFace_Statics::Class_MetaDataParams), Z_Construct_UClass_AWhiteFace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWhiteFace()
{
	if (!Z_Registration_Info_UClass_AWhiteFace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWhiteFace.OuterSingleton, Z_Construct_UClass_AWhiteFace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWhiteFace.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<AWhiteFace>()
{
	return AWhiteFace::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWhiteFace);
AWhiteFace::~AWhiteFace() {}
// End Class AWhiteFace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_WhiteFace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWhiteFace, AWhiteFace::StaticClass, TEXT("AWhiteFace"), &Z_Registration_Info_UClass_AWhiteFace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWhiteFace), 3614587753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_WhiteFace_h_1945566110(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_WhiteFace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_WhiteFace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
