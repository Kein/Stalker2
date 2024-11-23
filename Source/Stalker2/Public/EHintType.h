#pragma once
#include "CoreMinimal.h"
#include "EHintType.generated.h"

UENUM(BlueprintType)
enum class EHintType : uint8 {
    None,
    General,
    Audiolog,
    InspectArtifact,
};

