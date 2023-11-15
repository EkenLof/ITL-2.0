// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ItemDataSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTO_THE_LIGHT_ItemDataSystem_generated_h
#error "ItemDataSystem.generated.h already included, missing '#pragma once' in ItemDataSystem.h"
#endif
#define INTO_THE_LIGHT_ItemDataSystem_generated_h

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStats_Statics; \
	INTO_THE_LIGHT_API static class UScriptStruct* StaticStruct();


template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<struct FItemStats>();

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemTextData_Statics; \
	INTO_THE_LIGHT_API static class UScriptStruct* StaticStruct();


template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<struct FItemTextData>();

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemNumericData_Statics; \
	INTO_THE_LIGHT_API static class UScriptStruct* StaticStruct();


template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<struct FItemNumericData>();

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAssetData_Statics; \
	INTO_THE_LIGHT_API static class UScriptStruct* StaticStruct();


template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<struct FItemAssetData>();

#define FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	INTO_THE_LIGHT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<struct FItemData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Data_ItemDataSystem_h


#define FOREACH_ENUM_EITEMCATEGORY(op) \
	op(EItemCategory::KeyItem) \
	op(EItemCategory::Equipment) \
	op(EItemCategory::Items) \
	op(EItemCategory::Collectibles) 

enum class EItemCategory : uint8;
template<> struct TIsUEnumClass<EItemCategory> { enum { Value = true }; };
template<> INTO_THE_LIGHT_API UEnum* StaticEnum<EItemCategory>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::LeftHand) \
	op(EItemType::RightHand) \
	op(EItemType::Consumable) \
	op(EItemType::Useables) \
	op(EItemType::Item) \
	op(EItemType::Collectibles) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> INTO_THE_LIGHT_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
