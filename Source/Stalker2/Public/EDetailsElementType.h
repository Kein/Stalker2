#pragma once
#include "CoreMinimal.h"
#include "EDetailsElementType.generated.h"

UENUM(BlueprintType)
enum class EDetailsElementType : uint8 {
    Default,
    StageSlots,
    Description,
    Count_Max UMETA(Hidden),
};

