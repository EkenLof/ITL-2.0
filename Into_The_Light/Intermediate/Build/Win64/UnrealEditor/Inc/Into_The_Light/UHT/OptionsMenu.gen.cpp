// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/UserInterface/OptionsMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionsMenu() {}

// Begin Cross Module References
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UOptionsMenu();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UOptionsMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class UOptionsMenu
void UOptionsMenu::StaticRegisterNativesUOptionsMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionsMenu);
UClass* Z_Construct_UClass_UOptionsMenu_NoRegister()
{
	return UOptionsMenu::StaticClass();
}
struct Z_Construct_UClass_UOptionsMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UserInterface/OptionsMenu.h" },
		{ "ModuleRelativePath", "Public/UserInterface/OptionsMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/OptionsMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionsMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsMenu_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptionsMenu, PlayerCharacter), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionsMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsMenu_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionsMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionsMenu_Statics::ClassParams = {
	&UOptionsMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptionsMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionsMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionsMenu()
{
	if (!Z_Registration_Info_UClass_UOptionsMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionsMenu.OuterSingleton, Z_Construct_UClass_UOptionsMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionsMenu.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<UOptionsMenu>()
{
	return UOptionsMenu::StaticClass();
}
UOptionsMenu::UOptionsMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionsMenu);
UOptionsMenu::~UOptionsMenu() {}
// End Class UOptionsMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_OptionsMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionsMenu, UOptionsMenu::StaticClass, TEXT("UOptionsMenu"), &Z_Registration_Info_UClass_UOptionsMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionsMenu), 2983878360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_OptionsMenu_h_3492980835(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_OptionsMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_UserInterface_OptionsMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
