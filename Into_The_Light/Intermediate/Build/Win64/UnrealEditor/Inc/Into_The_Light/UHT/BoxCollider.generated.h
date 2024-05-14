// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Triggers/BoxCollider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INTO_THE_LIGHT_BoxCollider_generated_h
#error "BoxCollider.generated.h already included, missing '#pragma once' in BoxCollider.h"
#endif
#define INTO_THE_LIGHT_BoxCollider_generated_h

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxCollider(); \
	friend struct Z_Construct_UClass_ABoxCollider_Statics; \
public: \
	DECLARE_CLASS(ABoxCollider, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Into_The_Light"), NO_API) \
	DECLARE_SERIALIZER(ABoxCollider)


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABoxCollider(ABoxCollider&&); \
	ABoxCollider(const ABoxCollider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxCollider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxCollider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxCollider) \
	NO_API virtual ~ABoxCollider();


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_11_PROLOG
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_14_INCLASS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTO_THE_LIGHT_API UClass* StaticClass<class ABoxCollider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Triggers_BoxCollider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
