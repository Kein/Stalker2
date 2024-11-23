#pragma once
#include "CoreMinimal.h"
#include "EDragDeadBodyState.generated.h"

UENUM(BlueprintType)
enum class EDragDeadBodyState : uint8 {
    StartDragDeadBody,
    EndDragDeadBody,
    StartPutDeadBody,
    EndPutDeadBody,
    StartCorpseDragIn,
    EndCorpseDragIn,
    StartCorpseDragOut,
    EndCorpseDragOut,
};

