#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "WeightBar.generated.h"

class UImage;
class UOverlay;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UWeightBar : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* BackgroundImage;
    
    UPROPERTY(Instanced)
    UImage* HighlightImage;
    
    UPROPERTY(Instanced)
    UImage* DifferenceImage;
    
    UPROPERTY(Instanced)
    UImage* TrianglePointer;
    
    UPROPERTY(Instanced)
    UOverlay* BarOverlay;
    
    UPROPERTY(Instanced)
    UTextWidget* CurrentWeightText;
    
    UPROPERTY(Instanced)
    UTextWidget* MaxWeightText;
    
    UPROPERTY(EditAnywhere)
    float CurrentWeightTextPosition;
    
    UPROPERTY(EditAnywhere)
    float TrianglePosition;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundSegmentColor1;
    
    UPROPERTY(EditAnywhere)
    FLinearColor OneItemDifferenceColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundSegmentColor2;
    
    UPROPERTY(EditAnywhere)
    FLinearColor BackgroundSegmentColor3;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor OverweightTextColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NonOverweightTextColor;
    
    UPROPERTY(EditAnywhere)
    float HighlightSegmentEnd;
    
    UPROPERTY(EditAnywhere)
    float HighlightOpacity;
    
    UPROPERTY(EditAnywhere)
    FLinearColor HighlightColor;
    
    UPROPERTY(EditAnywhere)
    float DifferenceStart;
    
    UPROPERTY(EditAnywhere)
    float DifferenceEnd;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DifferencePositiveColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DifferenceNegativeColor;
    
public:
    UWeightBar();

};

