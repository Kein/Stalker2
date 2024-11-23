#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportEmailParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonReportEmailParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText DescriptionText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ValidationText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText EmailTooltipText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText BackButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubmitButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelButtonText;
    
    FModioCommonReportEmailParamsSettings();
};

