#pragma once
#include "CoreMinimal.h"
#include "EAwareness.generated.h"

UENUM(BlueprintType)
enum class EAwareness : uint8 {
    None,
    Calm,
    Suspicious,
    Battle,
};

