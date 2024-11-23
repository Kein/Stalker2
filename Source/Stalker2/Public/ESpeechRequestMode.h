#pragma once
#include "CoreMinimal.h"
#include "ESpeechRequestMode.generated.h"

UENUM(BlueprintType)
enum class ESpeechRequestMode : uint8 {
    Flexible,
    Forced,
    Queued,
    GetCount,
};

