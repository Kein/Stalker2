#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "CrosshairWidgetBase.generated.h"

class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UCrosshairWidgetBase : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayInterpol;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* ShowCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* HideCrosshairAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableCrosshairAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrosshairAnimationSpeed;
    
public:
    UCrosshairWidgetBase();

};

