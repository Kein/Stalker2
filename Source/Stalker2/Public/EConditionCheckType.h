#pragma once
#include "CoreMinimal.h"
#include "EConditionCheckType.generated.h"

UENUM(BlueprintType)
enum class EConditionCheckType : uint8 {
    None,
    And,
    Or,
};

