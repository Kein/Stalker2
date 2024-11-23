#pragma once
#include "CoreMinimal.h"
#include "EStashActionType.generated.h"

UENUM(BlueprintType)
enum class EStashActionType : uint8 {
    Open,
    Close,
};

