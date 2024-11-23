#pragma once
#include "CoreMinimal.h"
#include "EOverrideLifeGridVisionRadius.generated.h"

UENUM(BlueprintType)
enum class EOverrideLifeGridVisionRadius : uint8 {
    None,
    Low = 40,
    Default = 75,
    High = 120,
};

