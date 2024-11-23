#pragma once
#include "CoreMinimal.h"
#include "EAnimationReloadTypes.generated.h"

UENUM()
enum class EAnimationReloadTypes : uint32 {
    None,
    Full,
    Tactical,
    Unload = 4,
    SingleBullet = 8,
    TwinFull = 16,
    TwinTactical = 32,
    TwinFullAux = 64,
    TwinTacticalAux = 128,
};

