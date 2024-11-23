#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SettingsNavigationPanel.generated.h"

class UPanelWidget;
class UScrollBox;

UCLASS(EditInlineNew)
class STALKER2_API USettingsNavigationPanel : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPanelWidget* SlotContainer;
    
    UPROPERTY(Instanced)
    UScrollBox* NavPanelScroll;
    
    USettingsNavigationPanel();

};

