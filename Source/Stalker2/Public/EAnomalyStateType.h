#pragma once
#include "CoreMinimal.h"
#include "EAnomalyStateType.generated.h"

UENUM(BlueprintType)
enum class EAnomalyStateType : uint8 {
    None,
    Idle,
    Activation,
    Active,
    Recharge,
};

