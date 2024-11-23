#pragma once
#include "CoreMinimal.h"
#include "EInteractionSystemNotificationsType.generated.h"

UENUM(BlueprintType)
enum class EInteractionSystemNotificationsType : uint8 {
    None,
    Cache,
    Note,
    Audio,
    Encyclopedia,
    Region,
    Inspect,
    Blueprint,
};

