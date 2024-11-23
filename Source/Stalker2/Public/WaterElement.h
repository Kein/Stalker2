#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "WaterElement.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UWaterElement : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UTextBlock* TextBlock;
    
    UWaterElement();

};

