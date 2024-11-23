#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "ControlsSettingsWidget.generated.h"

class USettingElementButton;
class USettingElementOnOff;
class USettingElementSwitcher;
class USettingsElementPercent;

UCLASS(EditInlineNew)
class STALKER2_API UControlsSettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USettingElementOnOff* VerticalInversion;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* HorizontalInversion;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* CursorSensitivity;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* MouseAimSensitivity;
    
    UPROPERTY(Instanced)
    USettingElementButton* OpenKeyboardMappingButton;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* VibrationFeedback;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* GamepadVerticalInversion;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* GamepadHorizontalInversion;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* GamepadSensitivity;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* GamepadAimSensitivity;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* AimAssistType;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* AimAssistStickiness;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* AimAssistTracking;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* AimOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* HoldBreathOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* CrouchOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* ItemSelectorOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* SprintOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* WalkOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* AttachSelectorOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* LeanOnHold;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* LadderOnHold;
    
public:
    UControlsSettingsWidget();

};

