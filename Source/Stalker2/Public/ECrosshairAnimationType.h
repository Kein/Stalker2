#pragma once
#include "CoreMinimal.h"
#include "ECrosshairAnimationType.generated.h"

UENUM(BlueprintType)
enum class ECrosshairAnimationType : uint8 {
    None,
    Show,
    Hidden,
};

