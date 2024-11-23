#pragma once
#include "CoreMinimal.h"
#include "EStatSlotStates.generated.h"

UENUM()
enum class EStatSlotStates : int32 {
    None,
    Weak,
    Medium,
    Strong,
};

