#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "UISettingsWidget.generated.h"

class USettingElementOnOff;
class USettingElementSwitcher;
class USettingsElementPercent;

UCLASS(EditInlineNew)
class STALKER2_API UUISettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USettingElementOnOff* Subtitle;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* SubtitleSize;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* BackgroundOpacity;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* HUDOpacity;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* SubtitleName;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* CrosshairType;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* HUD;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* ThreatIndicator;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* HitIndicator;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* Crosshair;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* CrosshairColor;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* QuestNotification;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* Compass;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* AmmoCounter;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* SystemNotification;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* QuickSlot;
    
    UUISettingsWidget();

};

