#pragma once
#include "CoreMinimal.h"
#include "ETriggerShape.generated.h"

UENUM(BlueprintType)
enum class ETriggerShape : uint8 {
    Box,
    Sphere,
    Cylinder,
    Freeform,
};

