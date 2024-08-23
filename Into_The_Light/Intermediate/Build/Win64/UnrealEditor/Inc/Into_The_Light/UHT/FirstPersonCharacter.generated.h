// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/FirstPersonCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTO_THE_LIGHT_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define INTO_THE_LIGHT_FirstPersonCharacter_generated_h

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionData_Statics; \
	INTO_THE_LIGHT_API static class UScriptStruct* StaticStruct();


template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<struct FInteractionData>();

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSublevelLoaded); \
	DECLARE_FUNCTION(execUnloadSublevel); \
	DECLARE_FUNCTION(execLoadSublevel);


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Into_The_Light"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstPersonCharacter(AFirstPersonCharacter&&); \
	AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonCharacter) \
	NO_API virtual ~AFirstPersonCharacter();


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_40_PROLOG
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_43_INCLASS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTO_THE_LIGHT_API UClass* StaticClass<class AFirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Player_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
