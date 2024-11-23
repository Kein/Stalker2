#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportMessageParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonReportMessageParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText DescriptionText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText ValidationText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 MessageLength;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText MessageTooltipText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText BackButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SubmitButtonText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText CancelButtonText;
    
    FModioCommonReportMessageParamsSettings();
};

