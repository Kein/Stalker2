#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsCategory.generated.h"

UENUM(BlueprintType)
enum class EAnalyticsCategory : uint8 {
    None,
    Kills,
    Deaths,
    Count,
};

