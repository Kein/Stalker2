#pragma once
#include "CoreMinimal.h"
#include "ESoundEventType.generated.h"

UENUM()
enum class ESoundEventType : uint32 {
    None,
    Shot,
    Reload,
    Steps = 4,
    Jump = 8,
    Voice = 16,
    AnomalyActivated = 32,
    Explosion = 64,
    BulletFlyby = 128,
    PhysObjectImpact = 256,
    Interactable = 512,
    DoorKnockedOut = 1024,
    Bolt = 2048,
    StealthKill = 4096,
    BulletHit = 8192,
    GrenadeHit = 16384,
    Guitar = 32768,
    Count = Voice,
};

