#pragma once
#include "CoreMinimal.h"
#include "ModioTheme.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioTheme {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Primary;
    
    UPROPERTY(BlueprintReadOnly)
    FString Dark;
    
    UPROPERTY(BlueprintReadOnly)
    FString Light;
    
    UPROPERTY(BlueprintReadOnly)
    FString Success;
    
    UPROPERTY(BlueprintReadOnly)
    FString Warning;
    
    UPROPERTY(BlueprintReadOnly)
    FString Danger;
    
    FModioTheme();
};

