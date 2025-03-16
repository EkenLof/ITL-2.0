// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Triggers/BoxCollider.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxCollider() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ABoxCollider();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ABoxCollider_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ACole_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AGameplayEvents_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class ABoxCollider Function OnOverlapBegin
struct Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics
{
	struct BoxCollider_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool BFromSweep;
		FHitResult SeepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_BFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep_SetBit(void* Obj)
{
	((BoxCollider_eventOnOverlapBegin_Parms*)Obj)->BFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep = { "BFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoxCollider_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_SeepResult = { "SeepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, SeepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeepResult_MetaData), NewProp_SeepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_SeepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxCollider, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::BoxCollider_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::BoxCollider_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoxCollider_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoxCollider::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_BFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SeepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_BFromSweep,Z_Param_Out_SeepResult);
	P_NATIVE_END;
}
// End Class ABoxCollider Function OnOverlapBegin

// Begin Class ABoxCollider
void ABoxCollider::StaticRegisterNativesABoxCollider()
{
	UClass* Class = ABoxCollider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ABoxCollider::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoxCollider);
UClass* Z_Construct_UClass_ABoxCollider_NoRegister()
{
	return ABoxCollider::StaticClass();
}
struct Z_Construct_UClass_ABoxCollider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Triggers/BoxCollider.h" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "BoxCollider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBeforeMeetCole_MetaData[] = {
		{ "Category", "Event | Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////---ACTIVE STATE---////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/---ACTIVE STATE---/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMeetCole_MetaData[] = {
		{ "Category", "Event | Trigger" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGoingToMissingCole_MetaData[] = {
		{ "Category", "Event | Trigger" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMissingCole_MetaData[] = {
		{ "Category", "Event | Trigger" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExitFuseBoxRoom_MetaData[] = {
		{ "Category", "Event | Trigger" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExitReceptionPhone_MetaData[] = {
		{ "Category", "Event | Trigger" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissingColeTriggerStart_MetaData[] = {
		{ "Category", "Event | Assign | Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TRIGGERS\n" },
#endif
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TRIGGERS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanternActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ACTORS\n" },
#endif
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ACTORS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanternBrokenActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColeStorageRoomActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElectricKeyActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElectricKey_KeyActor_MetaData[] = {
		{ "Category", "Event | Assign | Actors" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColeState_MetaData[] = {
		{ "Category", "Event | Assign" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventSteps_MetaData[] = {
		{ "Category", "Events | Steps" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MichaelTagName_MetaData[] = {
		{ "Category", "Events | TagNames" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static void NewProp_bIsBeforeMeetCole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBeforeMeetCole;
	static void NewProp_bIsMeetCole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMeetCole;
	static void NewProp_bIsGoingToMissingCole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGoingToMissingCole;
	static void NewProp_bIsMissingCole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMissingCole;
	static void NewProp_bIsExitFuseBoxRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExitFuseBoxRoom;
	static void NewProp_bIsExitReceptionPhone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExitReceptionPhone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissingColeTriggerStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LanternActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LanternBrokenActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColeStorageRoomActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElectricKeyActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ElectricKey_KeyActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColeState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventSteps;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MichaelTagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxCollider_OnOverlapBegin, "OnOverlapBegin" }, // 896324525
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxCollider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
void Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsBeforeMeetCole_SetBit(void* Obj)
{
	((ABoxCollider*)Obj)->bIsBeforeMeetCole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsBeforeMeetCole = { "bIsBeforeMeetCole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoxCollider), &Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsBeforeMeetCole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBeforeMeetCole_MetaData), NewProp_bIsBeforeMeetCole_MetaData) };
void Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMeetCole_SetBit(void* Obj)
{
	((ABoxCollider*)Obj)->bIsMeetCole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMeetCole = { "bIsMeetCole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoxCollider), &Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMeetCole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMeetCole_MetaData), NewProp_bIsMeetCole_MetaData) };
void Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsGoingToMissingCole_SetBit(void* Obj)
{
	((ABoxCollider*)Obj)->bIsGoingToMissingCole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsGoingToMissingCole = { "bIsGoingToMissingCole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoxCollider), &Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsGoingToMissingCole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGoingToMissingCole_MetaData), NewProp_bIsGoingToMissingCole_MetaData) };
void Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMissingCole_SetBit(void* Obj)
{
	((ABoxCollider*)Obj)->bIsMissingCole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMissingCole = { "bIsMissingCole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoxCollider), &Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMissingCole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMissingCole_MetaData), NewProp_bIsMissingCole_MetaData) };
void Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitFuseBoxRoom_SetBit(void* Obj)
{
	((ABoxCollider*)Obj)->bIsExitFuseBoxRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitFuseBoxRoom = { "bIsExitFuseBoxRoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoxCollider), &Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitFuseBoxRoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExitFuseBoxRoom_MetaData), NewProp_bIsExitFuseBoxRoom_MetaData) };
void Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitReceptionPhone_SetBit(void* Obj)
{
	((ABoxCollider*)Obj)->bIsExitReceptionPhone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitReceptionPhone = { "bIsExitReceptionPhone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoxCollider), &Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitReceptionPhone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExitReceptionPhone_MetaData), NewProp_bIsExitReceptionPhone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_MissingColeTriggerStart = { "MissingColeTriggerStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, MissingColeTriggerStart), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissingColeTriggerStart_MetaData), NewProp_MissingColeTriggerStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_LanternActor = { "LanternActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, LanternActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanternActor_MetaData), NewProp_LanternActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_LanternBrokenActor = { "LanternBrokenActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, LanternBrokenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanternBrokenActor_MetaData), NewProp_LanternBrokenActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_ColeStorageRoomActor = { "ColeStorageRoomActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, ColeStorageRoomActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColeStorageRoomActor_MetaData), NewProp_ColeStorageRoomActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_ElectricKeyActor = { "ElectricKeyActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, ElectricKeyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElectricKeyActor_MetaData), NewProp_ElectricKeyActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_ElectricKey_KeyActor = { "ElectricKey_KeyActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, ElectricKey_KeyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElectricKey_KeyActor_MetaData), NewProp_ElectricKey_KeyActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_ColeState = { "ColeState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, ColeState), Z_Construct_UClass_ACole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColeState_MetaData), NewProp_ColeState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_EventSteps = { "EventSteps", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, EventSteps), Z_Construct_UClass_AGameplayEvents_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventSteps_MetaData), NewProp_EventSteps_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_MichaelTagName = { "MichaelTagName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, MichaelTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MichaelTagName_MetaData), NewProp_MichaelTagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxCollider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsBeforeMeetCole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMeetCole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsGoingToMissingCole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsMissingCole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitFuseBoxRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_bIsExitReceptionPhone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_MissingColeTriggerStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_LanternActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_LanternBrokenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_ColeStorageRoomActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_ElectricKeyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_ElectricKey_KeyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_ColeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_EventSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_MichaelTagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoxCollider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoxCollider_Statics::ClassParams = {
	&ABoxCollider::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABoxCollider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoxCollider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoxCollider()
{
	if (!Z_Registration_Info_UClass_ABoxCollider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoxCollider.OuterSingleton, Z_Construct_UClass_ABoxCollider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoxCollider.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<ABoxCollider>()
{
	return ABoxCollider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxCollider);
ABoxCollider::~ABoxCollider() {}
// End Class ABoxCollider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoxCollider, ABoxCollider::StaticClass, TEXT("ABoxCollider"), &Z_Registration_Info_UClass_ABoxCollider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxCollider), 1358603992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_30522111(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
