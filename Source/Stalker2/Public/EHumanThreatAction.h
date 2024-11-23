#pragma once
#include "CoreMinimal.h"
#include "EHumanThreatAction.generated.h"

UENUM(BlueprintType)
enum class EHumanThreatAction : uint8 {
    TurnHead,
    MoveToThreatLocation,
    MoveToLocationSprintNoWeapon,
    Flee,
    SearchEnemy,
    Idle,
    PrepareWeapon,
    ForgetThreat,
    BookCorpse,
    LootCorpse,
    Count,
};

