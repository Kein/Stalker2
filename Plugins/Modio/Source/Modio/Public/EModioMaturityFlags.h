#pragma once
#include "CoreMinimal.h"
#include "EModioMaturityFlags.generated.h"

UENUM(BlueprintType)
enum class EModioMaturityFlags : uint8 {
    None,
    Alcohol,
    Drugs,
    Violence = 4,
    Explicit = 8,
};

