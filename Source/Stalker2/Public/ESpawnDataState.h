#pragma once
#include "CoreMinimal.h"
#include "ESpawnDataState.generated.h"

UENUM(BlueprintType)
enum class ESpawnDataState : uint8 {
    None,
    ProbabilityAccumulation,
    SpawnPointPick,
    ActivateParticle,
    ActiveParticle,
    InactiveParticle,
};

