#pragma once
#include "CoreMinimal.h"
#include "EModioUIModInfoEventType.generated.h"

UENUM(BlueprintType)
enum class EModioUIModInfoEventType : uint8 {
    ListAllMods,
    GetModInfo,
};

