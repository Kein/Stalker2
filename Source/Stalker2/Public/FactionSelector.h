#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.generated.h"

USTRUCT()
struct STALKER2_API FFactionSelector {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Value;
    
    UPROPERTY()
    TSet<FString> AllowedFactionsFilter;
    
    FFactionSelector();
};

