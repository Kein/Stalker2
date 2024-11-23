#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.h"
#include "FactionSelectorArray.generated.h"

USTRUCT()
struct STALKER2_API FFactionSelectorArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FFactionSelector> Factions;
    
    FFactionSelectorArray();
};

