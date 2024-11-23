#pragma once
#include "CoreMinimal.h"
#include "EAnimConstraintProfile.generated.h"

UENUM(BlueprintType)
enum class EAnimConstraintProfile : uint8 {
    None,
    HingesOnly,
    NoLimits,
    RagdollNoDrivers,
};

