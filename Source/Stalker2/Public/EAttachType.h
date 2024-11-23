#pragma once
#include "CoreMinimal.h"
#include "EAttachType.generated.h"

UENUM(BlueprintType)
enum class EAttachType : uint8 {
    Silencer,
    Muzzle,
    FlashSuppressor,
    Scope,
    Grip,
    GrenadeLauncher,
    Shotgun,
    WeaponFlashlight,
    LaserSight,
    Magazine,
    IronSight,
    PlankScope,
    GetCount,
};

