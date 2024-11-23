#pragma once
#include "CoreMinimal.h"
#include "EVaultState.generated.h"

UENUM(BlueprintType)
enum class EVaultState : uint8 {
    None,
    VaultingOver,
    VaultingOnTop,
};

