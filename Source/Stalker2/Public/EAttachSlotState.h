#pragma once
#include "CoreMinimal.h"
#include "EAttachSlotState.generated.h"

UENUM(BlueprintType)
enum class EAttachSlotState : uint8 {
    None,
    Default,
    Detach,
    Selected = 4,
    Highlighted = 8,
    Empty = 16,
    Filled = 32,
    Disabled = 64,
    SelectedHighlighted = 12,
    HighlightedFilled = 40,
    HighlightedEmpty = 24,
    SelectedFilled = 36,
    SelectedEmpty = 20,
    SelectedHighlightedFilled = 44,
    SelectedHighlightedEmpty = 28,
};

