#pragma once
#include "CoreMinimal.h"
#include "SelectedSector.generated.h"

USTRUCT(BlueprintType)
struct SECTORSELECTOR_API FSelectedSector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int64 BitmaskOfOccupiedSectorIDs;
    
    FSelectedSector();
};

