#pragma once
#include "CoreMinimal.h"
#include "ModioCommonModOperationTrackerParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonModOperationTrackerParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText OverallOperationPercentageLabelText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText QueuedOperationNumberLabelText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText SpeedLabelText;
    
    FModioCommonModOperationTrackerParamsSettings();
};

