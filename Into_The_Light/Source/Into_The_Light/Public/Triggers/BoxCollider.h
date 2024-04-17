// Fill out your copyright notice in the Description page of Project Settings.

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


	UPROPERTY(EditAnywhere, Category = "Event | Trigger")
	bool IsMeetCole;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionBox;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& SeepResult);

	UFUNCTION() 
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:

	UPROPERTY(EditAnywhere, Category = "Events | Steps")
	AGameplayEvents* EventSteps;
	
	virtual void BeginPlay() override;

};
