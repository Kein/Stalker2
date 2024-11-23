#pragma once
#include "CoreMinimal.h"
#include "EAnimDirections.h"
#include "HumanDeathAnimArray.h"
#include "HumanDeathDirectionalAnimMap.generated.h"

USTRUCT(BlueprintType)
struct FHumanDeathDirectionalAnimMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EAnimDirections, FHumanDeathAnimArray> DirectionalAnimations;
    
    STALKER2_API FHumanDeathDirectionalAnimMap();
};

