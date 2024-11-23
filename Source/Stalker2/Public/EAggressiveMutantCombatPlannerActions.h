#pragma once
#include "CoreMinimal.h"
#include "EAggressiveMutantCombatPlannerActions.generated.h"

UENUM(BlueprintType)
enum class EAggressiveMutantCombatPlannerActions : uint8 {
    ContainerActions,
    SimpleActions,
    RotateToEnemyAction,
    MoveToEnemyAction,
    MutantEscapeAction,
    PrepareForAttackAction,
    RetreatAction,
};

