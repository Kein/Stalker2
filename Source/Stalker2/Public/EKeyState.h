#pragma once
#include "CoreMinimal.h"
#include "EKeyState.generated.h"

UENUM(BlueprintType)
enum class EKeyState : uint8 {
    InitialHoldInProgress,
    PressedEvent,
    HoldEventStarted,
    Holding,
    Released,
    Processed,
};

