#pragma once
#include "CoreMinimal.h"
#include "EObjSpawnStage.generated.h"

UENUM(BlueprintType)
enum class EObjSpawnStage : uint8 {
    HasModel,
    HasBlueprintActor,
    MeshGenerationStarted,
    ProcessedFlashlight,
    CheckingPlayerVisiblity,
    FinishedSpawn,
};

