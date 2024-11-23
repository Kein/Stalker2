#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    None,
    Burn,
    Shock,
    ChemicalBurn,
    Radiation,
    PSY,
    Strike,
    Fall,
    Physics,
    Emission,
    Bleeding,
    Hunger,
    GetCount,
};

