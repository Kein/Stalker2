#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionData.generated.h"

USTRUCT()
struct STALKER2_API FActorInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString InteractableTextToolName;
    
    FActorInteractionData();
};

