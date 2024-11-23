#pragma once
#include "CoreMinimal.h"
#include "EConditionComparance.generated.h"

UENUM(BlueprintType)
enum class EConditionComparance : uint8 {
    Less,
    LessOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
};

