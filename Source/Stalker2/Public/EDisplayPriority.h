#pragma once
#include "CoreMinimal.h"
#include "EDisplayPriority.generated.h"

UENUM(BlueprintType)
enum class EDisplayPriority : uint8 {
    None,
    Low,
    Medium,
    High,
    GetCount,
};

