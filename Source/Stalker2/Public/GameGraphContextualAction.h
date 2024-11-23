#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameGraphContextualAction.generated.h"

USTRUCT()
struct FGameGraphContextualAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid QuestGuid;
    
    STALKER2_API FGameGraphContextualAction();
};

