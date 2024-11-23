#pragma once
#include "CoreMinimal.h"
#include "EAnimationMovingStates.generated.h"

UENUM(BlueprintType)
enum class EAnimationMovingStates : uint8 {
    Idle,
    Moving,
    ShootingMoving,
};

