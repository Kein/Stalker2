#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioModDependency.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModDependency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModName;
    
    FModioModDependency();
};

