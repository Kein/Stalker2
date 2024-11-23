#pragma once
#include "CoreMinimal.h"
#include "EInterruptionState.generated.h"

UENUM(BlueprintType)
enum class EInterruptionState : uint8 {
    ShouldInterrupt,
    Interrupting,
    Interrupted,
};

