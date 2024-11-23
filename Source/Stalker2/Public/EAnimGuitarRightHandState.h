#pragma once
#include "CoreMinimal.h"
#include "EAnimGuitarRightHandState.generated.h"

UENUM(BlueprintType)
enum class EAnimGuitarRightHandState : uint8 {
    StrumDown,
    StrumUp,
    StrumDownWithoutUp,
    StrumUpWithoutDown,
    StrumDownWithoutUpTwice,
    StrumUpWithoutDownTwice,
};

