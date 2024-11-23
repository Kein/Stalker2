#pragma once
#include "CoreMinimal.h"
#include "ESummonSpawnOrientation.generated.h"

UENUM(BlueprintType)
enum class ESummonSpawnOrientation : uint8 {
    Identity,
    MatchOwner,
    LookAtOwner,
    LookAtEnemy,
    LookFromOwner,
};

