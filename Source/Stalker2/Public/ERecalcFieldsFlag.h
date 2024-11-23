#pragma once
#include "CoreMinimal.h"
#include "ERecalcFieldsFlag.generated.h"

UENUM()
enum class ERecalcFieldsFlag {
    None,
    BuffData,
    MaxInventoryMass,
    MovementParams = 4,
    Significance = 8,
    Vitals = 16,
    WeaponData = 32,
    BlockedAnimationActionTypes = 64,
    BulletSpeedSlowdown = 128,
    StaminaActionTypes = 256,
    Everything = 511,
    GetCount,
};

