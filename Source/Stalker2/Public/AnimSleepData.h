#pragma once
#include "CoreMinimal.h"
#include "AnimSleepData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimSleepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bSleep;
    
    FAnimSleepData();
};

