#pragma once
#include "CoreMinimal.h"
#include "EVoiceCommand.generated.h"

UENUM(BlueprintType)
enum class EVoiceCommand : uint8 {
    None,
    AttackLaunch,
    AttackLaunchAgainstPlayer,
    BattleRoar,
    BattleRoarAgainstPlayer,
    RequestCoverFire,
    RequestFlank,
    Wounded,
    DeathRattle,
    EnemyKilled,
    EnemyCriticalHit,
    EnemyLost,
    EnemySearching,
    EnemyDetected,
    EnemyNearby,
    EnemyFarAway,
    FriendDeath,
    FriendCriticalHit,
    FriendlyFire,
    GrenadeNearby,
    GrenadeThrowRequest,
    Reloading,
};

