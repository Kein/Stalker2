#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportReasonParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonReportReasonParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText DescriptionText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ProceedButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelButtonText;
    
    FModioCommonReportReasonParamsSettings();
};

