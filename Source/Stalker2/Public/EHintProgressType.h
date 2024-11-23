#pragma once
#include "CoreMinimal.h"
#include "EHintProgressType.generated.h"

UENUM(BlueprintType)
enum class EHintProgressType : uint8 {
    NoProgress,
    MultiClickProgress,
    HoldProgress,
};

