#pragma once
#include "CoreMinimal.h"
#include "EHintHoverActionType.generated.h"

UENUM(BlueprintType)
enum class EHintHoverActionType : uint8 {
    None,
    ChangeVisibility,
    ChangeColor,
};

