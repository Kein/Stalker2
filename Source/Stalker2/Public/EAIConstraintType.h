#pragma once
#include "CoreMinimal.h"
#include "EAIConstraintType.generated.h"

UENUM(BlueprintType)
enum class EAIConstraintType : uint8 {
    PrepareForEmission,
    Count,
};

