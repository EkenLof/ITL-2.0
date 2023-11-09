// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Into_The_Light/Public/Components/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryComponent();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	INTO_THE_LIGHT_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	INTO_THE_LIGHT_API UEnum* Z_Construct_UEnum_Into_The_Light_EItemAddResult();
	INTO_THE_LIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult();
	UPackage* Z_Construct_UPackage__Script_Into_The_Light();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemAddResult;
	static UEnum* EItemAddResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemAddResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemAddResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Into_The_Light_EItemAddResult, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("EItemAddResult"));
		}
		return Z_Registration_Info_UEnum_EItemAddResult.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UEnum* StaticEnum<EItemAddResult>()
	{
		return EItemAddResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::Enumerators[] = {
		{ "EItemAddResult::IAR_NoItemAdded", (int64)EItemAddResult::IAR_NoItemAdded },
		{ "EItemAddResult::IAR_PartialAmountItemAdded", (int64)EItemAddResult::IAR_PartialAmountItemAdded },
		{ "EItemAddResult::IAR_AllItemAdded", (int64)EItemAddResult::IAR_AllItemAdded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IAR_AllItemAdded.DisplayName", "All of item added" },
		{ "IAR_AllItemAdded.Name", "EItemAddResult::IAR_AllItemAdded" },
		{ "IAR_NoItemAdded.DisplayName", "No item added" },
		{ "IAR_NoItemAdded.Name", "EItemAddResult::IAR_NoItemAdded" },
		{ "IAR_PartialAmountItemAdded.DisplayName", "Partial amount of item added" },
		{ "IAR_PartialAmountItemAdded.Name", "EItemAddResult::IAR_PartialAmountItemAdded" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Into_The_Light,
		nullptr,
		"EItemAddResult",
		"EItemAddResult",
		Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Into_The_Light_EItemAddResult()
	{
		if (!Z_Registration_Info_UEnum_EItemAddResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemAddResult.InnerSingleton, Z_Construct_UEnum_Into_The_Light_EItemAddResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemAddResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAddResult;
class UScriptStruct* FItemAddResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAddResult, (UObject*)Z_Construct_UPackage__Script_Into_The_Light(), TEXT("ItemAddResult"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton;
}
template<> INTO_THE_LIGHT_API UScriptStruct* StaticStruct<FItemAddResult>()
{
	return FItemAddResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemAddResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualAmountAdded_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActualAmountAdded;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperationResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ResultMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAddResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAddResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ActualAmountAdded_MetaData[] = {
		{ "Category", "Item Add Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actual amount of the item that was added to the inventory\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual amount of the item that was added to the inventory" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ActualAmountAdded = { "ActualAmountAdded", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, ActualAmountAdded), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ActualAmountAdded_MetaData), Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ActualAmountAdded_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult_MetaData[] = {
		{ "Category", "Item Add Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum representing the end state of an add item Operation\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the end state of an add item Operation" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult = { "OperationResult", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, OperationResult), Z_Construct_UEnum_Into_The_Light_EItemAddResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult_MetaData), Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult_MetaData) }; // 1972502329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ResultMessage_MetaData[] = {
		{ "Category", "Item Add Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Info message that can be passed with the result\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Info message that can be passed with the result" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ResultMessage = { "ResultMessage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, ResultMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ResultMessage_MetaData), Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ResultMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ActualAmountAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ResultMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAddResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
		nullptr,
		&NewStructOps,
		"ItemAddResult",
		Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers),
		sizeof(FItemAddResult),
		alignof(FItemAddResult),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton, Z_Construct_UScriptStruct_FItemAddResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSetWeightCapacity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewWeightCapacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeightCapacity(Z_Param_NewWeightCapacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSetSlotsCapacity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSlotsCapacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlotsCapacity(Z_Param_NewSlotsCapacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetInventoryContents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItemBase*>*)Z_Param__Result=P_THIS->GetInventoryContents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetSlotCapacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSlotCapacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetWeightCapacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeightCapacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetInventoryTotalWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInventoryTotalWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSplitExistingStack)
	{
		P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_AmountToSplit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SplitExistingStack(Z_Param_ItemIn,Z_Param_AmountToSplit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveAmountOfItem)
	{
		P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
		P_GET_PROPERTY(FIntProperty,Z_Param_DesiredAmountToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveAmountOfItem(Z_Param_ItemIn,Z_Param_DesiredAmountToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveSingleInstanceOfItem)
	{
		P_GET_OBJECT(UItemBase,Z_Param_ItemToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSingleInstanceOfItem(Z_Param_ItemToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execFindNextPartialStack)
	{
		P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemBase**)Z_Param__Result=P_THIS->FindNextPartialStack(Z_Param_ItemIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execFindNextItemByID)
	{
		P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemBase**)Z_Param__Result=P_THIS->FindNextItemByID(Z_Param_ItemIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execFindMatchingItem)
	{
		P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemBase**)Z_Param__Result=P_THIS->FindMatchingItem(Z_Param_ItemIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execHandleAddItem)
	{
		P_GET_OBJECT(UItemBase,Z_Param_InputItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemAddResult*)Z_Param__Result=P_THIS->HandleAddItem(Z_Param_InputItem);
		P_NATIVE_END;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindMatchingItem", &UInventoryComponent::execFindMatchingItem },
			{ "FindNextItemByID", &UInventoryComponent::execFindNextItemByID },
			{ "FindNextPartialStack", &UInventoryComponent::execFindNextPartialStack },
			{ "GetInventoryContents", &UInventoryComponent::execGetInventoryContents },
			{ "GetInventoryTotalWeight", &UInventoryComponent::execGetInventoryTotalWeight },
			{ "GetSlotCapacity", &UInventoryComponent::execGetSlotCapacity },
			{ "GetWeightCapacity", &UInventoryComponent::execGetWeightCapacity },
			{ "HandleAddItem", &UInventoryComponent::execHandleAddItem },
			{ "RemoveAmountOfItem", &UInventoryComponent::execRemoveAmountOfItem },
			{ "RemoveSingleInstanceOfItem", &UInventoryComponent::execRemoveSingleInstanceOfItem },
			{ "SetSlotsCapacity", &UInventoryComponent::execSetSlotsCapacity },
			{ "SetWeightCapacity", &UInventoryComponent::execSetWeightCapacity },
			{ "SplitExistingStack", &UInventoryComponent::execSplitExistingStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics
	{
		struct InventoryComponent_eventFindMatchingItem_Parms
		{
			UItemBase* ItemIn;
			UItemBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindMatchingItem_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindMatchingItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ItemIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindMatchingItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::InventoryComponent_eventFindMatchingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::InventoryComponent_eventFindMatchingItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_FindMatchingItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics
	{
		struct InventoryComponent_eventFindNextItemByID_Parms
		{
			UItemBase* ItemIn;
			UItemBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextItemByID_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextItemByID_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ItemIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindNextItemByID", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::InventoryComponent_eventFindNextItemByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::InventoryComponent_eventFindNextItemByID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_FindNextItemByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics
	{
		struct InventoryComponent_eventFindNextPartialStack_Parms
		{
			UItemBase* ItemIn;
			UItemBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextPartialStack_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextPartialStack_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ItemIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindNextPartialStack", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::InventoryComponent_eventFindNextPartialStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::InventoryComponent_eventFindNextPartialStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics
	{
		struct InventoryComponent_eventGetInventoryContents_Parms
		{
			TArray<UItemBase*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventoryContents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventoryContents", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::InventoryComponent_eventGetInventoryContents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::InventoryComponent_eventGetInventoryContents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventoryContents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics
	{
		struct InventoryComponent_eventGetInventoryTotalWeight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventoryTotalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventoryTotalWeight", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::InventoryComponent_eventGetInventoryTotalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::InventoryComponent_eventGetInventoryTotalWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics
	{
		struct InventoryComponent_eventGetSlotCapacity_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetSlotCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetSlotCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::InventoryComponent_eventGetSlotCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::InventoryComponent_eventGetSlotCapacity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics
	{
		struct InventoryComponent_eventGetWeightCapacity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetWeightCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetWeightCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::InventoryComponent_eventGetWeightCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::InventoryComponent_eventGetWeightCapacity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics
	{
		struct InventoryComponent_eventHandleAddItem_Parms
		{
			UItemBase* InputItem;
			FItemAddResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputItem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_InputItem = { "InputItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventHandleAddItem_Parms, InputItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventHandleAddItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemAddResult, METADATA_PARAMS(0, nullptr) }; // 1396808431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_InputItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "HandleAddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::InventoryComponent_eventHandleAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::InventoryComponent_eventHandleAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_HandleAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics
	{
		struct InventoryComponent_eventRemoveAmountOfItem_Parms
		{
			UItemBase* ItemIn;
			int32 DesiredAmountToRemove;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredAmountToRemove;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveAmountOfItem_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_DesiredAmountToRemove = { "DesiredAmountToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveAmountOfItem_Parms, DesiredAmountToRemove), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveAmountOfItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ItemIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_DesiredAmountToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveAmountOfItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::InventoryComponent_eventRemoveAmountOfItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::InventoryComponent_eventRemoveAmountOfItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics
	{
		struct InventoryComponent_eventRemoveSingleInstanceOfItem_Parms
		{
			UItemBase* ItemToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::NewProp_ItemToRemove = { "ItemToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveSingleInstanceOfItem_Parms, ItemToRemove), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::NewProp_ItemToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveSingleInstanceOfItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::InventoryComponent_eventRemoveSingleInstanceOfItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::InventoryComponent_eventRemoveSingleInstanceOfItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics
	{
		struct InventoryComponent_eventSetSlotsCapacity_Parms
		{
			int32 NewSlotsCapacity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSlotsCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotsCapacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::NewProp_NewSlotsCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::NewProp_NewSlotsCapacity = { "NewSlotsCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSetSlotsCapacity_Parms, NewSlotsCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::NewProp_NewSlotsCapacity_MetaData), Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::NewProp_NewSlotsCapacity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::NewProp_NewSlotsCapacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setters\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setters" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetSlotsCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::InventoryComponent_eventSetSlotsCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::InventoryComponent_eventSetSlotsCapacity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics
	{
		struct InventoryComponent_eventSetWeightCapacity_Parms
		{
			int32 NewWeightCapacity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWeightCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewWeightCapacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity = { "NewWeightCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSetWeightCapacity_Parms, NewWeightCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity_MetaData), Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetWeightCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::InventoryComponent_eventSetWeightCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::InventoryComponent_eventSetWeightCapacity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics
	{
		struct InventoryComponent_eventSplitExistingStack_Parms
		{
			UItemBase* ItemIn;
			int32 AmountToSplit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountToSplit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToSplit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSplitExistingStack_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_AmountToSplit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_AmountToSplit = { "AmountToSplit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSplitExistingStack_Parms, AmountToSplit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_AmountToSplit_MetaData), Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_AmountToSplit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_ItemIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_AmountToSplit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SplitExistingStack", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::InventoryComponent_eventSplitExistingStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::InventoryComponent_eventSplitExistingStack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_SplitExistingStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryTotalWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryTotalWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWeightCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryWeightCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotsCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotsCapacity;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InventoryContents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryContents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryContents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Into_The_Light,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_FindMatchingItem, "FindMatchingItem" }, // 1705506383
		{ &Z_Construct_UFunction_UInventoryComponent_FindNextItemByID, "FindNextItemByID" }, // 2010528931
		{ &Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack, "FindNextPartialStack" }, // 3917183983
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventoryContents, "GetInventoryContents" }, // 2633306152
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight, "GetInventoryTotalWeight" }, // 658882350
		{ &Z_Construct_UFunction_UInventoryComponent_GetSlotCapacity, "GetSlotCapacity" }, // 112682389
		{ &Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity, "GetWeightCapacity" }, // 84896101
		{ &Z_Construct_UFunction_UInventoryComponent_HandleAddItem, "HandleAddItem" }, // 220226008
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem, "RemoveAmountOfItem" }, // 1926827965
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem, "RemoveSingleInstanceOfItem" }, // 2247808760
		{ &Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity, "SetSlotsCapacity" }, // 2678574409
		{ &Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity, "SetWeightCapacity" }, // 2497404314
		{ &Z_Construct_UFunction_UInventoryComponent_SplitExistingStack, "SplitExistingStack" }, // 2527388878
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryTotalWeight_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryTotalWeight = { "InventoryTotalWeight", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryTotalWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryTotalWeight_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryTotalWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryWeightCapacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryWeightCapacity = { "InventoryWeightCapacity", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryWeightCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryWeightCapacity_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryWeightCapacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlotsCapacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlotsCapacity = { "InventorySlotsCapacity", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySlotsCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlotsCapacity_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlotsCapacity_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents_Inner = { "InventoryContents", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents = { "InventoryContents", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryContents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryTotalWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryWeightCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlotsCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> INTO_THE_LIGHT_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	UInventoryComponent::~UInventoryComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::EnumInfo[] = {
		{ EItemAddResult_StaticEnum, TEXT("EItemAddResult"), &Z_Registration_Info_UEnum_EItemAddResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1972502329U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo[] = {
		{ FItemAddResult::StaticStruct, Z_Construct_UScriptStruct_FItemAddResult_Statics::NewStructOps, TEXT("ItemAddResult"), &Z_Registration_Info_UScriptStruct_ItemAddResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAddResult), 1396808431U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 3100822386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_2173331933(TEXT("/Script/Into_The_Light"),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_EkenLof_Games_ITL_2_0_Into_The_Light_Source_Into_The_Light_Public_Components_InventoryComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
