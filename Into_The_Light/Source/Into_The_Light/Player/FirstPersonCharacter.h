#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/InteractionInterface.h"
#include "FirstPersonCharacter.generated.h"

class AMainHUD;
class UInventoryComponent;
class UItemBase;
class AGameplayEvents;
class ABoxCollider;

USTRUCT()
struct FInteractionData
{
	GENERATED_USTRUCT_BODY()

	FInteractionData() : CurrentInteractable(nullptr), LastInteractionCheckTime(0.0f) {};

	UPROPERTY()
	AActor* CurrentInteractable;

	UPROPERTY()
	float LastInteractionCheckTime;
};

UCLASS()
class INTO_THE_LIGHT_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AFirstPersonCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE ABoxCollider* SetTriggerBox() const { return TriggerBox; };

	FORCEINLINE AGameplayEvents* SetEventStep() const { return EventSteps; };
	FORCEINLINE bool IsInteracting() const { return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction); };
	FORCEINLINE UInventoryComponent* GetInventory() const { return PlayerInventory; };

	void UpdateInteractionWidget() const;

	void DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);

	bool isWalkingForward;
	bool isWalkingBackward;

	float WalkSpeed;
	float RunSpeed;

protected:
	virtual void BeginPlay() override;

	ABoxCollider* TriggerBox;
	
	AMainHUD* HUD;

	AGameplayEvents* EventSteps;

	// --- Player + Movment ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | Camera")
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere)
	class UCharacterMovementComponent* PlayerMovementsValues = GetCharacterMovement();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* FlashlightMesh;

	UPROPERTY(EditAnyWhere)
	class UAnimSequence* WalkForwardAnim;

	UPROPERTY(EditAnyWhere)
	class UAnimSequence* WalkBackwardAnim;

	void MoveForward(float InputValue);
	void MoveSide(float InputValue);

	void Run();
	void Walk();

	void CamTurn(float InputValue);
	void CamLookUp(float InputValue);
	// --- Player + Movment ---

	// Flashlight
	void UseFlashlight();

	// Item Logic
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | ItemLogic")
	bool isFlashlightEquiped;

	//UItemBase* Item;
	//void ItemHandeling();


	//---- Inventory - Item - Interaction **Systems** ----
	// --- VARIBLES ---
	UPROPERTY(VisibleAnywhere, Category = "Character | Interaction")
	TScriptInterface<IInteractionInterface> TargetInteractable;

	UPROPERTY(VisibleAnywhere, Category = "Character | Inventory")
	UInventoryComponent* PlayerInventory;

	UPROPERTY(EditAnywhere)
	float InteractionCheckFrequency;
	UPROPERTY(EditAnywhere)
	float InteractionCheckDistance;

	bool BIsStepActive;

	bool bIsReceptionDoor;
	bool bIsFuseBox;

	bool bIsLookingAtRecDoor;
	bool bIsLookingAtFuBox;

	FTimerHandle TimerHandle_Interaction;
	FInteractionData InteractionData;

	// --- FUNCTIONS ---
	void ToggleMenu();

	void PerformInteractionCheck();
	void FoundInteractable(AActor* NewInteractable);
	void NoInteractableFound();
	void BeginInteract();
	void EndInteract();
	void Interact();

private:
	bool CheckLookAtObject();
	bool CheckLeftMouseButtonDown();
	bool CheckRightMouseButtonDown();
};



