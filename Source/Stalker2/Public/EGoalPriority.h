#pragma once
#include "CoreMinimal.h"
#include "EGoalPriority.generated.h"

UENUM(BlueprintType)
enum class EGoalPriority : uint8 {
    ALife,
    ContextualAction,
    PatrolContextualAction,
    Patrol,
    ReuniteWithLair,
    Idle,
    QuestPatrolContextualAction,
    EmissionContextualAction,
    MoveToHigherThanALife,
    HigherThanALife,
    HealAlly,
    Threat,
    HigherThanThreat,
    HideWeaponWarning,
    Combat,
    HigherThanCombat,
    LeaveRestrictedArea,
    SafeFromEmission,
    HigherThanEmission,
    RadiationFields,
    HigherThanRadiationFields,
    Anomaly,
    HigherThanAnomaly,
    RecoverFromKnockdown,
    AskMedkit,
};

