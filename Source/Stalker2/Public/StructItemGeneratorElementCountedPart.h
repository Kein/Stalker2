#pragma once
#include "CoreMinimal.h"
#include "StructItemGeneratorElementCountedPart.generated.h"

USTRUCT()
struct STALKER2_API FStructItemGeneratorElementCountedPart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinCount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCount;
    
    FStructItemGeneratorElementCountedPart();
};

