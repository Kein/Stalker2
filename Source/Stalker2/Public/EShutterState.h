#pragma once
#include "CoreMinimal.h"
#include "EShutterState.generated.h"

UENUM(BlueprintType)
enum class EShutterState : uint8 {
    None,
    ReadyToShoot,
    FirstBarrelShot,
    LastShot,
};

