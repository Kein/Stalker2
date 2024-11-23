#pragma once
#include "CoreMinimal.h"
#include "EMediaCaptureOverrunAction.generated.h"

UENUM(BlueprintType)
enum class EMediaCaptureOverrunAction : uint8 {
    Flush,
    Skip,
};

