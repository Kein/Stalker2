#pragma once
#include "CoreMinimal.h"
#include "ECustomDataDistribution.generated.h"

UENUM(BlueprintType)
enum class ECustomDataDistribution : uint8 {
    Uniform,
    Custom,
};

