#pragma once
#include "CoreMinimal.h"
#include "ZoomInterval.generated.h"

USTRUCT()
struct FZoomInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MinZoomLevel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxZoomLevel;
    
    STALKER2_API FZoomInterval();
};

