#pragma once
#include "CoreMinimal.h"
#include "EALifeDirectorScenarioTarget.generated.h"

UENUM(BlueprintType)
enum class EALifeDirectorScenarioTarget : uint8 {
    None,
    Player,
    EnemyLair,
    AllyLair = 4,
    AttackEnemyLair = 8,
    ContextualAction = 16,
    TargetEachOther = 32,
};

