#pragma once
#include "CoreMinimal.h"
#include "ActionMimicSettings.h"
#include "WidgetBase.h"
#include "ActionMimicButton.generated.h"

class UButton;
class UInputAction;
class UInputTrigger;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UActionMimicButton : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool bInitializeAutomatically;
    
    UPROPERTY(EditInstanceOnly)
    FActionMimicSettings MimicSettings;
    
protected:
    UPROPERTY(Instanced)
    UButton* ButtonElement;
    
private:
    UPROPERTY(Transient)
    UInputAction* InputAction;
    
    UPROPERTY(Transient)
    UInputTrigger* InputTrigger;
    
public:
    UActionMimicButton();

    UFUNCTION()
    void OnMouseButtonReleased();
    
    UFUNCTION()
    void OnMouseButtonPressed();
    
};

