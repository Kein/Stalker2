#pragma once
#include "CoreMinimal.h"
#include "EAvailableCoverExitTypes.generated.h"

UENUM(BlueprintType)
enum class EAvailableCoverExitTypes : uint8 {
    None,
    Front,
    Aside,
    Back = 4,
};

