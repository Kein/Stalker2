#pragma once
#include "CoreMinimal.h"
#include "EOutputDeviceEffect.generated.h"

UENUM(BlueprintType)
enum class EOutputDeviceEffect : uint8 {
    Full,
    Medium,
    Narrow,
    Count,
};

