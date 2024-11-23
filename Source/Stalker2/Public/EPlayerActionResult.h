#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionResult.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionResult : uint8 {
    End,
    Interrupt,
};

