#pragma once
#include "CoreMinimal.h"
#include "EModioRating.generated.h"

UENUM(BlueprintType)
enum class EModioRating : uint8 {
    Neutral,
    Positive,
    Negative,
};

