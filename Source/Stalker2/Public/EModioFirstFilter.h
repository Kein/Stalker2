#pragma once
#include "CoreMinimal.h"
#include "EModioFirstFilter.generated.h"

UENUM(BlueprintType)
enum class EModioFirstFilter : uint8 {
    None,
    Browse,
    Subscribed,
    Count,
};

