#pragma once
#include "CoreMinimal.h"
#include "EPassiveDetectorType.generated.h"

UENUM(BlueprintType)
enum class EPassiveDetectorType : uint8 {
    None,
    Anomaly,
    Searchpoint,
};

