#pragma once
#include "CoreMinimal.h"
#include "EAIFeature.generated.h"

UENUM()
enum class EAIFeature : uint32 {
    None,
    Tick,
    UpdateDecision,
    Threat = 4,
    Combat = 8,
    UpdateSensors = 16,
    Vision = 32,
    Hearing = 64,
    Hit = 128,
    Flair = 256,
    EmissionThreatAndCombat = 512,
    Sanity = 1024,
    MovementDetection = 2048,
    ALifeDirector = 4096,
    LeaveRestrictedArea = 8192,
    WoundedWeapon = 16384,
    MotionWarpingNPC = 32768,
    ALifePopulationManager = 65536,
    SeePlayer = 131072,
    LuminanceManager = 262144,
    FlashlightUseManager = 524288,
    All = 1048575,
};

