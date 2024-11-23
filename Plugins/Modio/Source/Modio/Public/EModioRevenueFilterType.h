#pragma once
#include "CoreMinimal.h"
#include "EModioRevenueFilterType.generated.h"

UENUM(BlueprintType)
enum class EModioRevenueFilterType : uint8 {
    Free,
    Paid,
    FreeAndPaid,
};

