#pragma once
#include "CoreMinimal.h"
#include "ModioMetadata.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Key;
    
    UPROPERTY(BlueprintReadOnly)
    FString Value;
    
    FModioMetadata();
};

