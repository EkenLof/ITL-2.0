// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Characters/Cole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCole() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ACole();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ACole_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class ACole Function ColeMeet
struct Z_Construct_UFunction_ACole_ColeMeet_Statics
{
	struct Cole_eventColeMeet_Parms
	{
		bool bIsColeMeetActivety;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Elevator | Event | Activity" },
		{ "ModuleRelativePath", "Public/Characters/Cole.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsColeMeetActivety_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsColeMeetActivety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACole_ColeMeet_Statics::NewProp_bIsColeMeetActivety_SetBit(void* Obj)
{
	((Cole_eventColeMeet_Parms*)Obj)->bIsColeMeetActivety = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACole_ColeMeet_Statics::NewProp_bIsColeMeetActivety = { "bIsColeMeetActivety", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cole_eventColeMeet_Parms), &Z_Construct_UFunction_ACole_ColeMeet_Statics::NewProp_bIsColeMeetActivety_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACole_ColeMeet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACole_ColeMeet_Statics::NewProp_bIsColeMeetActivety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACole_ColeMeet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACole_ColeMeet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACole, nullptr, "ColeMeet", nullptr, nullptr, Z_Construct_UFunction_ACole_ColeMeet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACole_ColeMeet_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACole_ColeMeet_Statics::Cole_eventColeMeet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACole_ColeMeet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACole_ColeMeet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACole_ColeMeet_Statics::Cole_eventColeMeet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACole_ColeMeet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACole_ColeMeet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACole::execColeMeet)
{
	P_GET_UBOOL(Z_Param_bIsColeMeetActivety);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ColeMeet(Z_Param_bIsColeMeetActivety);
	P_NATIVE_END;
}
// End Class ACole Function ColeMeet

// Begin Class ACole
void ACole::StaticRegisterNativesACole()
{
	UClass* Class = ACole::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ColeMeet", &ACole::execColeMeet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACole);
UClass* Z_Construct_UClass_ACole_NoRegister()
{
	return ACole::StaticClass();
}
struct Z_Construct_UClass_ACole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/Cole.h" },
		{ "ModuleRelativePath", "Public/Characters/Cole.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsColeMeetOn_MetaData[] = {
		{ "Category", "Elevator | Event | Activity" },
		{ "ModuleRelativePath", "Public/Characters/Cole.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsColeMeetOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsColeMeetOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACole_ColeMeet, "ColeMeet" }, // 4255230734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACole>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ACole_Statics::NewProp_bIsColeMeetOn_SetBit(void* Obj)
{
	((ACole*)Obj)->bIsColeMeetOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACole_Statics::NewProp_bIsColeMeetOn = { "bIsColeMeetOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACole), &Z_Construct_UClass_ACole_Statics::NewProp_bIsColeMeetOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsColeMeetOn_MetaData), NewProp_bIsColeMeetOn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACole_Statics::NewProp_bIsColeMeetOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACole_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACole_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACole_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACole_Statics::ClassParams = {
	&ACole::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACole_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACole_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACole_Statics::Class_MetaDataParams), Z_Construct_UClass_ACole_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACole()
{
	if (!Z_Registration_Info_UClass_ACole.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACole.OuterSingleton, Z_Construct_UClass_ACole_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACole.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<ACole>()
{
	return ACole::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACole);
ACole::~ACole() {}
// End Class ACole

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACole, ACole::StaticClass, TEXT("ACole"), &Z_Registration_Info_UClass_ACole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACole), 1882806490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_3370203544(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
