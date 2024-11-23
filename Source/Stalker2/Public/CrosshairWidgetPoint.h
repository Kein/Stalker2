#pragma once
#include "CoreMinimal.h"
#include "CrosshairWidgetBase.h"
#include "CrosshairWidgetPoint.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UCrosshairWidgetPoint : public UCrosshairWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* Point;
    
public:
    UCrosshairWidgetPoint();

};

