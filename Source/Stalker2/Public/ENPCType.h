#pragma once
#include "CoreMinimal.h"
#include "ENPCType.generated.h"

UENUM(BlueprintType)
enum class ENPCType : uint8 {
    None,
    Trader,
    Technician,
    Repairman,
    Guide,
    GetCount,
};

