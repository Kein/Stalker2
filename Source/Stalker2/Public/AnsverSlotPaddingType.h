#pragma once
#include "CoreMinimal.h"
#include "AnsverSlotPaddingType.generated.h"

UENUM(BlueprintType)
enum class AnsverSlotPaddingType : uint8 {
    None,
    Top,
    Bottom,
    TopAndBottom,
};

