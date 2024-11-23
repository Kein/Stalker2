#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportSummaryParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonReportSummaryParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText DescriptionText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ReasonLabelText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText EmailLabelText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText DetailsLabelText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText BackButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubmitButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelButtonText;
    
    FModioCommonReportSummaryParamsSettings();
};

