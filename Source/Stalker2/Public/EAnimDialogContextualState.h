#pragma once
#include "CoreMinimal.h"
#include "EAnimDialogContextualState.generated.h"

UENUM(BlueprintType)
enum class EAnimDialogContextualState : uint8 {
    Stand,
    SitChair,
    SitBarrel,
    SitEdge,
    SitGround,
};

