// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Audio/ActorSoundSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSoundSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AActorSoundSystem();
INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AActorSoundSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References

// Begin Class AActorSoundSystem
void AActorSoundSystem::StaticRegisterNativesAActorSoundSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorSoundSystem);
UClass* Z_Construct_UClass_AActorSoundSystem_NoRegister()
{
	return AActorSoundSystem::StaticClass();
}
struct Z_Construct_UClass_AActorSoundSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Audio/ActorSoundSystem.h" },
		{ "ModuleRelativePath", "Public/Audio/ActorSoundSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionPhone_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Event | Assign | Sounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Sounds --- //\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/ActorSoundSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Sounds ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceptionPhone_SoundCue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Event | Assign | Sounds" },
		{ "ModuleRelativePath", "Public/Audio/ActorSoundSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionPhone_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceptionPhone_SoundCue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorSoundSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorSoundSystem_Statics::NewProp_ReceptionPhone_AudioComponent = { "ReceptionPhone_AudioComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorSoundSystem, ReceptionPhone_AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceptionPhone_AudioComponent_MetaData), NewProp_ReceptionPhone_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorSoundSystem_Statics::NewProp_ReceptionPhone_SoundCue = { "ReceptionPhone_SoundCue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorSoundSystem, ReceptionPhone_SoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceptionPhone_SoundCue_MetaData), NewProp_ReceptionPhone_SoundCue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorSoundSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorSoundSystem_Statics::NewProp_ReceptionPhone_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorSoundSystem_Statics::NewProp_ReceptionPhone_SoundCue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorSoundSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorSoundSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorSoundSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorSoundSystem_Statics::ClassParams = {
	&AActorSoundSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActorSoundSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorSoundSystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorSoundSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorSoundSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorSoundSystem()
{
	if (!Z_Registration_Info_UClass_AActorSoundSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorSoundSystem.OuterSingleton, Z_Construct_UClass_AActorSoundSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorSoundSystem.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UClass* StaticClass<AActorSoundSystem>()
{
	return AActorSoundSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorSoundSystem);
AActorSoundSystem::~AActorSoundSystem() {}
// End Class AActorSoundSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Audio_ActorSoundSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorSoundSystem, AActorSoundSystem::StaticClass, TEXT("AActorSoundSystem"), &Z_Registration_Info_UClass_AActorSoundSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorSoundSystem), 802275863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Audio_ActorSoundSystem_h_589881088(TEXT("/Script/Into_The_Light"),
	Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Audio_ActorSoundSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Audio_ActorSoundSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
