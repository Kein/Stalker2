#pragma once
#include "CoreMinimal.h"
#include "OnDisplayGammaSelectedDelegate.h"
#include "SettingsPage.h"
#include "DisplaySettingsWidget.generated.h"

class UMenuSubViewBase;
class USettingElementButton;
class USettingElementOnOff;
class USettingElementSwitcher;
class USettingElementValueLocSwitcher;
class USettingsElementPercent;
class USettingsElementResolutionSwitcher;
class UTextWidget;
class UWidget;

UCLASS(EditInlineNew)
class STALKER2_API UDisplaySettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnDisplayGammaSelected OnDisplayGammaSelected;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* GPUAdapter;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* Monitor;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* AspectRatio;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementResolutionSwitcher* ScreenResolution;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* WindowMode;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementValueLocSwitcher* FrameRate;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementOnOff* Vsync;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* FOV;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementOnOff* hdr;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* HDRCategory;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* Gamma;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* Brightness;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* HDRMinLuminance;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* HDRMaxLuminance;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* HDRBaseLuminance;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* HDRUILuminance;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementValueLocSwitcher* HDRScheme;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* Contrast;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementButton* SafeZone;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementOnOff* NVIDIAReflex;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UWidget*> PCSpecificElements;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UWidget*> ConsoleSpecificElements;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMenuSubViewBase> SafeZoneViewWidgetClass;
    
public:
    UDisplaySettingsWidget();

};

