#pragma once
#include "CoreMinimal.h"
#include "EPreviousStateMode.generated.h"

UENUM(BlueprintType)
enum class EPreviousStateMode : uint8 {
    None,
    SavePrevious,
    UsePrevious,
};

