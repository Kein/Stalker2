#pragma once
#include "CoreMinimal.h"
#include "EAnimFacialSource.generated.h"

UENUM(BlueprintType)
enum class EAnimFacialSource : uint8 {
    Dialog,
    Contextual,
    ActorDuplicating,
};

