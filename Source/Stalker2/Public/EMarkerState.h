#pragma once
#include "CoreMinimal.h"
#include "EMarkerState.generated.h"

UENUM(BlueprintType)
enum class EMarkerState : uint8 {
    Hidden,
    Default,
    Discovered,
    Explored,
};

