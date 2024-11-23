#pragma once
#include "CoreMinimal.h"
#include "EBleedingStatusLog.generated.h"

UENUM(BlueprintType)
enum class EBleedingStatusLog : uint8 {
    None,
    BleedingDamage,
};

