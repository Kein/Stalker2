#pragma once
#include "CoreMinimal.h"
#include "EWeightStatus.generated.h"

UENUM(BlueprintType)
enum class EWeightStatus : uint8 {
    Normal,
    Heavy,
    Overweight,
    GetCount,
};

