#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "UserWaterElement.generated.h"

class UOverlay;

UCLASS(EditInlineNew)
class STALKER2_API UUserWaterElement : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UOverlay* WaterMarks;
    
    UUserWaterElement();

};

