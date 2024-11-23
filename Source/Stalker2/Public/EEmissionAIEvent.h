#pragma once
#include "CoreMinimal.h"
#include "EEmissionAIEvent.generated.h"

UENUM(BlueprintType)
enum class EEmissionAIEvent : uint8 {
    EmissionStart,
    EmissionDanger,
    EmissionActive,
    EmissionEnd,
    Count,
};

