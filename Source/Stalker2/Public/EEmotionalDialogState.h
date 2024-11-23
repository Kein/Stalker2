#pragma once
#include "CoreMinimal.h"
#include "EEmotionalDialogState.generated.h"

UENUM(BlueprintType)
enum class EEmotionalDialogState : uint8 {
    Talking,
    ListeningWaiting,
    Unique,
};

