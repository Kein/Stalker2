#pragma once
#include "CoreMinimal.h"
#include "ETriggerReact.generated.h"

UENUM(BlueprintType)
enum class ETriggerReact : uint8 {
    ReactOnAlive,
    ReactOnDead,
    ReactBoth,
};

