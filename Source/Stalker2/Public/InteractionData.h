#pragma once
#include "CoreMinimal.h"
#include "InteractionData.generated.h"

USTRUCT()
struct FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString InteractableTextToolAction;
    
    STALKER2_API FInteractionData();
};

