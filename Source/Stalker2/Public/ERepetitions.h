#pragma once
#include "CoreMinimal.h"
#include "ERepetitions.generated.h"

UENUM(BlueprintType)
enum class ERepetitions : uint8 {
    Infinity,
    TimeInSeconds,
    PlayCount,
};

