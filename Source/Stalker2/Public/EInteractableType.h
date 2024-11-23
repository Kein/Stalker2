#pragma once
#include "CoreMinimal.h"
#include "EInteractableType.generated.h"

UENUM(BlueprintType)
enum class EInteractableType : uint8 {
    None,
    Body,
    CodeLock,
    Door,
    ItemContainer,
    Lever,
    Look,
    Sleep,
    Artifact,
    NPC,
    ToggleButton,
    Ladder,
    Custom,
};

