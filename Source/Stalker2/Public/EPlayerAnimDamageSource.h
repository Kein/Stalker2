#pragma once
#include "CoreMinimal.h"
#include "EPlayerAnimDamageSource.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimDamageSource : uint8 {
    None,
    BleedingRadiationHunger,
    EmmisionPSY,
    Water,
    Fall,
    Bullet,
    Explosion,
    Chemical,
    Fire,
    Electro,
    PoppyField,
    BulbCarouselExpulsion,
    DiamondIronWind,
    Mutant,
    GetCount,
};

