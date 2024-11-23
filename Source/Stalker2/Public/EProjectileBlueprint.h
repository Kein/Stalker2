#pragma once
#include "CoreMinimal.h"
#include "EProjectileBlueprint.generated.h"

UENUM(BlueprintType)
enum class EProjectileBlueprint : uint8 {
    None,
    MM768,
    MM556,
    GetCount,
};

