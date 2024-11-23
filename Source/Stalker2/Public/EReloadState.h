#pragma once
#include "CoreMinimal.h"
#include "EReloadState.generated.h"

UENUM(BlueprintType)
enum class EReloadState : uint8 {
    Started,
    Finished,
    Interrupted,
};

