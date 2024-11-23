#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimValveData.h"
#include "EValveState.h"
#include "AnimInstanceValve.generated.h"

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceValve : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimValveData ValveData;
    
public:
    UAnimInstanceValve();

    UFUNCTION(BlueprintCallable)
    void SetValveState(const EValveState ValveState);
    
};

