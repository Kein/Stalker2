#pragma once
#include "CoreMinimal.h"
#include "EInteractionTypeIcon.generated.h"

UENUM(BlueprintType)
enum class EInteractionTypeIcon : uint8 {
    None,
    Lock,
    Key,
    LowHealth,
    Max,
};

