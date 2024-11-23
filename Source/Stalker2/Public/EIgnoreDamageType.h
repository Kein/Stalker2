#pragma once
#include "CoreMinimal.h"
#include "EIgnoreDamageType.generated.h"

UENUM()
enum class EIgnoreDamageType {
    None = 1,
    Unkillable,
    Unfocusable = 4,
    IgnorePSY = 8,
    IgnoreFallDamage = 16,
    ImmuneToEmission = 32,
    UnkillableByALife = 64,
    IgnoreMeleeDamage = 128,
    InvulnerableInteract = 256,
    Invulnerable = 6,
};

