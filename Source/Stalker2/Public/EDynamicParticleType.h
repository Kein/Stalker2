#pragma once
#include "CoreMinimal.h"
#include "EDynamicParticleType.generated.h"

UENUM(BlueprintType)
enum class EDynamicParticleType : uint8 {
    None,
    Leaves,
    TumbleweedFlies,
    FlyingCrowsAndBats,
    BogFlies,
    DynamicDust,
    LightningStrike,
};

