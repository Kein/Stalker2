#pragma once
#include "CoreMinimal.h"
#include "GameGraphContextualAction.h"
#include "GameGraphContextualActions.generated.h"

USTRUCT(BlueprintType)
struct FGameGraphContextualActions {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGameGraphContextualAction> ContextualActions;
    
    STALKER2_API FGameGraphContextualActions();
};

