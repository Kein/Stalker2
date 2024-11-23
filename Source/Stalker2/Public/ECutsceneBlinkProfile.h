#pragma once
#include "CoreMinimal.h"
#include "ECutsceneBlinkProfile.generated.h"

UENUM(BlueprintType)
enum class ECutsceneBlinkProfile : uint8 {
    Default,
    NoBlink,
    Frequent,
};

