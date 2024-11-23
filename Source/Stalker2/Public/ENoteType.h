#pragma once
#include "CoreMinimal.h"
#include "ENoteType.generated.h"

UENUM()
enum class ENoteType : int32 {
    Data,
    Flash,
    Notes,
    Audio,
    GetCount,
};

