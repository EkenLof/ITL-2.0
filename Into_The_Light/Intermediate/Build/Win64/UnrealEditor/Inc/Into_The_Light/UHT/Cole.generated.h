// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Cole.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTO_THE_LIGHT_Cole_generated_h
#error "Cole.generated.h already included, missing '#pragma once' in Cole.h"
#endif
#define INTO_THE_LIGHT_Cole_generated_h

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execColeMeet);


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACole(); \
	friend struct Z_Construct_UClass_ACole_Statics; \
public: \
	DECLARE_CLASS(ACole, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Into_The_Light"), NO_API) \
	DECLARE_SERIALIZER(ACole)


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACole(ACole&&); \
	ACole(const ACole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACole); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACole) \
	NO_API virtual ~ACole();


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_9_PROLOG
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_12_INCLASS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTO_THE_LIGHT_API UClass* StaticClass<class ACole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Characters_Cole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
