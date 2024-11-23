#pragma once
#include "CoreMinimal.h"
#include "EObjSkeletalMeshTraceBone.generated.h"

UENUM()
enum class EObjSkeletalMeshTraceBone {
    None,
    Head,
    Chest,
    RArm = 4,
    LArm = 8,
    Pelvis = 16,
    RKnee = 32,
    LKnee = 64,
    RLeg = 128,
    LLeg = 256,
    Arms = 12,
    Knees = 96,
    Legs = 384,
    UpperBody = 15,
    LowerBody = 496,
    EveryBone = 511,
    GetCount,
};

