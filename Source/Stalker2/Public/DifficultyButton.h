#pragma once
#include "CoreMinimal.h"
#include "MenuButtonBase.h"
#include "DifficultyButton.generated.h"

class UImage;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UDifficultyButton : public UMenuButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* DifficultyImage;
    
    UPROPERTY(Instanced)
    UTextWidget* DifficultyName;
    
    UPROPERTY(Instanced)
    UTextWidget* DifficultyDescription;
    
public:
    UDifficultyButton();

};

