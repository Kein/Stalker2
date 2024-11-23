#pragma once
#include "CoreMinimal.h"
#include "EShieldState.generated.h"

UENUM(BlueprintType)
enum class EShieldState : uint8 {
    Enabled,
    Disabled,
};

