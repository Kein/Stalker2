#pragma once
#include "CoreMinimal.h"
#include "EPDASignalStrength.generated.h"

UENUM(BlueprintType)
enum class EPDASignalStrength : uint8 {
    Minimal,
    Low,
    Normal,
    Full,
    None,
};

