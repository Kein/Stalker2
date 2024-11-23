#pragma once
#include "CoreMinimal.h"
#include "EAsyncLoadPriority.generated.h"

UENUM(BlueprintType)
enum class EAsyncLoadPriority : uint8 {
    Default,
    High = 50,
    Maximum = 100,
};

