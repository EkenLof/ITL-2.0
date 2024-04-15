// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Triggers/BoxCollider.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxCollider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ABoxCollider();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_ABoxCollider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	DEFINE_FUNCTION(ABoxCollider::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
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
	void ABoxCollider::StaticRegisterNativesABoxCollider()
	{
		UClass* Class = ABoxCollider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ABoxCollider::execOnOverlapBegin },
			{ "OnOverlapEnd", &ABoxCollider::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_BFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep_SetBit(void* Obj)
	{
		((BoxCollider_eventOnOverlapBegin_Parms*)Obj)->BFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep = { "BFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoxCollider_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_SeepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_SeepResult = { "SeepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapBegin_Parms, SeepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_SeepResult_MetaData), Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_SeepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_BFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::NewProp_SeepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxCollider, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::BoxCollider_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapBegin_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics
	{
		struct BoxCollider_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxCollider_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxCollider, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::BoxCollider_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::BoxCollider_eventOnOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABoxCollider_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoxCollider_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoxCollider);
	UClass* Z_Construct_UClass_ABoxCollider_NoRegister()
	{
		return ABoxCollider::StaticClass();
	}
	struct Z_Construct_UClass_ABoxCollider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMeetCole_MetaData[];
#endif
		static void NewProp_IsMeetCole_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMeetCole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxCollider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoxCollider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxCollider_OnOverlapBegin, "OnOverlapBegin" }, // 2464960424
		{ &Z_Construct_UFunction_ABoxCollider_OnOverlapEnd, "OnOverlapEnd" }, // 152737450
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxCollider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Triggers/BoxCollider.h" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxCollider_Statics::NewProp_IsMeetCole_MetaData[] = {
		{ "Category", "Event | Trigger" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
#endif
	void Z_Construct_UClass_ABoxCollider_Statics::NewProp_IsMeetCole_SetBit(void* Obj)
	{
		((ABoxCollider*)Obj)->IsMeetCole = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_IsMeetCole = { "IsMeetCole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoxCollider), &Z_Construct_UClass_ABoxCollider_Statics::NewProp_IsMeetCole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::NewProp_IsMeetCole_MetaData), Z_Construct_UClass_ABoxCollider_Statics::NewProp_IsMeetCole_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxCollider_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "BoxCollider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Triggers/BoxCollider.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxCollider_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxCollider, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::NewProp_CollisionBox_MetaData), Z_Construct_UClass_ABoxCollider_Statics::NewProp_CollisionBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxCollider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_IsMeetCole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxCollider_Statics::NewProp_CollisionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxCollider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxCollider>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxCollider_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoxCollider, ABoxCollider::StaticClass, TEXT("ABoxCollider"), &Z_Registration_Info_UClass_ABoxCollider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxCollider), 2480679100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_3557117590(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
