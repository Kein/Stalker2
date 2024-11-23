#pragma once
#include "CoreMinimal.h"
#include "EAnimationShootingTypes.generated.h"

UENUM(BlueprintType)
enum class EAnimationShootingTypes : uint8 {
    Default,
    Aim,
    DefaultLastShoot,
    AimLastShoot,
    LooseShoot,
    LooseShootInAim,
};

