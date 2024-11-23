#pragma once
#include "CoreMinimal.h"
#include "ContextualActionGlobalVariablePrototypeSID.generated.h"

USTRUCT()
struct STALKER2_API FContextualActionGlobalVariablePrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Value;
    
    FContextualActionGlobalVariablePrototypeSID();
};

