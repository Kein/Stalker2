#pragma once
#include "CoreMinimal.h"
#include "ENotifyTriggerType.generated.h"

UENUM(BlueprintType)
enum class ENotifyTriggerType : uint8 {
    Default,
    DefaultOnInterrupted,
    ReverseOnInterrupted,
};

