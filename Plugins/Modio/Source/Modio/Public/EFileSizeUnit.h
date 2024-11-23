#pragma once
#include "CoreMinimal.h"
#include "EFileSizeUnit.generated.h"

UENUM(BlueprintType)
enum EFileSizeUnit {
    Largest,
    B,
    KB = 1024,
    MB = 1048576,
    GB = 1073741824,
};

