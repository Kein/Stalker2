#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "GraphicsSettingsWidget.generated.h"

class USettingElement;
class USettingElementOnOff;
class USettingElementSwitcher;
class USettingsElementPercent;
class UWidget;

UCLASS(EditInlineNew)
class STALKER2_API UGraphicsSettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* OverallQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* OverallQualityXSX;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* RenderingResolution;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* Sharpness;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* UpscalingMethod;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementOnOff* DLSSRayReconstruction;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* DLSSFrameGeneration;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementOnOff* FFXFrameGeneration;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* UpscalingQualityPreset;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* ViewDistance;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* PostProcessing;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* AntiAliasing;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* TexturesQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* ShadowsQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* EffectsQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* ReflectionsQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* FoliageQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* GlobalIllumination;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* ShadingQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* HairQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* ObjectDetailQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* VolumetricFogQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* VolumetricCloudsQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* SkyQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* DOFQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* MaterialQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementSwitcher* MotionBlurQuality;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsElementPercent* MotionBlurStrength;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingElementOnOff* LightShaftsQuality;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UWidget*> PCSpecificElements;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UWidget*> ConsoleSpecificElements;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<USettingElement*> UpscalingWidgets;
    
public:
    UGraphicsSettingsWidget();

};

