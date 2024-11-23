#pragma once
#include "CoreMinimal.h"
#include "EAnimStealthKillPose.generated.h"

UENUM(BlueprintType)
enum class EAnimStealthKillPose : uint8 {
    None,
    Standing,
    Sitting,
    SittingOnGround,
};

