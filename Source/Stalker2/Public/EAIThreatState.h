#pragma once
#include "CoreMinimal.h"
#include "EAIThreatState.generated.h"

UENUM(BlueprintType)
enum class EAIThreatState : uint8 {
    None,
    Peaceful,
    SearchForThreat,
    Combat = 4,
};

