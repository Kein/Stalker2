#pragma once
#include "CoreMinimal.h"
#include "EJumpState.generated.h"

UENUM(BlueprintType)
enum class EJumpState : uint8 {
    StartJump,
    EndJump,
};

