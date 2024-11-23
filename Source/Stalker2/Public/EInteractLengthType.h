#pragma once
#include "CoreMinimal.h"
#include "EInteractLengthType.generated.h"

UENUM(BlueprintType)
enum class EInteractLengthType : uint8 {
    None,
    Regular,
    WithAnim,
    Instant,
};

