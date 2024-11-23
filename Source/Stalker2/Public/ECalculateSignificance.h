#pragma once
#include "CoreMinimal.h"
#include "ECalculateSignificance.generated.h"

UENUM(BlueprintType)
enum class ECalculateSignificance : uint8 {
    Default,
    ScreenSize,
    ScreenSizeAndDistance,
};

