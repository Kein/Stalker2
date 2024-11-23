#pragma once
#include "CoreMinimal.h"
#include "EMediaIOReferenceType.generated.h"

UENUM()
enum class EMediaIOReferenceType : int32 {
    FreeRun,
    External,
    Input,
};

