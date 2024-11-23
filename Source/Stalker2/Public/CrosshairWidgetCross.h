#pragma once
#include "CoreMinimal.h"
#include "CrosshairWidgetBase.h"
#include "CrosshairWidgetCross.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UCrosshairWidgetCross : public UCrosshairWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float shift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDespersionLimit;
    
protected:
    UPROPERTY(Instanced)
    UImage* DownLine;
    
    UPROPERTY(Instanced)
    UImage* LeftLine;
    
    UPROPERTY(Instanced)
    UImage* RightLine;
    
    UPROPERTY(Instanced)
    UImage* UpLine;
    
    UPROPERTY(Instanced)
    UImage* Point;
    
public:
    UCrosshairWidgetCross();

};

