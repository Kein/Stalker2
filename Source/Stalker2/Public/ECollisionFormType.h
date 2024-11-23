#pragma once
#include "CoreMinimal.h"
#include "ECollisionFormType.generated.h"

UENUM(BlueprintType)
enum class ECollisionFormType : uint8 {
    None,
    Box,
    Sphere,
    Cylinder,
    Custom,
};

