#pragma once
#include "CoreMinimal.h"
#include "ECinematicParameter.generated.h"

UENUM(BlueprintType)
enum class ECinematicParameter : uint8 {
    None,
    MovementSpeedMultiplier,
    HudVisibility,
    AnimationCameraYawLimit,
    AnimationCameraPitchLimit,
    AnimationCameraMultiplier,
    GetCount,
};

