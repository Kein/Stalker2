#pragma once
#include "CoreMinimal.h"
#include "EAttachAction.generated.h"

UENUM(BlueprintType)
enum class EAttachAction : uint8 {
    None,
    JoinAttachToHand,
    RemoveAttachFromHandAndAttachToWeapon,
    PickingUpItem,
    RemoveItemFromHand,
    FinishRequestedInstallAttach,
    AttachMeshToSocket,
    ForceBindedHandsLookVertical,
    UpdateCameraRotation,
    UpdatePlayerPosition,
    DissolvePickedFakeArtifact,
};

