#pragma once
#include "CoreMinimal.h"
#include "EAffectMembers.generated.h"

UENUM(BlueprintType)
enum class EAffectMembers : uint8 {
    NoAffectMembers,
    AffectMembers,
    Count,
};

