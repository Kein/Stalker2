#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MenuNavigationPanelBase.generated.h"

class UPanelWidget;
class USettingsNavigationButton;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UMenuNavigationPanelBase : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UPanelWidget* SlotContainer;
    
private:
    UPROPERTY(Instanced, Transient)
    USettingsNavigationButton* HoveredButton;
    
    UPROPERTY(Instanced, Transient)
    TArray<USettingsNavigationButton*> Buttons;
    
public:
    UMenuNavigationPanelBase();

    UFUNCTION()
    void OnButtonPressed(USettingsNavigationButton* PressedButton);
    
};

