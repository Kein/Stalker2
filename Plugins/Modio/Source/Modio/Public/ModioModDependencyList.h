#pragma once
#include "CoreMinimal.h"
#include "ModioModDependency.h"
#include "ModioPagedResult.h"
#include "ModioModDependencyList.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModDependencyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioPagedResult PagedResult;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FModioModDependency> InternalList;
    
    FModioModDependencyList();
};

