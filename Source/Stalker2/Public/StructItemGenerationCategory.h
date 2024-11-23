#pragma once
#include "CoreMinimal.h"
#include "EItemGenerationCategory.h"
#include "StructItemGeneratorSingleElement.h"
#include "StructItemGenerationCategory.generated.h"

USTRUCT()
struct STALKER2_API FStructItemGenerationCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EItemGenerationCategory Category;
    
    UPROPERTY(EditAnywhere)
    TArray<FStructItemGeneratorSingleElement> PossibleItems;
    
    UPROPERTY(EditAnywhere)
    bool bAllowSameCategoryGeneration;
    
    FStructItemGenerationCategory();
};

