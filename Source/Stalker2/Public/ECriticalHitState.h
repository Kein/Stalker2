#pragma once
#include "CoreMinimal.h"
#include "ECriticalHitState.generated.h"

UENUM(BlueprintType)
enum class ECriticalHitState : uint8 {
    NotCriticalHit,
    CriticalHit,
};

