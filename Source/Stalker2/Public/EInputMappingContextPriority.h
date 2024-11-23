#pragma once
#include "CoreMinimal.h"
#include "EInputMappingContextPriority.generated.h"

UENUM(BlueprintType)
enum class EInputMappingContextPriority : uint8 {
    Lowest,
    Low,
    Medium,
    High,
    Exclusive,
};

