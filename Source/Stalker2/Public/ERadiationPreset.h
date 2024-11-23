#pragma once
#include "CoreMinimal.h"
#include "ERadiationPreset.generated.h"

UENUM(BlueprintType)
enum class ERadiationPreset : uint8 {
    None,
    Light,
    Medium,
    Strong,
    Deadly,
    RadBlock,
    Custom,
    Topaz,
    GetCount,
};

