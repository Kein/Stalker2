#pragma once
#include "CoreMinimal.h"
#include "EValveState.generated.h"

UENUM(BlueprintType)
enum class EValveState : uint8 {
    OpenInFirst,
    OpenIn,
    CloseIn,
};

