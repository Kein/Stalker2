#pragma once
#include "CoreMinimal.h"
#include "ModioModTagInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FString TagGroupName;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FString> TagGroupValues;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bAllowMultipleSelection;
    
    FModioModTagInfo();
};

