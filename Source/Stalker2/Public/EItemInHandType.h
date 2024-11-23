#pragma once
#include "CoreMinimal.h"
#include "EItemInHandType.generated.h"

UENUM(BlueprintType)
enum class EItemInHandType : uint8 {
    None,
    Guitar,
    Consumable,
    Grenade,
    AdditionalItem,
};

