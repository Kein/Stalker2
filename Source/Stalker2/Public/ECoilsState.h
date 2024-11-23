#pragma once
#include "CoreMinimal.h"
#include "ECoilsState.generated.h"

UENUM(BlueprintType)
enum class ECoilsState : uint8 {
    Broken,
    Restoring,
    Cooled,
};

