#pragma once
#include "CoreMinimal.h"
#include "ETrackGroup.generated.h"

UENUM(BlueprintType)
enum class ETrackGroup : uint8 {
    MainQuest,
    SideQuest,
    PlayerLandmark,
    Hub,
    Other,
};

