#pragma once
#include "CoreMinimal.h"
#include "ModioLink.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Text;
    
    UPROPERTY(BlueprintReadOnly)
    FString URL;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRequired;
    
    FModioLink();
};

