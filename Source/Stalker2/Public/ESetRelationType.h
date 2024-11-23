#pragma once
#include "CoreMinimal.h"
#include "ESetRelationType.generated.h"

UENUM(BlueprintType)
enum class ESetRelationType : uint8 {
    Default,
    Force,
    Count,
};

