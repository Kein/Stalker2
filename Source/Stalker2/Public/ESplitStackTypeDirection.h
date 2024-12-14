#pragma once
#include "CoreMinimal.h"
#include "ESplitStackTypeDirection.generated.h"

UENUM(BlueprintType)
enum class ESplitStackTypeDirection : uint8 {
    None,
    Take,
    PutDown,
    Drop,
};

