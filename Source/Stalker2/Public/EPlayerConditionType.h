#pragma once
#include "CoreMinimal.h"
#include "EPlayerConditionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerConditionType : uint8 {
    None,
    CurrentHealth,
    CurrentAmmo,
    ItemCount,
};

