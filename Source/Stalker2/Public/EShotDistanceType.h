#pragma once
#include "CoreMinimal.h"
#include "EShotDistanceType.generated.h"

UENUM(BlueprintType)
enum class EShotDistanceType : uint8 {
    Short,
    Medium,
    Long,
    GetCount,
};

