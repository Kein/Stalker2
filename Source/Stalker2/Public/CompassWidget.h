#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "CompassWidget.generated.h"

class UCanvasPanel;
class UImage;
class UProgressBar;
class USizeBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UCompassWidget : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* StealthNoiseIndicator;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* CompassCardinalDirectionImage;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* BodyCompassLine;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* LineRight;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* LineLeft;
    
    UPROPERTY(Instanced)
    UProgressBar* NoiseProgress;
    
    UPROPERTY(Instanced)
    UProgressBar* NoiseProgressBottomLines;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* Arrow;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCanvasPanel* MarkerContainer;
    
    UPROPERTY(Instanced)
    USizeBox* CompassSize;
    
    UPROPERTY(Instanced)
    USizeBox* LineSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiplyBodyLineSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CenterZoneWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaskZoneWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HiddeMarkerZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CenterCompassBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateBackgroundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TopMarkerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BottomMarkerHeigth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableAutoUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseBarFillSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseBarReduceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableAutoHideCompaas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeUpdateHideCompaasMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeUpdateHideCompaas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableTurnAngleAutoHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerTurnAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApproximationPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ColorInRadiasMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ColorInRadiasSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ColorForBattleModAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ColorForQuestZoneSearchAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableNoiseIndicator;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    float SlowShowAnimationSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float FastShowAnimationSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* StealthNoiseWavingAnimation;
    
    UCompassWidget();

};

