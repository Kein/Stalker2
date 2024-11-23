#pragma once
#include "CoreMinimal.h"
#include "EToggleType.generated.h"

UENUM(BlueprintType)
enum class EToggleType : uint8 {
    Open,
    DotOpen,
    Close,
};

