#pragma once
#include "CoreMinimal.h"
#include "EShootingAvailability.generated.h"

UENUM(BlueprintType)
enum class EShootingAvailability : uint8 {
    None,
    Available,
    Blocked,
    NoAmmoLoaded,
    NoAmmo,
    Jammed,
    NoWeapon,
    NoInventory,
    ShootingCooldown,
    GetCount,
};

