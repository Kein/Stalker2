#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimPlayerCameraData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform TargetCameraTransform;
    
    UPROPERTY(BlueprintReadOnly)
    float CameraTransformAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float DetectorCameraShakeAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float ClampedControlPitch;
    
    FAnimPlayerCameraData();
};

