#pragma once
#include "CoreMinimal.h"
#include "EProjectileMesh.generated.h"

UENUM(BlueprintType)
enum class EProjectileMesh : uint8 {
    None,
    Building,
    Barrel,
    GetCount,
};

