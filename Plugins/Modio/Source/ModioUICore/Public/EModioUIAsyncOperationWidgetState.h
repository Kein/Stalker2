#pragma once
#include "CoreMinimal.h"
#include "EModioUIAsyncOperationWidgetState.generated.h"

UENUM(BlueprintType)
enum class EModioUIAsyncOperationWidgetState : uint8 {
    Success,
    Error,
    InProgress,
};

