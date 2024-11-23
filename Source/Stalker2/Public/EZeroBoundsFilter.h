#pragma once
#include "CoreMinimal.h"
#include "EZeroBoundsFilter.generated.h"

UENUM(BlueprintType)
enum class EZeroBoundsFilter : uint8 {
    None,
    OnlyGroupActors,
    OnlyPrefabActors,
    OnlyStaticMeshActors,
};

