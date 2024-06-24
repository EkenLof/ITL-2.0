// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "WhiteFace.generated.h"

UCLASS()
class INTO_THE_LIGHT_API AWhiteFace : public APawn
{
	GENERATED_BODY()

public:
	AWhiteFace();

	UFUNCTION(BlueprintCallable, Category = "Event | Activity")
	void WhiteFaceIdle(bool bIsWhiteFaceActivety);

	UFUNCTION(BlueprintCallable, Category = "Event | Activity")
	void WhiteFaceClapp(bool bIsWhiteFaceActivety);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsWhiteFaceIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsWhiteFaceClapp;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
