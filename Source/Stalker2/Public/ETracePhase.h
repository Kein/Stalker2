#pragma once
#include "CoreMinimal.h"
#include "ETracePhase.generated.h"

UENUM(BlueprintType)
enum class ETracePhase : uint8 {
    HorizontalTracePhase,
    VerticalUpTracePhase,
    VerticalDownTracePhase,
    VerticalTraces,
};

