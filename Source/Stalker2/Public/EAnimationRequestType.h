#pragma once
#include "CoreMinimal.h"
#include "EAnimationRequestType.generated.h"

UENUM(BlueprintType)
enum class EAnimationRequestType : uint8 {
    None,
    WhenAvailableSlot,
    WhenChangeState,
    WhenAnimMontageBlendingOut,
    WhenAnimMontageEnded,
    WhenAnimationStarted,
};

