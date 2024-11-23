#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "ZoomIndicator.generated.h"

class UHorizontalBox;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UZoomIndicator : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UHorizontalBox* ZoomPointer;
    
    UPROPERTY(Instanced)
    UTextWidget* TextCounter;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextPrefix;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> PointerZoomLevelOffset;
    
    UZoomIndicator();

};

