// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/Objective/ObjectivePanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectivePanel() {}

// Begin Cross Module References
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UObjectivePanel();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UObjectivePanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class UObjectivePanel Function InfoText
struct Z_Construct_UFunction_UObjectivePanel_InfoText_Statics
{
	struct ObjectivePanel_eventInfoText_Parms
	{
		FText TempText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | Activity | Objective" },
		{ "ModuleRelativePath", "Public/UserInterface/Objective/ObjectivePanel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TempText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::NewProp_TempText = { "TempText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectivePanel_eventInfoText_Parms, TempText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::NewProp_TempText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectivePanel, nullptr, "InfoText", nullptr, nullptr, Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::ObjectivePanel_eventInfoText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::ObjectivePanel_eventInfoText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectivePanel_InfoText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectivePanel_InfoText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectivePanel::execInfoText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TempText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InfoText(Z_Param_Out_TempText);
	P_NATIVE_END;
}
// End Class UObjectivePanel Function InfoText

// Begin Class UObjectivePanel Function SetInfoText
struct Z_Construct_UFunction_UObjectivePanel_SetInfoText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event | Activity | Objective" },
		{ "ModuleRelativePath", "Public/UserInterface/Objective/ObjectivePanel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectivePanel_SetInfoText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectivePanel, nullptr, "SetInfoText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectivePanel_SetInfoText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectivePanel_SetInfoText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UObjectivePanel_SetInfoText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectivePanel_SetInfoText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectivePanel::execSetInfoText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInfoText();
	P_NATIVE_END;
}
// End Class UObjectivePanel Function SetInfoText

// Begin Class UObjectivePanel
void UObjectivePanel::StaticRegisterNativesUObjectivePanel()
{
	UClass* Class = UObjectivePanel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InfoText", &UObjectivePanel::execInfoText },
		{ "SetInfoText", &UObjectivePanel::execSetInfoText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectivePanel);
UClass* Z_Construct_UClass_UObjectivePanel_NoRegister()
{
	return UObjectivePanel::StaticClass();
}
struct Z_Construct_UClass_UObjectivePanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/Objective/ObjectivePanel.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Objective/ObjectivePanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextContent_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Objective/ObjectivePanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveText_MetaData[] = {
		{ "Category", "Event | Activity | Objective" },
		{ "ModuleRelativePath", "Public/UserInterface/Objective/ObjectivePanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFindCole_MetaData[] = {
		{ "Category", "Event | Activity | Objective" },
		{ "ModuleRelativePath", "Public/UserInterface/Objective/ObjectivePanel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextContent;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ActiveText;
	static void NewProp_bIsFindCole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFindCole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectivePanel_InfoText, "InfoText" }, // 28699887
		{ &Z_Construct_UFunction_UObjectivePanel_SetInfoText, "SetInfoText" }, // 1760737046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectivePanel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectivePanel_Statics::NewProp_TextContent = { "TextContent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectivePanel, TextContent), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextContent_MetaData), NewProp_TextContent_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UObjectivePanel_Statics::NewProp_ActiveText = { "ActiveText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectivePanel, ActiveText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveText_MetaData), NewProp_ActiveText_MetaData) };
void Z_Construct_UClass_UObjectivePanel_Statics::NewProp_bIsFindCole_SetBit(void* Obj)
{
	((UObjectivePanel*)Obj)->bIsFindCole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectivePanel_Statics::NewProp_bIsFindCole = { "bIsFindCole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectivePanel), &Z_Construct_UClass_UObjectivePanel_Statics::NewProp_bIsFindCole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFindCole_MetaData), NewProp_bIsFindCole_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectivePanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectivePanel_Statics::NewProp_TextContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectivePanel_Statics::NewProp_ActiveText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectivePanel_Statics::NewProp_bIsFindCole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectivePanel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectivePanel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectivePanel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectivePanel_Statics::ClassParams = {
	&UObjectivePanel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UObjectivePanel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectivePanel_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectivePanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectivePanel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectivePanel()
{
	if (!Z_Registration_Info_UClass_UObjectivePanel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectivePanel.OuterSingleton, Z_Construct_UClass_UObjectivePanel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectivePanel.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<UObjectivePanel>()
{
	return UObjectivePanel::StaticClass();
}
UObjectivePanel::UObjectivePanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectivePanel);
UObjectivePanel::~UObjectivePanel() {}
// End Class UObjectivePanel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Objective_ObjectivePanel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectivePanel, UObjectivePanel::StaticClass, TEXT("UObjectivePanel"), &Z_Registration_Info_UClass_UObjectivePanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectivePanel), 271838115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Objective_ObjectivePanel_h_2338248127(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Objective_ObjectivePanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_Objective_ObjectivePanel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
