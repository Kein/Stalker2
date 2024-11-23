#pragma once
#include "CoreMinimal.h"
#include "ESystemNotificationIconType.generated.h"

UENUM(BlueprintType)
enum class ESystemNotificationIconType : uint8 {
    Item,
    Blueprint,
    Money,
    Note,
    Cache,
    AudioNote,
    Region,
};

