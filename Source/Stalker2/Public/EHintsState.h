#pragma once
#include "CoreMinimal.h"
#include "EHintsState.generated.h"

UENUM(BlueprintType)
enum class EHintsState : uint8 {
    None,
    HoveredItem,
    Drag,
    ContextualMenu,
    Split,
    QuickPanel,
};

