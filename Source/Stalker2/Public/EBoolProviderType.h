#pragma once
#include "CoreMinimal.h"
#include "EBoolProviderType.generated.h"

UENUM(BlueprintType)
enum class EBoolProviderType : uint8 {
    None,
    Constant,
    And,
    Or,
    Not,
    PlayerUnderRoof,
    PlayerRank,
    TargetRank,
    FactionRelation,
    TargetRelation,
    TraderRegenerationHours,
    TraderRegenerationDays,
    TargetHasEffectBoolProvider,
    TargetInShelter,
    GetCount,
};

