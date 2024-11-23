#pragma once
#include "CoreMinimal.h"
#include "EModioSecondFilter.generated.h"

UENUM(BlueprintType)
enum class EModioSecondFilter : uint8 {
    None,
    MostPopular,
    HighestRated,
    RecentlyAdded,
    Count,
};

