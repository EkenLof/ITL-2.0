#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/InteractionInterface.h"
#include "FirstPersonCharacter.generated.h"

class AMainHUD;
class UInventoryComponent;
class UItemBase;

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

	FORCEINLINE bool IsInteracting() const { return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction); };
	FORCEINLINE UInventoryComponent* GetInventory() const { return PlayerInventory; };

	void UpdateInteractionWidget() const;

	void DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);

	bool isFlashlightEquiped;

	bool isWalkingForward;
	bool isWalkingBackward;

	float WalkSpeed;
	float RunSpeed;

protected:
	virtual void BeginPlay() override;
	
	AMainHUD* HUD;

	// --- Player + Movment ---
	UPROPERTY(EditAnywhere)
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

	//---- Inventory - Item - Interaction **Systems** ----
	// --- VARIBLES ---
	UPROPERTY(VisibleAnywhere, Category = "Character | Interaction")
	TScriptInterface<IInteractionInterface> TargetInteractable;

	UPROPERTY(VisibleAnywhere, Category = "Character | Inventory")
	UInventoryComponent* PlayerInventory;

	float InteractionCheckFrequency;
	float InteractionCheckDistance;

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
};



