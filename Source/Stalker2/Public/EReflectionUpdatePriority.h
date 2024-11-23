#pragma once
#include "CoreMinimal.h"
#include "EReflectionUpdatePriority.generated.h"

UENUM(BlueprintType)
enum class EReflectionUpdatePriority : uint8 {
    High,
    Medium,
    Low,
    Minimal,
    GetCount,
};

