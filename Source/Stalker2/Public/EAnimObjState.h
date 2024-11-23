#pragma once
#include "CoreMinimal.h"
#include "EAnimObjState.generated.h"

UENUM()
enum class EAnimObjState {
    None,
    Alive,
    Moving,
    Walking = 4,
    Running = 8,
    Sprinting = 16,
    Crouching = 32,
    LowCrouching = 64,
    Climbing = 128,
    Falling = 256,
    Limping = 512,
    Zombie = 1024,
    BusyLeftHand = 2048,
    Sitting = 4096,
    Inspecting = 8192,
    Combat = 16384,
    Rotating = 32768,
    RenderRelevant = 65536,
};

