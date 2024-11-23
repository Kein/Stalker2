#pragma once
#include "CoreMinimal.h"
#include "EChangeValueMode.generated.h"

UENUM(BlueprintType)
enum class EChangeValueMode : uint8 {
    Set,
    Add,
    Subtract,
    Multiply,
    Divide,
};

