#pragma once
#include "CoreMinimal.h"
#include "EAdvanceActionType.generated.h"

UENUM(BlueprintType)
enum class EAdvanceActionType : uint8 {
    None,
    Approach,
    ReadyForAction,
    MontageMovement,
    Action,
};

