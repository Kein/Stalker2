#pragma once
#include "CoreMinimal.h"
#include "EStartDialogType.generated.h"

UENUM(BlueprintType)
enum class EStartDialogType : uint8 {
    CanStart,
    CanStartWaitingForContextualAction,
    CanNotStart,
};

