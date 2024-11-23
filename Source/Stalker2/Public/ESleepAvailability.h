#pragma once
#include "CoreMinimal.h"
#include "ESleepAvailability.generated.h"

UENUM(BlueprintType)
enum class ESleepAvailability : uint8 {
    Available,
    NotTired,
    Emission,
    NegativeEffect,
    InBattle,
};

