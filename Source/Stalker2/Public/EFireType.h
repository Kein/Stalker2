#pragma once
#include "CoreMinimal.h"
#include "EFireType.generated.h"

UENUM(BlueprintType)
enum class EFireType : uint8 {
    None,
    SemiAutomatic,
    Queue,
    Automatic,
    Dualshot,
    GetCount,
};

