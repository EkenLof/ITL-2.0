#pragma once

#include "Interfaces/InteractionInterface.h"
#include "..\Player/FirstPersonCharacter.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUp.generated.h"

class UDataTable;
class UItemBase;

UCLASS()
class INTO_THE_LIGHT_API APickUp : public AActor, public  IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	APickUp();

	virtual void BeginFocus() override;
	virtual void EndFocus() override;

	void InitializePickup(const TSubclassOf<UItemBase> BaseClase, const int32 inQuantity);

	void InitializeDrop(UItemBase* ItemToDrop, const int32 InQuantity);

	FORCEINLINE UItemBase* GetItemData() { return ItemReferance; }

protected:
	UPROPERTY (VisibleAnywhere, Category = "Pickup | Components")
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditInstanceOnly, Category = "Pickup | Item Initialization")
	UDataTable* ItemDataTable;

	UPROPERTY(EditInstanceOnly, Category = "Pickup | Item Initialization")
	FName DesiredItemID;

	UPROPERTY(VisibleAnywhere, Category = "Pickup | Item Referance")
	UItemBase* ItemReferance;

	UPROPERTY(EditInstanceOnly, Category = "Pickup | Item Initialization")
	int32 ItemQuantity;

	UPROPERTY(VisibleInstanceOnly, Category = "Pickup | Interaction")
	FInteractableData InstanceInteractableData;

	virtual void BeginPlay() override;

	virtual void Interact(AFirstPersonCharacter* PlayerCharacter) override;
	void UpdateInteractableData();
	void TakePickup(const AFirstPersonCharacter* Taker);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif 
};
