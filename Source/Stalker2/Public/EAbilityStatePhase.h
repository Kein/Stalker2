#pragma once
#include "CoreMinimal.h"
#include "EAbilityStatePhase.generated.h"

UENUM(BlueprintType)
enum class EAbilityStatePhase : uint8 {
    Anticipation,
    Execution,
    Recovery,
    Complete,
};

