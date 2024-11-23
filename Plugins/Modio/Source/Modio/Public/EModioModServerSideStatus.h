#pragma once
#include "CoreMinimal.h"
#include "EModioModServerSideStatus.generated.h"

UENUM(BlueprintType)
enum class EModioModServerSideStatus : uint8 {
    NotAccepted,
    Accepted,
    Deleted = 3,
};

