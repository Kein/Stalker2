#pragma once
#include "CoreMinimal.h"
#include "EFlashlightPriority.generated.h"

UENUM(BlueprintType)
enum class EFlashlightPriority : uint8 {
    FlashlightWeaponAttachment,
    AdditionalAttachment,
    Head,
    Chest,
};

