#pragma once
#include "CoreMinimal.h"
#include "EAnomalyActiveState.generated.h"

UENUM(BlueprintType)
enum class EAnomalyActiveState : uint8 {
    Active,
    Idle,
};

