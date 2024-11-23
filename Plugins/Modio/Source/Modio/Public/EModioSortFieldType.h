#pragma once
#include "CoreMinimal.h"
#include "EModioSortFieldType.generated.h"

UENUM(BlueprintType)
enum class EModioSortFieldType : uint8 {
    ID,
    DownloadsToday,
    SubscriberCount,
    Rating,
    DateMarkedLive,
    DateUpdated,
    DownloadsTotal,
};

