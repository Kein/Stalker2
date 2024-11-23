#pragma once
#include "CoreMinimal.h"
#include "EMediaIOAutoDetectableTimecodeFormat.generated.h"

UENUM(BlueprintType)
enum class EMediaIOAutoDetectableTimecodeFormat : uint8 {
    None,
    LTC,
    VITC,
    Auto = 255,
};

