#pragma once
#include "CoreMinimal.h"
#include "EGAQuickSlotUseState.generated.h"

UENUM(BlueprintType)
enum class EGAQuickSlotUseState : uint8 {
    Started,
    Interrupted,
    Finished,
};

