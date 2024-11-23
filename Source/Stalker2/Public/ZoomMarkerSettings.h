#pragma once
#include "CoreMinimal.h"
#include "ZoomMarkerSettings.generated.h"

USTRUCT(BlueprintType)
struct FZoomMarkerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxZoomLevelToShow;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinZoomLevelToShow;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxZoomLevelToShowHab;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinZoomLevelToShowHub;
    
    STALKER2_API FZoomMarkerSettings();
};

