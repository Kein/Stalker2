#pragma once
#include "CoreMinimal.h"
#include "EDestructionActionType.generated.h"

UENUM(BlueprintType)
enum class EDestructionActionType : uint8 {
    NoActionSelected,
    SetNewMesh,
    PlayVisualEffect,
    PlaySound,
    Destroy,
    DisablePhysics,
    EnablePhysics,
    Explode,
    SpawnItems,
};

