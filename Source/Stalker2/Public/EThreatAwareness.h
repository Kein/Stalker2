#pragma once
#include "CoreMinimal.h"
#include "EThreatAwareness.generated.h"

UENUM(BlueprintType)
enum class EThreatAwareness : uint8 {
    None,
    Calm,
    TurnHead,
    SearchEnemy,
    MoveToLocation,
    CallAllies,
    Battle,
};

