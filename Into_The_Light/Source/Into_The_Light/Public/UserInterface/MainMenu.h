#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"


#include "MainMenu.generated.h"

class AFirstPersonCharacter;
/** 
 */
UCLASS()
class INTO_THE_LIGHT_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	AFirstPersonCharacter* PlayerCharacter;

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
};
