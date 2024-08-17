#include "World/PickUp.h"

#include "Components/InventoryComponent.h"
#include "Items/ItemBase.h"

// Sets default values
APickUp::APickUp()
{
	PrimaryActorTick.bCanEverTick = false;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	PickupMesh->SetSimulatePhysics(true); // Optional
	SetRootComponent(PickupMesh);
}

void APickUp::BeginPlay()
{
	Super::BeginPlay();

	InitializePickup(UItemBase::StaticClass(), ItemQuantity);
}

void APickUp::InitializePickup(const TSubclassOf<UItemBase> BaseClase, const int32 InQuantity)
{
	// OLD
	/*
	if (ItemDataTable && !DesiredItemID.IsNone())
	{
		const FItemData* ItemData = ItemDataTable->FindRow<FItemData>(DesiredItemID, DesiredItemID.ToString());
	*/
	// NEW
	if (!ItemRowHandle.IsNull())
	{
		const FItemData* ItemData = ItemRowHandle.GetRow<FItemData>(ItemRowHandle.RowName.ToString());

		ItemReferance = NewObject<UItemBase>(this, BaseClase);

		ItemReferance->ID = ItemData->ID;
		ItemReferance->ItemCatagory = ItemData->ItemCatagory; // ItemType YT
		ItemReferance->ItemType = ItemData->ItemType;         // ItemQuality YT
		ItemReferance->ItemNumData = ItemData->ItemNumData;
		ItemReferance->ItemTextData = ItemData->ItemTextData;
		ItemReferance->ItemAssetData = ItemData->ItemAssetData;

		InQuantity <= 0 ? ItemReferance->SetQuantity(1) : ItemReferance->SetQuantity(InQuantity);

		PickupMesh->SetStaticMesh(ItemData->ItemAssetData.Mesh);
		
		UpdateInteractableData();
	}
}

void APickUp::InitializeDrop(UItemBase* ItemToDrop, const int32 InQuantity)
{
	ItemReferance = ItemToDrop;
	InQuantity <= 0 ? ItemReferance->SetQuantity(1) : ItemReferance->SetQuantity(InQuantity);
	ItemReferance->ItemNumData.Weight = ItemToDrop->GetItemSingleWeight();
	PickupMesh->SetStaticMesh(ItemToDrop->ItemAssetData.Mesh);
	UpdateInteractableData();
}

void APickUp::UpdateInteractableData()
{
	InstanceInteractableData.InteractableType = EInteractableType::PickUp;
	InstanceInteractableData.Action = ItemReferance->ItemTextData.InteractionText;
	InstanceInteractableData.Name = ItemReferance->ItemTextData.Name;
	InstanceInteractableData.Quantity = ItemReferance->Quantity;
	InteractableData = InstanceInteractableData;
}

void APickUp::BeginFocus() // Looking at Pick-up
{
	if (PickupMesh)
	{
		PickupMesh->SetRenderCustomDepth(true);
	}
}

void APickUp::EndFocus() // Not looking at Pick-up
{
	if (PickupMesh)
	{
		PickupMesh->SetRenderCustomDepth(false);
	}
}

void APickUp::Interact(AFirstPersonCharacter* PlayerCharacter)
{
	if (PlayerCharacter)
	{
		TakePickup(PlayerCharacter);
	}
}

void APickUp::TakePickup(const AFirstPersonCharacter* Taker)
{
	if (!IsPendingKillPending())
	{
		if (ItemReferance)
		{
			if (UInventoryComponent* PlayerInventory = Taker->GetInventory())
			{
				const FItemAddResult AddResult = PlayerInventory->HandleAddItem(ItemReferance);

				switch (AddResult.OperationResult)
				{
				case EItemAddResult::IAR_NoItemAdded:
					break;
				case EItemAddResult::IAR_PartialAmountItemAdded:
					UpdateInteractableData();
					Taker->UpdateInteractionWidget();
					break;
				case EItemAddResult::IAR_AllItemAdded:
					Destroy();
					break;
				}
				UE_LOG(LogTemp, Warning, TEXT("%s"), *AddResult.ResultMessage.ToString());
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Player Invetory component is null!"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Pickup internal item reference was somehow null!"));
		}
	}
}

#if WITH_EDITOR
void APickUp::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName ChangedPropertyName = PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	
	// OLD
	/*
	if (ChangedPropertyName == GET_MEMBER_NAME_CHECKED(APickUp, DesiredItemID))
	{
		if (const FItemData* ItemData = ItemDataTable->FindRow<FItemData>(DesiredItemID, DesiredItemID.ToString()))
		{
			PickupMesh->SetStaticMesh(ItemData->ItemAssetData.Mesh);
		}
	}
	*/

	// NEW
	if (ChangedPropertyName == GET_MEMBER_NAME_CHECKED(FDataTableRowHandle, RowName))
	{
		if (!ItemRowHandle.IsNull())
		{
			const FItemData* ItemData = ItemRowHandle.GetRow<FItemData>(ItemRowHandle.RowName.ToString());
			PickupMesh->SetStaticMesh(ItemData->ItemAssetData.Mesh);
		}
	}
}
#endif
