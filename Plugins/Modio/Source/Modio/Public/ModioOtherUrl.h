#pragma once
#include "CoreMinimal.h"
#include "ModioOtherUrl.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioOtherUrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Label;
    
    UPROPERTY(BlueprintReadOnly)
    FString URL;
    
    FModioOtherUrl();
};

