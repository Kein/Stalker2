#pragma once
#include "CoreMinimal.h"
#include "EModioModProgressState.generated.h"

UENUM(BlueprintType)
enum class EModioModProgressState : uint8 {
    Initializing,
    Downloading,
    Extracting,
    Compressing,
    Uploading,
};

