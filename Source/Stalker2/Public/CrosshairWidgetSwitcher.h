#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "ECrosshairType.h"
#include "ECrosshairTypeSetting.h"
#include "CrosshairWidgetSwitcher.generated.h"

class UCrosshairWidgetBase;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UCrosshairWidgetSwitcher : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UWidgetSwitcher* CrosshairSwitcher;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ShowCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* HideCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* BlockHideCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDiffirentCrosshairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECrosshairType DefaultCrosshairType;
    
    UPROPERTY(EditAnywhere)
    TMap<ECrosshairTypeSetting, bool> CrosshairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrosshairAnimationAimSpeed;
    
    UPROPERTY(Instanced)
    UCrosshairWidgetBase* CurrCrosshairWidget;
    
public:
    UCrosshairWidgetSwitcher();

};

