#pragma once
#include "CoreMinimal.h"
#include "ItemLock.generated.h"

USTRUCT(BlueprintType)
struct FItemLock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemCount;
    
    STALKER2_API FItemLock();
};

