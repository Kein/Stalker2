#pragma once
#include "CoreMinimal.h"
#include "EALifeGroupPriorityType.generated.h"

UENUM(BlueprintType)
enum class EALifeGroupPriorityType : uint8 {
    Default,
    Global,
    Local,
    Emission,
    Quest,
    Directed,
    Count,
};

