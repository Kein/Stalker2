#pragma once
#include "CoreMinimal.h"
#include "EAbility.generated.h"

UENUM(BlueprintType)
enum class EAbility : uint8 {
    None,
    Empty,
    ActivateAnomaly,
    Attack,
    AoEAttack,
    Roar,
    Berserk,
    PSYStrike,
    Zombification,
    AuraEffect,
    Charge,
    Throw,
    ThrowGrenade,
    Shield,
    AOEAttackPassive,
    LongJump,
    WeaponDrag,
    WeaponRiseAndShoot,
    TrickSound,
    Summon,
    HumanMeleeAttack,
    StrelokSpecial,
    BlinkTeleport,
    Count,
};

