// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Interfaces/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	INTO_THE_LIGHT_API UEnum* Z_Construct_UEnum_Into_The_Light_EInteractableType();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractableType;
	static UEnum* EInteractableType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractableType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Into_The_Light_EInteractableType, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("EInteractableType"));
		}
		return Z_Registration_Info_UEnum_EInteractableType.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UEnum* StaticEnum<EInteractableType>()
	{
		return EInteractableType_StaticEnum();
	}
	struct Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::Enumerators[] = {
		{ "EInteractableType::PickUp", (int64)EInteractableType::PickUp },
		{ "EInteractableType::NonPlayerCharacter", (int64)EInteractableType::NonPlayerCharacter },
		{ "EInteractableType::Object", (int64)EInteractableType::Object },
		{ "EInteractableType::Toggle", (int64)EInteractableType::Toggle },
		{ "EInteractableType::Container", (int64)EInteractableType::Container },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::Enum_MetaDataParams[] = {
		{ "Container.Comment", "// Buttons switches + more\n" },
		{ "Container.DisplayName", "Container" },
		{ "Container.Name", "EInteractableType::Container" },
		{ "Container.ToolTip", "Buttons switches + more" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
		{ "NonPlayerCharacter.Comment", "// Items + more\n" },
		{ "NonPlayerCharacter.DisplayName", "NonPlayerCharacter" },
		{ "NonPlayerCharacter.Name", "EInteractableType::NonPlayerCharacter" },
		{ "NonPlayerCharacter.ToolTip", "Items + more" },
		{ "Object.Comment", "// AI Cole + more\n" },
		{ "Object.DisplayName", "Object" },
		{ "Object.Name", "EInteractableType::Object" },
		{ "Object.ToolTip", "AI Cole + more" },
		{ "PickUp.DisplayName", "PickUp" },
		{ "PickUp.Name", "EInteractableType::PickUp" },
		{ "Toggle.Comment", "// Doors Objects + more\n" },
		{ "Toggle.DisplayName", "Toggle" },
		{ "Toggle.Name", "EInteractableType::Toggle" },
		{ "Toggle.ToolTip", "Doors Objects + more" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Into_The_Light,
		nullptr,
		"EInteractableType",
		"EInteractableType",
		Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Into_The_Light_EInteractableType()
	{
		if (!Z_Registration_Info_UEnum_EInteractableType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractableType.InnerSingleton, Z_Construct_UEnum_Into_The_Light_EInteractableType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractableType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractableData;
class UScriptStruct* FInteractableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractableData, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("InteractableData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FInteractableData>()
{
	return FInteractableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractableType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractableType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractableData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType = { "InteractableType", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, InteractableType), Z_Construct_UEnum_Into_The_Light_EInteractableType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_MetaData), Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_MetaData) }; // 3993071681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, Action), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "InteractableData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used for PickUp Only\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for PickUp Only" },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity_MetaData), Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration_MetaData[] = {
		{ "Category", "InteractableData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Things using interaction timers.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Things using interaction timers." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration = { "InteractionDuration", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, InteractionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration_MetaData), Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
		nullptr,
		&NewStructOps,
		"InteractableData",
		Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers),
		sizeof(FInteractableData),
		alignof(FInteractableData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInteractableData()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton, Z_Construct_UScriptStruct_FInteractableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton;
	}
	void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionInterface);
	UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
	{
		return UInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
		&UInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractionInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<UInteractionInterface>()
	{
		return UInteractionInterface::StaticClass();
	}
	UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
	UInteractionInterface::~UInteractionInterface() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo[] = {
		{ EInteractableType_StaticEnum, TEXT("EInteractableType"), &Z_Registration_Info_UEnum_EInteractableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3993071681U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo[] = {
		{ FInteractableData::StaticStruct, Z_Construct_UScriptStruct_FInteractableData_Statics::NewStructOps, TEXT("InteractableData"), &Z_Registration_Info_UScriptStruct_InteractableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractableData), 3490317016U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 1996588132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_1024255848(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
