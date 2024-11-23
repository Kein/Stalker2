#pragma once
#include "CoreMinimal.h"
#include "EEmotionalFaceMasks.generated.h"

UENUM(BlueprintType)
enum class EEmotionalFaceMasks : uint8 {
    None,
    Surprised,
    Angry,
    Scared,
    Sad,
    Happy,
};

