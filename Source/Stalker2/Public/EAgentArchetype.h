#pragma once
#include "CoreMinimal.h"
#include "EAgentArchetype.generated.h"

UENUM(BlueprintType)
enum class EAgentArchetype : uint8 {
    Human,
    Mutant,
    GetCount,
};

