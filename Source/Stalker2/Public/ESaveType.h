#pragma once
#include "CoreMinimal.h"
#include "ESaveType.generated.h"

UENUM()
enum class ESaveType : int32 {
    Manual,
    Auto,
    Quick,
    Quest,
    GetCount,
};

