#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "PDATimePanel.generated.h"

class UTextWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UPDATimePanel : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextWidget* HourText;
    
    UPROPERTY(Instanced)
    UTextWidget* MinutesText;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* PointAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointAnimSpeed;
    
    UPDATimePanel();

};

