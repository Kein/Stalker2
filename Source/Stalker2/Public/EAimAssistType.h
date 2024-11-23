#pragma once
#include "CoreMinimal.h"
#include "EAimAssistType.generated.h"

UENUM(BlueprintType)
enum class EAimAssistType : uint8 {
    None,
    Stickiness,
    Magnetism,
    Snapping,
    TargetTracking,
    GetCount,
};

