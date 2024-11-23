#pragma once
#include "CoreMinimal.h"
#include "ECompassPosition.h"
#include "CompassTypeSettings.generated.h"

USTRUCT()
struct FCompassTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsCompassType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bVisibleIfTrack;
    
    UPROPERTY(EditDefaultsOnly)
    ECompassPosition CompassPosition;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ZOrder;
    
    STALKER2_API FCompassTypeSettings();
};

