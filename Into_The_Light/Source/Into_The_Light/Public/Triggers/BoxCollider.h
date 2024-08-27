#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "BoxCollider.generated.h"

class AGameplayEvents;
class ACole;

UCLASS()
class INTO_THE_LIGHT_API ABoxCollider : public AActor
{
	GENERATED_BODY()
	
public:
	ABoxCollider();

	virtual void Tick(float DeltaTime) override;

	FORCEINLINE AGameplayEvents* SetEventStep() const { return EventSteps; };
	FORCEINLINE ACole* SetColeState() const { return ColeState; };

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& SeepResult);

	void UpdateVaribleState(AActor*& ActorReference, const FName& TagName);

	//UFUNCTION()
	//void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	////////////////////////////---ACTIVE STATE---////////////////////////////
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsBeforeMeetCole;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsMeetCole;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsGoingToMissingCole;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsMissingCole;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsExitFuseBoxRoom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsExitReceptionPhone;
	////////////////////////////---ACTIVE STATE---////////////////////////////

	//TRIGGERS
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Trigger")
	AActor* MissingColeTriggerStart;

	//ACTORS
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* LanternActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* LanternBrokenActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ColeStorageRoomActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ElectricKeyActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ElectricKey_KeyActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign | Actors")
	AActor* ReceptionPhoneActor;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Assign")
	ACole* ColeState;

	UPROPERTY(EditAnywhere, Category = "Events | Steps")
	AGameplayEvents* EventSteps;

	UPROPERTY(EditAnywhere, Category = "Events | TagNames")
	FName MichaelTagName;

	virtual void BeginPlay() override;

	//TAGS
	FName ReceptionPhoneTagName;

	FName ColeStorageTagName;
	FName LanternTagName;
	FName LanternBrokenTagName;
	FName ElectricKeyTagName;
	FName ElectricKey_KeyTagName;

	FName ColeMissingTrigTagName;

	void HandleBeforeMeetCole();
	//void HandleMeetCole();
	void HandlebGoingToMissingCole();
	void HandleMissingCole();
	void HandleExitFuseBoxRoom();
	void HandleExitReceptionPhone();
};

