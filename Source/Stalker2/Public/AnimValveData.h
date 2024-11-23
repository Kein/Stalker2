#pragma once
#include "CoreMinimal.h"
#include "EValveState.h"
#include "AnimValveData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimValveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EValveState ValveState;
    
    FAnimValveData();
};

