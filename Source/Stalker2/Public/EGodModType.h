#pragma once
#include "CoreMinimal.h"
#include "EGodModType.generated.h"

UENUM(BlueprintType)
enum class EGodModType : uint8 {
    None,
    Invulnerable,
    Unkillable,
    InfiniteMagazine = 4,
    InfiniteAmmo = 8,
    UnbreakableWeapon = 16,
    All = 29,
};

