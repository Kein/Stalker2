#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "StatPanel.generated.h"

class UCurveFloat;
class UImage;
class UOverlay;
class UProgressBar;
class UStatPanelDataAsset;
class UStatSlot;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UStatPanel : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UOverlay* VitalsOverlay;
    
    UPROPERTY(Instanced)
    UStatSlot* StatWeight;
    
    UPROPERTY(Instanced)
    UStatSlot* StatSleep;
    
    UPROPERTY(Instanced)
    UStatSlot* StatHunger;
    
    UPROPERTY(Instanced)
    UStatSlot* StatBleeding;
    
    UPROPERTY(Instanced)
    UProgressBar* HPProgress;
    
    UPROPERTY(Instanced)
    UProgressBar* HPProgressWhite;
    
    UPROPERTY(Instanced)
    UProgressBar* HPProgressDark;
    
    UPROPERTY(Instanced)
    UProgressBar* Stamina;
    
    UPROPERTY(Instanced)
    UImage* RadiationProgress;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* BlinkingStaminaAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* BlinkingHPAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* VitalsOverlayHideAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* VitalsOverlayShowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStatPanelDataAsset* SettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ColorWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ColorOverWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HeavyIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor MediumIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightIconColor;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* HPProgressCurve;
    
public:
    UStatPanel();

    UFUNCTION(BlueprintCallable)
    void UpdateAllStats();
    
};

