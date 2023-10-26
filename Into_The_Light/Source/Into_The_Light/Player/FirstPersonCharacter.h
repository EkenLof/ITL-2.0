// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/InteractionInterface.h"
#include "FirstPersonCharacter.generated.h"

USTRUCT()
struct FInteractionData
{
	GENERATED_USTRUCT_BODY()

	FInteractionData() : CurrentInteractable(nullptr), LastInteractionCheckTime(0.0f)
	{

	};

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
	// Sets default values for this character's properties
	AFirstPersonCharacter();                                                                           // Calls constructor (AFirstPersonController) in CPP

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;                                                                 // Calls BeginPlay in CPP

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;                                                       // Calls Tick in CPP

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;      // Calls SetupPlayerInputComponent in CPP


protected:

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

	// Flashlight
	void UseFlashlight();

	//---- Inventory - Item - Interaction **Systems** ----
	// --- VARIBLES ---
	UPROPERTY(VisibleAnywhere, Category = "Character | Interaction")
	TScriptInterface<IInteractionInterface> TargetInteractable;

	float InteractionCheckFrequency;

	float InteractionCheckDistance;

	FTimerHandle TimerHandle_Interaction;

	FInteractionData InteractionData;

	// --- FUNCTIONS ---
	void PerformInteractionCheck();
	void FoundInteractable(AActor* NewInteractable);
	void NoInteractableFound();
	void BeginInteract();
	void EndInteract();
	void Interact();

public:

	FORCEINLINE bool IsInteracting() const { return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction); };

	bool isFlashlightEquiped;

	bool isWalkingForward;
	bool isWalkingBackward;

	float WalkSpeed;
	float RunSpeed;
};



