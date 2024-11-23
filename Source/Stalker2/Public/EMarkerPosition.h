#pragma once
#include "CoreMinimal.h"
#include "EMarkerPosition.generated.h"

UENUM(BlueprintType)
enum class EMarkerPosition : uint8 {
    Top,
    Right,
    Left,
    Bottom,
};

