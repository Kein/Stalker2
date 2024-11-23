#pragma once
#include "CoreMinimal.h"
#include "EArtifactRarity.generated.h"

UENUM(BlueprintType)
enum class EArtifactRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    GetCount,
};

