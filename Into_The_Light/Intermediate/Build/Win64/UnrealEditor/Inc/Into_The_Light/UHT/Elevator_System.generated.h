// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/Elevator_System.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTO_THE_LIGHT_Elevator_System_generated_h
#error "Elevator_System.generated.h already included, missing '#pragma once' in Elevator_System.h"
#endif
#define INTO_THE_LIGHT_Elevator_System_generated_h

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execElevatorActive);


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElevator_System(); \
	friend struct Z_Construct_UClass_AElevator_System_Statics; \
public: \
	DECLARE_CLASS(AElevator_System, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Into_The_Light"), NO_API) \
	DECLARE_SERIALIZER(AElevator_System)


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AElevator_System(AElevator_System&&); \
	AElevator_System(const AElevator_System&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElevator_System); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElevator_System); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElevator_System) \
	NO_API virtual ~AElevator_System();


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_9_PROLOG
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_12_INCLASS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTO_THE_LIGHT_API UClass* StaticClass<class AElevator_System>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Gameplay_Elevator_System_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
