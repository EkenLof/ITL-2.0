// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Items/ItemBase.h"
#include "Into_The_Light/Data/ItemDataSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	INTO_THE_LIGHT_API UEnum* Z_Construct_UEnum_Into_The_Light_EItemCategory();
	INTO_THE_LIGHT_API UEnum* Z_Construct_UEnum_Into_The_Light_EItemType();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemStats();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemTextData();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	DEFINE_FUNCTION(UItemBase::execUse)
	{
		P_GET_OBJECT(AFirstPersonCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Use(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemBase::execSetQuantity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuantity(Z_Param_NewQuantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemBase::execIsFullItemStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFullItemStack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemBase::execGetItemSingleWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemSingleWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemBase::execGetItemStackWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemStackWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemBase::execCreateItemCopy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemBase**)Z_Param__Result=P_THIS->CreateItemCopy();
		P_NATIVE_END;
	}
	void UItemBase::StaticRegisterNativesUItemBase()
	{
		UClass* Class = UItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateItemCopy", &UItemBase::execCreateItemCopy },
			{ "GetItemSingleWeight", &UItemBase::execGetItemSingleWeight },
			{ "GetItemStackWeight", &UItemBase::execGetItemStackWeight },
			{ "IsFullItemStack", &UItemBase::execIsFullItemStack },
			{ "SetQuantity", &UItemBase::execSetQuantity },
			{ "Use", &UItemBase::execUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics
	{
		struct ItemBase_eventCreateItemCopy_Parms
		{
			UItemBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventCreateItemCopy_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "CreateItemCopy", nullptr, nullptr, Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::ItemBase_eventCreateItemCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::ItemBase_eventCreateItemCopy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemBase_CreateItemCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_CreateItemCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics
	{
		struct ItemBase_eventGetItemSingleWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemSingleWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemSingleWeight", nullptr, nullptr, Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::ItemBase_eventGetItemSingleWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::ItemBase_eventGetItemSingleWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemBase_GetItemSingleWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemSingleWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics
	{
		struct ItemBase_eventGetItemStackWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventGetItemStackWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "GetItemStackWeight", nullptr, nullptr, Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::ItemBase_eventGetItemStackWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::ItemBase_eventGetItemStackWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemBase_GetItemStackWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_GetItemStackWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics
	{
		struct ItemBase_eventIsFullItemStack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemBase_eventIsFullItemStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemBase_eventIsFullItemStack_Parms), &Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "IsFullItemStack", nullptr, nullptr, Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::ItemBase_eventIsFullItemStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::ItemBase_eventIsFullItemStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemBase_IsFullItemStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_IsFullItemStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemBase_SetQuantity_Statics
	{
		struct ItemBase_eventSetQuantity_Parms
		{
			int32 NewQuantity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewQuantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_SetQuantity_Statics::NewProp_NewQuantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemBase_SetQuantity_Statics::NewProp_NewQuantity = { "NewQuantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventSetQuantity_Parms, NewQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_SetQuantity_Statics::NewProp_NewQuantity_MetaData), Z_Construct_UFunction_UItemBase_SetQuantity_Statics::NewProp_NewQuantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_SetQuantity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_SetQuantity_Statics::NewProp_NewQuantity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_SetQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_SetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "SetQuantity", nullptr, nullptr, Z_Construct_UFunction_UItemBase_SetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_SetQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_SetQuantity_Statics::ItemBase_eventSetQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_SetQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_SetQuantity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_SetQuantity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemBase_SetQuantity_Statics::ItemBase_eventSetQuantity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemBase_SetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_SetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemBase_Use_Statics
	{
		struct ItemBase_eventUse_Parms
		{
			AFirstPersonCharacter* Character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemBase_Use_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventUse_Parms, Character), Z_Construct_UClass_AFirstPersonCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBase_Use_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBase_Use_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBase_Use_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBase_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBase, nullptr, "Use", nullptr, nullptr, Z_Construct_UFunction_UItemBase_Use_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Use_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemBase_Use_Statics::ItemBase_eventUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemBase_Use_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBase_Use_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UItemBase_Use_Statics::ItemBase_eventUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UItemBase_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemBase_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemBase);
	UClass* Z_Construct_UClass_UItemBase_NoRegister()
	{
		return UItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCatagory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemCatagory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCatagory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTextData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTextData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemNumData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemNumData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemBase_CreateItemCopy, "CreateItemCopy" }, // 3007563022
		{ &Z_Construct_UFunction_UItemBase_GetItemSingleWeight, "GetItemSingleWeight" }, // 709788436
		{ &Z_Construct_UFunction_UItemBase_GetItemStackWeight, "GetItemStackWeight" }, // 2696031960
		{ &Z_Construct_UFunction_UItemBase_IsFullItemStack, "IsFullItemStack" }, // 1758484150
		{ &Z_Construct_UFunction_UItemBase_SetQuantity, "SetQuantity" }, // 1937616800
		{ &Z_Construct_UFunction_UItemBase_Use, "Use" }, // 1443577662
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ItemBase.h" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_OwningInventory_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//**********************************************\n//            VARIBLES & PROPERTIES\n//**********************************************\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VARIBLES & PROPERTIES" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_OwningInventory = { "OwningInventory", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, OwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_OwningInventory_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_OwningInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_Quantity_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_Quantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_ID_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemCatagory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_ItemCatagory_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemCatagory = { "ItemCatagory", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemCatagory), Z_Construct_UEnum_Into_The_Light_EItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_ItemCatagory_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_ItemCatagory_MetaData) }; // 3351110760
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemType), Z_Construct_UEnum_Into_The_Light_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_ItemType_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_ItemType_MetaData) }; // 172931227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_ItemStats_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemStats = { "ItemStats", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemStats), Z_Construct_UScriptStruct_FItemStats, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_ItemStats_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_ItemStats_MetaData) }; // 3645473652
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_ItemTextData_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemTextData = { "ItemTextData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemTextData), Z_Construct_UScriptStruct_FItemTextData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_ItemTextData_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_ItemTextData_MetaData) }; // 2851892142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_ItemNumData_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemNumData = { "ItemNumData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemNumData), Z_Construct_UScriptStruct_FItemNumericData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_ItemNumData_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_ItemNumData_MetaData) }; // 1343459375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBase_Statics::NewProp_ItemAssetData_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/ItemBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemBase_Statics::NewProp_ItemAssetData = { "ItemAssetData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemBase, ItemAssetData), Z_Construct_UScriptStruct_FItemAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::NewProp_ItemAssetData_MetaData), Z_Construct_UClass_UItemBase_Statics::NewProp_ItemAssetData_MetaData) }; // 50173059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_OwningInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemCatagory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemCatagory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemTextData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemNumData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemBase_Statics::NewProp_ItemAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemBase_Statics::ClassParams = {
		&UItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemBase()
	{
		if (!Z_Registration_Info_UClass_UItemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemBase.OuterSingleton, Z_Construct_UClass_UItemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemBase.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<UItemBase>()
	{
		return UItemBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBase);
	UItemBase::~UItemBase() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemBase, UItemBase::StaticClass, TEXT("UItemBase"), &Z_Registration_Info_UClass_UItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemBase), 1065400912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_4132799463(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Items_ItemBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
