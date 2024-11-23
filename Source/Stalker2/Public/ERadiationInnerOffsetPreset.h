#pragma once
#include "CoreMinimal.h"
#include "ERadiationInnerOffsetPreset.generated.h"

UENUM(BlueprintType)
enum class ERadiationInnerOffsetPreset : uint8 {
    None,
    Half,
    Full,
    Custom,
    GetCount,
};

