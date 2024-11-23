#pragma once
#include "CoreMinimal.h"
#include "ERequiredSquadMembers.generated.h"

UENUM(BlueprintType)
enum class ERequiredSquadMembers : uint8 {
    AllMembers,
    AnyMember,
};

