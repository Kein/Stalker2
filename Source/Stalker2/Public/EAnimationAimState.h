#pragma once
#include "CoreMinimal.h"
#include "EAnimationAimState.generated.h"

UENUM(BlueprintType)
enum class EAnimationAimState : uint8 {
    None,
    HipToAimActive,
    AimToHipActive,
    AimingActive,
};

