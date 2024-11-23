#pragma once
#include "CoreMinimal.h"
#include "ECutsceneEyesIdleProfile.generated.h"

UENUM(BlueprintType)
enum class ECutsceneEyesIdleProfile : uint8 {
    NoIdle,
    Default,
    Dialog,
    KeepEyesOff,
};

