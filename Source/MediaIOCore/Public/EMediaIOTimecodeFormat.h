#pragma once
#include "CoreMinimal.h"
#include "EMediaIOTimecodeFormat.generated.h"

UENUM()
enum class EMediaIOTimecodeFormat : int32 {
    None,
    LTC,
    VITC,
};

