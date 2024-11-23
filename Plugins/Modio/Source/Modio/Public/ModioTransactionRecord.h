#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioUnsigned64.h"
#include "ModioTransactionRecord.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioTransactionRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioModID AssociatedMod;
    
    UPROPERTY(BlueprintReadOnly)
    FModioUnsigned64 Price;
    
    UPROPERTY(BlueprintReadOnly)
    FModioUnsigned64 UpdatedUserWalletBalance;
    
    FModioTransactionRecord();
};

