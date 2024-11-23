#pragma once
#include "CoreMinimal.h"
#include "EBlockSlot.generated.h"

UENUM(BlueprintType)
enum class EBlockSlot : uint8 {
    None,
    MainHandsSlot,
    MainHandsSlotSecond,
    PistolSlot,
    KnifeSlot,
    BoltSlot,
    GrenadeSlot,
};

