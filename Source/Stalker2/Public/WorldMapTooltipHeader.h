#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "WorldMapTooltipHeader.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UWorldMapTooltipHeader : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* TopBackgroundImage;
    
    UPROPERTY(Instanced)
    UImage* MiddleBackgroundImage;
    
    UPROPERTY(Instanced)
    UImage* BottomBackgroundImage;
    
    UPROPERTY(Instanced)
    UImage* TopBackgroundImageColor;
    
    UPROPERTY(Instanced)
    UImage* MiddleBackgroundImageColor;
    
    UPROPERTY(Instanced)
    UImage* BottomBackgroundImageColor;
    
    UPROPERTY(Instanced)
    UImage* TopBackgroundImageBlack;
    
    UPROPERTY(Instanced)
    UImage* MiddleBackgroundImageBlack;
    
    UPROPERTY(Instanced)
    UImage* BottomBackgroundImageBlack;
    
    UPROPERTY(Instanced)
    UImage* DotsImage;
    
public:
    UWorldMapTooltipHeader();

};

