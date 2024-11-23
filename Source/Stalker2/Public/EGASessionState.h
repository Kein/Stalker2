#pragma once
#include "CoreMinimal.h"
#include "EGASessionState.generated.h"

UENUM(BlueprintType)
enum class EGASessionState : uint8 {
    Start,
    Finish,
};

