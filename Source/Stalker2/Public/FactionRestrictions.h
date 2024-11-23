#pragma once
#include "CoreMinimal.h"
#include "ESpaceRestrictionType.h"
#include "FactionSelector.h"
#include "FactionRestrictions.generated.h"

USTRUCT()
struct STALKER2_API FFactionRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFactionSelector Faction;
    
    UPROPERTY(EditAnywhere)
    ESpaceRestrictionType RestrictionType;
    
    FFactionRestrictions();
};

