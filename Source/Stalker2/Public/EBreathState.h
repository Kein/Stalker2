#pragma once
#include "CoreMinimal.h"
#include "EBreathState.generated.h"

UENUM(BlueprintType)
enum class EBreathState : uint8 {
    Inhale,
    Exhale,
    Hold,
};

