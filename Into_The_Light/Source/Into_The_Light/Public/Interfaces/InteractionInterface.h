// Fill out your copyright notice in the Description page of Project Settings. copyright EKENLOF

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractionInterface.generated.h"

class AFirstPersonCharacter;

UENUM()
enum class EInteractbleType : uint8
{
	PickUp UMETA(DisplayName = "PickUp"), // Items + more
	NonPlayerCharacter UMETA(DisplayName = "NonPlayerCharacter"), // AI Cole + more
	Object UMETA(DisplayName = "Object"), // Doors Objects + more
	Toggle UMETA(DisplayName = "Toggle"), // Buttons switches + more
	Container UMETA(DisplayName = "Container") //
};

USTRUCT()
struct FInteractableData
{
	GENERATED_USTRUCT_BODY()

	FInteractableData() :
		InteractbleType(EInteractbleType::PickUp),
		Name(FText::GetEmpty()),
		Action(FText::GetEmpty()),
		Quantity(0),
		InteractionDuration(0.0f)
	{
		
	};

	UPROPERTY(EditInstanceOnly)
	EInteractbleType InteractbleType;

	UPROPERTY(EditInstanceOnly)
	FText Name;

	UPROPERTY(EditInstanceOnly)
	FText Action;

	UPROPERTY(EditInstanceOnly) // Used for PickUp Only
	int8 Quantity;

	UPROPERTY(EditInstanceOnly) // Things using interaction timers.
	float InteractionDuration;
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

class INTO_THE_LIGHT_API IInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BeginFocus();
	virtual void EndFocus();
	virtual void BeginInteract();
	virtual void EndInteract();
	virtual void Interact(AFirstPersonCharacter* PlayerCharacter);

	FInteractableData InteractebleData;
};
