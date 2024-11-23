#pragma once
#include "CoreMinimal.h"
#include "EInputContextAdditionalFlags.generated.h"

UENUM()
enum class EInputContextAdditionalFlags {
    None,
    Falling,
    CanBeStanding,
    HasMovementInput = 4,
    CanWalk = 8,
    CanRun = 16,
    CanSprint = 32,
    HasClimbTarget = 64,
    HasInteractTarget = 128,
    CanJump = 256,
    HasCorpse = 512,
    VaultingInProgress = 1024,
    Immobilized = 2048,
    CanCrouch = 4096,
    CanHarmUnfocusable = 8192,
    UnderbarrelAttachMode = 16384,
    InteractWithCorpse = 32768,
    HasInstantInteract = 65536,
    HasInteractWithAnim = 131072,
    HasFlashlightAnimation = 262144,
    HasFireSwitchAnimation = 524288,
    HasDragWeaponAnimation = 1048576,
};

