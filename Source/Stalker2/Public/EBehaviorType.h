#pragma once
#include "CoreMinimal.h"
#include "EBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EBehaviorType : uint8 {
    Kill,
    Follow,
    Panic,
    Rest,
    Flee,
    Sleep,
    Stay,
    Berserk,
    Pacifist,
    Confused,
    Guard,
    MoveTo,
    Escort,
    Patrol,
    ShootTarget,
    AttackLair,
    UseAbility,
    BaseSquad,
    GetCount,
};

