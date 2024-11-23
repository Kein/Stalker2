#pragma once
#include "CoreMinimal.h"
#include "ModioCommonStorageSpaceTrackerParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonStorageSpaceTrackerParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FText UsedSpaceLabelText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText FreeSpaceLabelText;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FText TotalSpaceLabelText;
    
    FModioCommonStorageSpaceTrackerParamsSettings();
};

