#pragma once
#include "CoreMinimal.h"
#include "EEmissionState.generated.h"

UENUM(BlueprintType)
enum class EEmissionState : uint8 {
    None,
    Idle,
    Active,
    Paused,
    GetCount,
};

