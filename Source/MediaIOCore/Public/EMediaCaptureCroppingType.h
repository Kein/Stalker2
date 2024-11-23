#pragma once
#include "CoreMinimal.h"
#include "EMediaCaptureCroppingType.generated.h"

UENUM(BlueprintType)
enum class EMediaCaptureCroppingType : uint8 {
    None,
    Center,
    TopLeft,
    Custom,
};

