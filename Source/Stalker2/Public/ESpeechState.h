#pragma once
#include "CoreMinimal.h"
#include "ESpeechState.generated.h"

UENUM(BlueprintType)
enum class ESpeechState : uint8 {
    None,
    Load,
    Play,
    Pause,
    Finish,
};

