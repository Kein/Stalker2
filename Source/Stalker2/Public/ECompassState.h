#pragma once
#include "CoreMinimal.h"
#include "ECompassState.generated.h"

UENUM(BlueprintType)
enum class ECompassState : uint8 {
    Default,
    Battle,
    SecondaryQuestZone,
    MainQuestZone,
};

