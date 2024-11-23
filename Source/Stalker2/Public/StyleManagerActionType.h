#pragma once
#include "CoreMinimal.h"
#include "StyleManagerActionType.generated.h"

UENUM(BlueprintType)
enum class StyleManagerActionType : uint8 {
    ChangeOnlyColour,
    ChangeIcon,
    ChangeIconAndColour,
};

