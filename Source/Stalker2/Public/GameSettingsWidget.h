#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "GameSettingsWidget.generated.h"

class USettingElementOnOff;
class USettingElementSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UGameSettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USettingElementOnOff* AutoSave;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* Tutorial;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* InteractPaint;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* Difficulty;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* InterfaceLanguage;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* VoicingLanguage;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* EnableStreamerMode;
    
    UGameSettingsWidget();

};

