#pragma once
#include "CoreMinimal.h"
#include "InteractionData.h"
#include "HoldInteractionData.generated.h"

USTRUCT(BlueprintType)
struct FHoldInteractionData : public FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HoldTime;
    
    UPROPERTY(EditAnywhere)
    float DecreaseTime;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotDecrease;
    
    STALKER2_API FHoldInteractionData();
};

