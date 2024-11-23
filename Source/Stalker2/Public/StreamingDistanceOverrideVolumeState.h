#pragma once
#include "CoreMinimal.h"
#include "StreamingDistanceOverrideVolumeState.generated.h"

class AStreamingDistanceOverridingVolume;

USTRUCT(BlueprintType)
struct FStreamingDistanceOverrideVolumeState {
    GENERATED_BODY()
public:
    UPROPERTY()
    AStreamingDistanceOverridingVolume* Volume;
    
    STALKER2_API FStreamingDistanceOverrideVolumeState();
};

