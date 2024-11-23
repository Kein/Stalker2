#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioPagedResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 PageIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PageSize;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PageCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TotalResultCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ResultCount;
    
public:
    FModioPagedResult();
};

