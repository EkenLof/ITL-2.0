// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/MainHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AMainHUD();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AMainHUD_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInteractionWidget_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class AMainHUD
void AMainHUD::StaticRegisterNativesAMainHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainHUD);
UClass* Z_Construct_UClass_AMainHUD_NoRegister()
{
	return AMainHUD::StaticClass();
}
struct Z_Construct_UClass_AMainHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UserInterface/MainHUD.h" },
		{ "ModuleRelativePath", "Public/UserInterface/MainHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/UserInterface/MainHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/UserInterface/MainHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/MainHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/MainHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainHUD_Statics::NewProp_MainMenuClass = { "MainMenuClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainHUD, MainMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuClass_MetaData), NewProp_MainMenuClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainHUD_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainHUD, InteractionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidgetClass_MetaData), NewProp_InteractionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainHUD_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainHUD, MainMenuWidget), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidget_MetaData), NewProp_MainMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainHUD_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainHUD, InteractionWidget), Z_Construct_UClass_UInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidget_MetaData), NewProp_InteractionWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainHUD_Statics::NewProp_MainMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainHUD_Statics::NewProp_InteractionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainHUD_Statics::NewProp_MainMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainHUD_Statics::NewProp_InteractionWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainHUD_Statics::ClassParams = {
	&AMainHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainHUD()
{
	if (!Z_Registration_Info_UClass_AMainHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainHUD.OuterSingleton, Z_Construct_UClass_AMainHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainHUD.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<AMainHUD>()
{
	return AMainHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainHUD);
AMainHUD::~AMainHUD() {}
// End Class AMainHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_MainHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainHUD, AMainHUD::StaticClass, TEXT("AMainHUD"), &Z_Registration_Info_UClass_AMainHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainHUD), 2944738122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_MainHUD_h_4252442651(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_MainHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_MainHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
