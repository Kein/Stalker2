#pragma once
#include "CoreMinimal.h"
#include "ModioPagedResult.h"
#include "ModioUser.h"
#include "ModioUserList.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioUserList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioPagedResult PagedResult;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FModioUser> InternalList;
    
    FModioUserList();
};

