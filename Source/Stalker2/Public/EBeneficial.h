#pragma once
#include "CoreMinimal.h"
#include "EBeneficial.generated.h"

UENUM(BlueprintType)
enum class EBeneficial : uint8 {
    None,
    Positive,
    Negative,
    GetCount,
};

