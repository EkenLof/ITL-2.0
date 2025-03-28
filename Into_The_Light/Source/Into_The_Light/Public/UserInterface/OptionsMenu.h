#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "OptionsMenu.generated.h"

class AFirstPersonCharacter;


UCLASS()
class INTO_THE_LIGHT_API UOptionsMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	AFirstPersonCharacter* PlayerCharacter;

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	
};
