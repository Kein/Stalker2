#pragma once
#include "CoreMinimal.h"
#include "ModioCreateModFileMemoryParams.generated.h"

USTRUCT(BlueprintType)
struct MODIOEX_API FModioCreateModFileMemoryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<uint8> ModMemory;
    
    FModioCreateModFileMemoryParams();
};

