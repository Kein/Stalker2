#pragma once
#include "CoreMinimal.h"
#include "EAnimationIdleStates.generated.h"

UENUM(BlueprintType)
enum class EAnimationIdleStates : uint8 {
    Idle,
    RelaxedIdle,
    ShootingIdle,
};

