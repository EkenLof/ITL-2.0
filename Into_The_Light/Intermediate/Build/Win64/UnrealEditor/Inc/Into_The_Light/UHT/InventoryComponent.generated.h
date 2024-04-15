// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
struct FItemAddResult;
#ifdef INTO_THE_LIGHT_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INTO_THE_LIGHT_InventoryComponent_generated_h

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAddResult_Statics; \
	INTO_THE_LIGHT_API static class UScriptStruct* StaticStruct();


template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<struct FItemAddResult>();

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_SPARSE_DATA
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWeightCapacity); \
	DECLARE_FUNCTION(execSetSlotsCapacity); \
	DECLARE_FUNCTION(execGetInventoryContents); \
	DECLARE_FUNCTION(execGetSlotCapacity); \
	DECLARE_FUNCTION(execGetWeightCapacity); \
	DECLARE_FUNCTION(execGetInventoryTotalWeight); \
	DECLARE_FUNCTION(execSplitExistingStack); \
	DECLARE_FUNCTION(execRemoveAmountOfItem); \
	DECLARE_FUNCTION(execRemoveSingleInstanceOfItem); \
	DECLARE_FUNCTION(execFindNextPartialStack); \
	DECLARE_FUNCTION(execFindNextItemByID); \
	DECLARE_FUNCTION(execFindMatchingItem); \
	DECLARE_FUNCTION(execHandleAddItem); \
	DECLARE_FUNCTION(execExposeItem);


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_ACCESSORS
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Into_The_Light"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_67_PROLOG
#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_SPARSE_DATA \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_ACCESSORS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_INCLASS_NO_PURE_DECLS \
	FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTO_THE_LIGHT_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h


#define FOREACH_ENUM_EITEMADDRESULT(op) \
	op(EItemAddResult::IAR_NoItemAdded) \
	op(EItemAddResult::IAR_PartialAmountItemAdded) \
	op(EItemAddResult::IAR_AllItemAdded) 

enum class EItemAddResult : uint8;
template<> struct TIsUEnumClass<EItemAddResult> { enum { Value = true }; };
template<> INTO_THE_LIGHT_API UEnum* StaticEnum<EItemAddResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
