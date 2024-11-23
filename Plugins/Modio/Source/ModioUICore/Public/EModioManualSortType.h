#pragma once
#include "CoreMinimal.h"
#include "EModioManualSortType.generated.h"

UENUM(BlueprintType)
enum class EModioManualSortType : uint8 {
    AToZ,
    ZToA,
    SizeOnDisk,
    RecentlyUpdated,
};

