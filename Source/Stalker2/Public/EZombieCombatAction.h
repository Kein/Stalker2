#pragma once
#include "CoreMinimal.h"
#include "EZombieCombatAction.generated.h"

UENUM(BlueprintType)
enum class EZombieCombatAction : uint8 {
    MoveToTarget,
    ShootInTarget,
    ValidateLostEnemy,
    Reload,
    PerformAbility,
    Count,
};

