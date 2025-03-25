// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Gameplay/Elevator_System.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElevator_System() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AElevator_System();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AElevator_System_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class AElevator_System Function ElevatorActive
struct Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics
{
	struct Elevator_System_eventElevatorActive_Parms
	{
		bool bIsElevatorActivety;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Elevator | Event | Activity" },
		{ "ModuleRelativePath", "Public/Gameplay/Elevator_System.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsElevatorActivety_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsElevatorActivety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::NewProp_bIsElevatorActivety_SetBit(void* Obj)
{
	((Elevator_System_eventElevatorActive_Parms*)Obj)->bIsElevatorActivety = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::NewProp_bIsElevatorActivety = { "bIsElevatorActivety", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Elevator_System_eventElevatorActive_Parms), &Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::NewProp_bIsElevatorActivety_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::NewProp_bIsElevatorActivety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElevator_System, nullptr, "ElevatorActive", nullptr, nullptr, Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::Elevator_System_eventElevatorActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::Elevator_System_eventElevatorActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AElevator_System_ElevatorActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElevator_System_ElevatorActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElevator_System::execElevatorActive)
{
	P_GET_UBOOL(Z_Param_bIsElevatorActivety);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ElevatorActive(Z_Param_bIsElevatorActivety);
	P_NATIVE_END;
}
// End Class AElevator_System Function ElevatorActive

// Begin Class AElevator_System
void AElevator_System::StaticRegisterNativesAElevator_System()
{
	UClass* Class = AElevator_System::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ElevatorActive", &AElevator_System::execElevatorActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElevator_System);
UClass* Z_Construct_UClass_AElevator_System_NoRegister()
{
	return AElevator_System::StaticClass();
}
struct Z_Construct_UClass_AElevator_System_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/Elevator_System.h" },
		{ "ModuleRelativePath", "Public/Gameplay/Elevator_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsElevatorOn_MetaData[] = {
		{ "Category", "Elevator | Event | Activity" },
		{ "ModuleRelativePath", "Public/Gameplay/Elevator_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bISCrElevator_MetaData[] = {
		{ "Category", "Elevator | Event | Activity" },
		{ "ModuleRelativePath", "Public/Gameplay/Elevator_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFuse16aPlaced_MetaData[] = {
		{ "Category", "Elevator | Event | Activity" },
		{ "ModuleRelativePath", "Public/Gameplay/Elevator_System.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsElevatorOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsElevatorOn;
	static void NewProp_bISCrElevator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bISCrElevator;
	static void NewProp_bIsFuse16aPlaced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFuse16aPlaced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AElevator_System_ElevatorActive, "ElevatorActive" }, // 3234120244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElevator_System>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsElevatorOn_SetBit(void* Obj)
{
	((AElevator_System*)Obj)->bIsElevatorOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsElevatorOn = { "bIsElevatorOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AElevator_System), &Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsElevatorOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsElevatorOn_MetaData), NewProp_bIsElevatorOn_MetaData) };
void Z_Construct_UClass_AElevator_System_Statics::NewProp_bISCrElevator_SetBit(void* Obj)
{
	((AElevator_System*)Obj)->bISCrElevator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElevator_System_Statics::NewProp_bISCrElevator = { "bISCrElevator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AElevator_System), &Z_Construct_UClass_AElevator_System_Statics::NewProp_bISCrElevator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bISCrElevator_MetaData), NewProp_bISCrElevator_MetaData) };
void Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsFuse16aPlaced_SetBit(void* Obj)
{
	((AElevator_System*)Obj)->bIsFuse16aPlaced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsFuse16aPlaced = { "bIsFuse16aPlaced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AElevator_System), &Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsFuse16aPlaced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFuse16aPlaced_MetaData), NewProp_bIsFuse16aPlaced_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElevator_System_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsElevatorOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_System_Statics::NewProp_bISCrElevator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_System_Statics::NewProp_bIsFuse16aPlaced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_System_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AElevator_System_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_System_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AElevator_System_Statics::ClassParams = {
	&AElevator_System::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AElevator_System_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_System_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_System_Statics::Class_MetaDataParams), Z_Construct_UClass_AElevator_System_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AElevator_System()
{
	if (!Z_Registration_Info_UClass_AElevator_System.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElevator_System.OuterSingleton, Z_Construct_UClass_AElevator_System_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AElevator_System.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<AElevator_System>()
{
	return AElevator_System::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AElevator_System);
AElevator_System::~AElevator_System() {}
// End Class AElevator_System

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AElevator_System, AElevator_System::StaticClass, TEXT("AElevator_System"), &Z_Registration_Info_UClass_AElevator_System, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElevator_System), 3514737830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_541525504(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
