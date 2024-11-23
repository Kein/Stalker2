#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MapBorderIndicator.generated.h"

class UImage;

UCLASS(EditInlineNew)
class STALKER2_API UMapBorderIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImage* BorderLeft;
    
    UPROPERTY(Instanced)
    UImage* BorderRight;
    
    UPROPERTY(Instanced)
    UImage* BorderBottom;
    
    UPROPERTY(Instanced)
    UImage* BorderTop;
    
    UMapBorderIndicator();

};

