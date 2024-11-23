#pragma once
#include "CoreMinimal.h"
#include "EAnimTopazAction.generated.h"

UENUM(BlueprintType)
enum class EAnimTopazAction : uint8 {
    None,
    SetVisible,
    SetInvisible,
    EnableDisplay,
    DisableDisplay,
};

