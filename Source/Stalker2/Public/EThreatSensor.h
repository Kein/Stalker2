#pragma once
#include "CoreMinimal.h"
#include "EThreatSensor.generated.h"

UENUM(BlueprintType)
enum class EThreatSensor : uint8 {
    None,
    Vision,
    Hearing,
    Smell = 4,
    MovementDetection = 8,
};

