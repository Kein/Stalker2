#pragma once
#include "CoreMinimal.h"
#include "EGameGraphGenerationDebugType.generated.h"

UENUM(BlueprintType)
enum class EGameGraphGenerationDebugType : uint8 {
    None,
    Samples,
    SamplesLinks,
    All = 255,
};

