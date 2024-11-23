#pragma once
#include "CoreMinimal.h"
#include "EAnomalyOverlappedActorState.generated.h"

UENUM(BlueprintType)
enum class EAnomalyOverlappedActorState : uint8 {
    None,
    CanTriggerAnomaly,
    ReachableByAnomaly,
    HasInteractionEffects = 4,
    HasPreInteractionEffects = 8,
    HasPostInteractionEffects = 16,
    HasImmuneToAnomaly = 32,
    ReachableAndCanTriggerAnomaly = 3,
};

