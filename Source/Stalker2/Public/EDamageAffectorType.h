#pragma once
#include "CoreMinimal.h"
#include "EDamageAffectorType.generated.h"

UENUM(BlueprintType)
enum class EDamageAffectorType : uint8 {
    None,
    Projectile,
    HeavyProjectile,
    Explosion,
    Melee,
    Count,
};

