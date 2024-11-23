#pragma once
#include "CoreMinimal.h"
#include "MontageSection.generated.h"

USTRUCT()
struct STALKER2_API FMontageSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Value;
    
    FMontageSection();
};

