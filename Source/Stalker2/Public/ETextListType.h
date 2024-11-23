#pragma once
#include "CoreMinimal.h"
#include "ETextListType.generated.h"

UENUM(BlueprintType)
enum class ETextListType : uint8 {
    None,
    Point,
    Numeric,
};

