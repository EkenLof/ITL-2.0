// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/GameplayEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTO_THE_LIGHT_GameplayEvents_generated_h
#error "GameplayEvents.generated.h already included, missing '#pragma once' in GameplayEvents.h"
#endif
#define INTO_THE_LIGHT_GameplayEvents_generated_h

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSublevelLoaded); \
	DECLARE_FUNCTION(execToggleOff); \
	DECLARE_FUNCTION(execToggleOn); \
	DECLARE_FUNCTION(execUnloadSublevel); \
	DECLARE_FUNCTION(execLoadSublevel);


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayEvents(); \
	friend struct Z_Construct_UClass_AGameplayEvents_Statics; \
public: \
	DECLARE_CLASS(AGameplayEvents, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Into_The_Light"), NO_API) \
	DECLARE_SERIALIZER(AGameplayEvents)


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameplayEvents(AGameplayEvents&&); \
	AGameplayEvents(const AGameplayEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayEvents); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameplayEvents) \
	NO_API virtual ~AGameplayEvents();


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_15_PROLOG
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_18_INCLASS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTO_THE_LIGHT_API UClass* StaticClass<class AGameplayEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_GameplayEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
