#pragma once
#include "CoreMinimal.h"
#include "EItemSelectorSlotStateType.generated.h"

UENUM(BlueprintType)
enum class EItemSelectorSlotStateType : uint8 {
    None,
    Hovered,
    Selected,
};

