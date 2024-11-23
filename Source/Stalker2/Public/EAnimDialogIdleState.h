#pragma once
#include "CoreMinimal.h"
#include "EAnimDialogIdleState.generated.h"

UENUM(BlueprintType)
enum class EAnimDialogIdleState : uint8 {
    None,
    Listening,
    Waiting,
    Talking,
};

