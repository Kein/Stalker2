#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MarkerCompassWidget.generated.h"

class UImage;
class USizeBox;
class UTextBlock;
class UWidget;

UCLASS(EditInlineNew)
class STALKER2_API UMarkerCompassWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextBlock* DistanceText;
    
    UPROPERTY(Instanced)
    UImage* IconImage;
    
    UPROPERTY(Instanced)
    UImage* HeightArrow;
    
    UPROPERTY(Instanced)
    UWidget* DistanceContainer;
    
    UPROPERTY(Instanced)
    USizeBox* IconSizeBox;
    
    UPROPERTY(EditDefaultsOnly)
    float HideDelayForEnemyMarkers;
    
    UPROPERTY(EditDefaultsOnly)
    float HideEnemyTime;
    
    UPROPERTY(EditDefaultsOnly)
    float UpdateRate;
    
public:
    UMarkerCompassWidget();

};

