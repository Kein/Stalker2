#pragma once
#include "CoreMinimal.h"
#include "EAgentFollowingFlags.generated.h"

UENUM(BlueprintType)
enum class EAgentFollowingFlags : uint8 {
    None,
    ForceLookAtTargetLocation,
    GetCount,
};

