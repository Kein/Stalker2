#pragma once
#include "CoreMinimal.h"
#include "ShortcutData.h"
#include "WidgetBase.h"
#include "MenuButtonBase.generated.h"

class UButton;
class UMenuButtonActionBase;
class UMenuButtonStateDefiner;
class UTextWidget;
class UWidgetAnimation;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMenuButtonBase : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* ActionName;
    
    UPROPERTY(Instanced)
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* HoverAnimation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* PressAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    float HoverAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float HideHoverAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float PressButtonAnimationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float IsNotActiveOpacity;
    
private:
    UPROPERTY(Transient)
    UMenuButtonActionBase* ButtonAction;
    
    UPROPERTY(Transient)
    TArray<FShortcutData> ButtonShortcuts;
    
    UPROPERTY(Transient)
    TArray<UMenuButtonStateDefiner*> ButtonStateDefiners;
    
public:
    UMenuButtonBase();

    UFUNCTION()
    void OnPressed();
    
    UFUNCTION()
    void OnMousePressed();
    
    UFUNCTION()
    void OnButtonHovered();
    
    UFUNCTION()
    void ExecuteAction();
    
};

