#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"


#include "BoxCollider.generated.h"

class AGameplayEvents;

UCLASS()
class INTO_THE_LIGHT_API ABoxCollider : public AActor
{
	GENERATED_BODY()
	
public:
	ABoxCollider();

	FORCEINLINE AGameplayEvents* SetEventStep() const { return EventSteps; };

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& SeepResult);

	//UFUNCTION()
	//void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	////////////////////////////---ACTIVE STATE---////////////////////////////
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsMeetCole;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsMissingCole;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsExitFuseBoxRoom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Trigger")
	bool bIsExitReceptionPhone;
	////////////////////////////---ACTIVE STATE---////////////////////////////


	virtual void Tick(float DeltaTime) override;

protected:

	UPROPERTY(EditAnywhere, Category = "Events | Steps")
	AGameplayEvents* EventSteps;

	UPROPERTY(EditAnywhere, Category = "Events | TagNames")
	FName MichaelTagName;


	virtual void BeginPlay() override;
};

