#pragma once
#include "CoreMinimal.h"
#include "EMediaCaptureState.generated.h"

UENUM(BlueprintType)
enum class EMediaCaptureState : uint8 {
    Error,
    Capturing,
    Preparing,
    StopRequested,
    Stopped,
};

