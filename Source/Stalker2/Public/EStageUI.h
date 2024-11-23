#pragma once
#include "CoreMinimal.h"
#include "EStageUI.generated.h"

UENUM(BlueprintType)
enum class EStageUI : uint8 {
    None,
    Show,
    Update,
    Hide = 4,
    PermanentHide = 8,
    ShowUpdate = 3,
    ShowHide = 5,
    ShowPermanentHide = 9,
    UpdateHide = 6,
    UpdatePermanentHide = 10,
    HidePermanentHide = 12,
    ShowUpdateHide = 7,
    ShowUpdatePermanentHide = 11,
    ShowHidePermanentHide = 13,
    UpdateHidePermanentHide,
    ShowUpdateHidePermanentHide,
    GetCount,
};

