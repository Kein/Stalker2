#pragma once
#include "CoreMinimal.h"
#include "ELookAtAction.generated.h"

UENUM(BlueprintType)
enum class ELookAtAction : uint8 {
    Start,
    Restrict,
    ChangeOwnerState,
};

