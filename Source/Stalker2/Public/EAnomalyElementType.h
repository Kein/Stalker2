#pragma once
#include "CoreMinimal.h"
#include "EAnomalyElementType.generated.h"

UENUM(BlueprintType)
enum class EAnomalyElementType : uint8 {
    None,
    Gravity,
    Electro,
    Fire,
    Chemical,
    PSY,
    GetCount,
};

