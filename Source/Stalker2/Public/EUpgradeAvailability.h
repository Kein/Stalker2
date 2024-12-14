#pragma once
#include "CoreMinimal.h"
#include "EUpgradeAvailability.generated.h"

UENUM(BlueprintType)
enum class EUpgradeAvailability : uint8 {
    Unavailable,
    Available,
    Purchased,
    Blocked,
    BlockedHidden,
    PurchasedModuleOn,
    PurchasedModuleOff,
    GetCount,
};

