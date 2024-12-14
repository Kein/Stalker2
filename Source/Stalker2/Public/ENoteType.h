#pragma once
#include "CoreMinimal.h"
#include "ENoteType.generated.h"

UENUM()
enum class ENoteType : int32 {
    Flash,
    Data,
    Notes,
    Audio,
    GetCount,
};

