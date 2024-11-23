#pragma once
#include "CoreMinimal.h"
#include "EAudioVolumeAxisOptionType.generated.h"

UENUM(BlueprintType)
enum class EAudioVolumeAxisOptionType : uint8 {
    None,
    X,
    Y,
    Z,
    X_Neg,
    Y_Neg,
    Z_Neg,
};

