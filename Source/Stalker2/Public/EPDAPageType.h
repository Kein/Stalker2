#pragma once
#include "CoreMinimal.h"
#include "EPDAPageType.generated.h"

UENUM(BlueprintType)
enum class EPDAPageType : uint8 {
    Map,
    Journal,
    Notes,
    Upgrades,
    Statistic,
    Bestiary,
    Tutorial,
    GetCount,
};

