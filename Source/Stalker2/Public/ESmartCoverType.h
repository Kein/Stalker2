#pragma once
#include "CoreMinimal.h"
#include "ESmartCoverType.generated.h"

UENUM(BlueprintType)
enum class ESmartCoverType : uint8 {
    NoCover,
    NoShootingPosition,
    Generic,
    BehindTreeCover,
    Low,
    High,
    Count,
};

