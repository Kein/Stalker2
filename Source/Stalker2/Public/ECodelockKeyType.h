#pragma once
#include "CoreMinimal.h"
#include "ECodelockKeyType.generated.h"

UENUM()
enum class ECodelockKeyType : int32 {
    Digit,
    Enter,
    Cancel,
};

