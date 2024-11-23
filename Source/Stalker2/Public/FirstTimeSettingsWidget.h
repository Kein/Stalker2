#pragma once
#include "CoreMinimal.h"
#include "OnGammaSelectedDelegate.h"
#include "SettingsPage.h"
#include "FirstTimeSettingsWidget.generated.h"

class USettingElementSwitcher;
class USettingsElementPercent;

UCLASS(EditInlineNew)
class STALKER2_API UFirstTimeSettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USettingElementSwitcher* ColorBlindness;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* InterfaceLanguage;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* VoicingLanguage;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* Gamma;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* DynamicRange;
    
    UPROPERTY(BlueprintAssignable, VisibleAnywhere)
    FOnGammaSelected OnGammaSelectedDelegate;
    
    UFirstTimeSettingsWidget();

};

