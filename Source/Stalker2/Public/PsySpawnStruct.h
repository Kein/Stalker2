#pragma once
#include "CoreMinimal.h"
#include "PsySpawnStruct.generated.h"

class AAgent;

USTRUCT()
struct FPsySpawnStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 GameGraphMinComponentVerticesCount;
    
    UPROPERTY()
    TSoftClassPtr<AAgent> CurrentPsyPrototypeClass;
    
    STALKER2_API FPsySpawnStruct();
};

