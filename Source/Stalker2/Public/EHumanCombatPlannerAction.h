#pragma once
#include "CoreMinimal.h"
#include "EHumanCombatPlannerAction.generated.h"

UENUM(BlueprintType)
enum class EHumanCombatPlannerAction : uint8 {
    MoveToLocationWalkPrepareWeapon,
    MoveToLocationWalkFire,
    MoveToLocationSprint,
    CoverPrepareWeapon,
    CoverFire,
    CoverLookOut,
    CoverHide,
    CoverLeave,
    PrepareWeapon,
    Fire,
    WaitForLocations,
    LookOut,
    SearchEnemy,
    ForgetEnemy,
    UseSequentialAbility,
    Flank,
    Evade,
    Advance,
    ThrowGrenade,
    SuppressiveFire,
    Escape,
    Ambush,
    Count,
};

