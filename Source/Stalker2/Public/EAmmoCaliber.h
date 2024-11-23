#pragma once
#include "CoreMinimal.h"
#include "EAmmoCaliber.generated.h"

UENUM(BlueprintType)
enum class EAmmoCaliber : uint8 {
    None,
    A918,
    A919,
    A045,
    A545,
    A556,
    A762,
    A762Sniper,
    A762NATO,
    A939,
    A012,
    AVOG,
    AGA,
    APG7V,
    AHEDP,
    GetCount,
};

