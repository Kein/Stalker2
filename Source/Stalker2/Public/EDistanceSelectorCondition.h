#pragma once
#include "CoreMinimal.h"
#include "EDistanceSelectorCondition.generated.h"

UENUM(BlueprintType)
enum class EDistanceSelectorCondition : uint8 {
    MinIn,
    MinOut,
};

