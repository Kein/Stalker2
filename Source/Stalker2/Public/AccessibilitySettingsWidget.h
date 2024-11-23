#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "AccessibilitySettingsWidget.generated.h"

class USettingElementSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UAccessibilitySettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USettingElementSwitcher* ColorBlindness;
    
public:
    UAccessibilitySettingsWidget();

};

