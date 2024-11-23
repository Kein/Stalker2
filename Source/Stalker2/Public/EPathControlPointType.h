#pragma once
#include "CoreMinimal.h"
#include "EPathControlPointType.generated.h"

UENUM(BlueprintType)
enum class EPathControlPointType : uint8 {
    Regular,
    Avoidance,
    GetCount,
};

