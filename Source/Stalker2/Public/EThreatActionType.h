#pragma once
#include "CoreMinimal.h"
#include "EThreatActionType.generated.h"

UENUM(BlueprintType)
enum class EThreatActionType : uint8 {
    None,
    TurnHead,
    MoveToLocation,
    CallAllies = 4,
    SearchEnemy = 8,
    Count = CallAllies,
};

