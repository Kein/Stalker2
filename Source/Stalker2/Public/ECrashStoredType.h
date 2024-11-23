#pragma once
#include "CoreMinimal.h"
#include "ECrashStoredType.generated.h"

UENUM(BlueprintType)
enum class ECrashStoredType : uint8 {
    None,
    ActiveNodes,
    ActiveQuests,
    Inventory,
    Health,
    Stamina,
    DrinkLevel,
    RadiationLevel,
    GetCount,
};

