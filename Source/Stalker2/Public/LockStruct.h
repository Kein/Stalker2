#pragma once
#include "CoreMinimal.h"
#include "GlobalVariable.h"
#include "ItemLock.h"
#include "LockStruct.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FLockStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FItemLock> LockedByItems;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FGlobalVariable> LockedByGlobalVariables;
    
    FLockStruct();
};

