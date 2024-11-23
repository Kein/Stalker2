#pragma once
#include "CoreMinimal.h"
#include "EAnimStateCurveType.generated.h"

UENUM(BlueprintType)
enum class EAnimStateCurveType : uint8 {
    Standing,
    Sitting,
    Lying,
};

