#pragma once
#include "CoreMinimal.h"
#include "CompassTypeSettings.h"
#include "MapTypeSettings.h"
#include "MarkerIconSettings.h"
#include "MarkerTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FMarkerTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FMarkerIconSettings IconSettings;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTrackable;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHaveDiscoveredState;
    
    UPROPERTY(EditDefaultsOnly)
    FCompassTypeSettings CompassTypeSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FMapTypeSettings MapTypeSettings;
    
    STALKER2_API FMarkerTypeSettings();
};

