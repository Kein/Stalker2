#pragma once
#include "CoreMinimal.h"
#include "ENotifyGuitarAction.generated.h"

UENUM(BlueprintType)
enum class ENotifyGuitarAction : uint8 {
    StrumUp,
    StrumDown,
    ExitCompleted,
    EnterCompleted,
    ShowGuitarMesh,
    OnStrumComplete,
};

