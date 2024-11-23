#pragma once
#include "CoreMinimal.h"
#include "ZoomInterval.h"
#include "MapTypeSettings.generated.h"

USTRUCT()
struct FMapTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsMapType;
    
    UPROPERTY(EditDefaultsOnly)
    FZoomInterval ZoomInterval;
    
    UPROPERTY(EditDefaultsOnly)
    FZoomInterval TrackedZoomInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ZOrder;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSupportHubFolding;
    
    STALKER2_API FMapTypeSettings();
};

