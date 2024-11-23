#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionInputTrigger.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionInputTrigger : uint8 {
    None,
    Down,
    Pressed,
    Released,
    Tap,
    Hold,
    HoldAndRelease,
    Pulse,
    ChordAction,
    ChordBlocker,
    TriggerCombo,
    HoldWithActivationDelay,
    GetCount,
};

