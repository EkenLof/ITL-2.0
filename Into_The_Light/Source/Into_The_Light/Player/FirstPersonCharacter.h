#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "Interfaces/InteractionInterface.h"
#include "Components/AudioComponent.h"
#include "FirstPersonCharacter.generated.h"

class AMainHUD;
class UInventoryComponent;
class UItemBase;
class AGameplayEvents;
class ABoxCollider;
class AElevator_System;
class UObjectivePanel;
class AWhiteFace;
class AActorSoundSystem;
class UInventoryItemSlot; // TEST 23-08-2024
class UTextBlock; // TEST 23-08-2024
class UBorder; // TEST 23-08-2024
class UImage; // TEST 23-08-2024
class UDragDropOperation;

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

	FORCEINLINE UObjectivePanel* SetObjective() const { return Objective; };

	FORCEINLINE AActorSoundSystem* GetAudio() const { return ActorSoundSystem; };

	FORCEINLINE ABoxCollider* SetTriggerBox() const { return TriggerBox; };
	//FORCEINLINE AElevator_System* GetInteract() const { return ElevatorSystem; };

	FORCEINLINE AGameplayEvents* SetEventStep() const { return EventSteps; };
	FORCEINLINE bool IsInteracting() const { return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction); };
	FORCEINLINE UInventoryComponent* GetInventory() const { return PlayerInventory; };


	FORCEINLINE void SetItemReference(UItemBase* ItemIn) { ItemReference = ItemIn; };
	FORCEINLINE UItemBase* GetItemReference() const { return ItemReference; };


	FORCEINLINE AWhiteFace* SetWhiteFace() const { return WhiteFace; };

	void UpdateInteractionWidget() const;

	void DropItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);
	//void RemoveItem(UItemBase* ItemToDrop, const int32 QuantityToDrop);

	// Find and assign the ActorSoundSystem
	void InitializeActorSoundSystem();

	UFUNCTION(BlueprintCallable, Category = "Event | SubLevels")
	void LoadSublevel(FName LevelName);

	UFUNCTION(BlueprintCallable, Category = "Event | SubLevels")
	void UnloadSublevel(FName LevelName);

	// TIMER LOGIC
	void StartTimer(float Duration);
	void OnTimerEnd();

	bool isWalkingForward;
	bool isWalkingBackward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsFuse10a; // bIsFuse10a Selected
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsElectricKey; // bIsElectricKey Selected
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsOfficeKey; // bIsOfficeKey Selected
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory | Items")
	bool bIsKeycard; // bIsKeycard Selected

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Value")
	bool bIsObjectiveFlashlight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Value")
	bool bIsObjectiveFuseCollected;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Value")
	bool bIsObjectiveFindElectricKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Value")
	bool bIsObjectiveElectricKeyCollected;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Value")
	bool bIsObjectiveOfficeKeyCollected;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Value")
	bool bIsObjectiveKeycardCollected;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Value")
	bool bIsValueFusePickedUp;

	float WalkSpeed;
	float RunSpeed;


	////////////////////////////////////////////////////////////////
	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot")
	UDragDropOperation* InOperation; 
	/*
	UPROPERTY(VisibleAnywhere)
	UInventoryItemSlot* InventorySlotBeingHovered;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemName;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot", meta = (BindWidget))
	UBorder* ItemBorder;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot", meta = (BindWidget))
	UImage* ItemIcon;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot", meta = (BindWidget))
	UTextBlock* ItemQuantity;
	*/
	////////////////////////////////////////////////////////////////


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	AElevator_System* ElevatorSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* FlashlightMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* RightHandMesh;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Inventory Slot")
	UItemBase* ItemReference;

	ABoxCollider* TriggerBox;
	
	AMainHUD* HUD;

	AGameplayEvents* EventSteps;

	AWhiteFace* WhiteFace;

	// --- Player + Movment ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | Camera")
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | Movement")
	class UCharacterMovementComponent* PlayerMovementsValues = GetCharacterMovement();

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | ItemLogic")
	bool isFlashlightInInventory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | ItemLogic")
	bool isElectricKeyInInventory;

	////////////////////////////////////--- UI System ---////////////////////////////////////
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | UiLogic")
	bool bIsUiActive;
	UPROPERTY(EditAnywhere, Category = "FirstPersonCharacter | UiLogic")
	UTexture2D* UiTexture;
	UPROPERTY()
	UMaterialInterface* UiMaterial;
	UPROPERTY()
	UStaticMeshComponent* UiMeshComponent;
	////////////////////////////////////--- UI System ---////////////////////////////////////

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | Interactible | Logic")
	bool bIsNeedFlashlight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FirstPersonCharacter | Interactible | Logic")
	bool bIsNeedElectricKey;

	bool BIsStepActive;

	bool bIsTempOnOff;
	bool bIsTempWaitForInteractibleFuseBox;

	bool bIsReceptionDoor;
	bool bIsFuseBox;
	bool bIsFuseBox_Interactible;
	bool bIsReceptionPhone;

	bool bIsLookingAtRecDoor;
	bool bIsLookingAtFuBox;
	bool bIsLookingAtFuseBox_Interactible;
	bool bIsLookingReceptionPhone;

	// --- Tags --- //
	FName Fuse10A_InFuseBoxTransTagName;
	FName Fuse10A_ToFuseBoxTagName;
	FName ReceptionPhoneKeyTagName;

	FName ReceptionPhoneTrigTagName; // Trig4TagName
	FName ExitFuseB1RoomTrigTagName; // Trig3TagName
	FName GoingToMissingColeTrigTagName;

	FName WhiteFaceTagName;
	// --- Tags --- //

	// --- Triggers --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* ExitReceptionPhoneTrigActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* ExitFuseBoxRoomActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* GoingToMissingColeTrigActor;

	// --- Actors --- //
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* Fuse10A_InFuseBoxTransActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* Fuse10A_ToFuseBoxActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ReceptionPhoneKeyActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* WhiteFaceF2Actor;
	// --- Actors --- //

	FTimerHandle TimerHandle_Interaction;
	FInteractionData InteractionData;

	// --- FUNCTIONS ---
	void ToggleMenu();
	void TogglePauseMenu();

	void PerformInteractionCheck();
	void FoundInteractable(AActor* NewInteractable);
	void NoInteractableFound();
	void BeginInteract();
	void EndInteract();
	void Interact();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | UI")
	TSubclassOf<UObjectivePanel> ObjectiveClass;

private:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Audio")
	AActorSoundSystem* ActorSoundSystem;

	UObjectivePanel* Objective;

	UFUNCTION()
	void OnSublevelLoaded();

	// Handle for the timer
	FTimerHandle CountdownTimerHandle;

	// Timer duration
	float TimerDuration;
	// Current time remaining
	float TimeRemaining;

	// Timer tick function
	void TimerTick();


	void UpdateVaribleState(AActor*& ActorReference, const FName& TagName);

	bool CheckLookAtObject();
	bool CheckLeftMouseButtonDown();
	bool CheckRightMouseButtonDown();
};