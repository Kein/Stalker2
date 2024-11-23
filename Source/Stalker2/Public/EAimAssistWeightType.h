#pragma once
#include "CoreMinimal.h"
#include "EAimAssistWeightType.generated.h"

UENUM(BlueprintType)
enum class EAimAssistWeightType : uint8 {
    None,
    DistanceFromApex,
    DistanceFromCenter,
    Angle,
    Intensity,
    IsTargetHostile,
    GetCount,
};

