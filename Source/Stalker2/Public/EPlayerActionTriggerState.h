#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionTriggerState.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionTriggerState : uint8 {
    Activate,
    Deactivate,
};

