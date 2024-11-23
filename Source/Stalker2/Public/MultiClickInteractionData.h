#pragma once
#include "CoreMinimal.h"
#include "InteractionData.h"
#include "MultiClickInteractionData.generated.h"

USTRUCT(BlueprintType)
struct FMultiClickInteractionData : public FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ClickPercentageIncrease;
    
    UPROPERTY(EditAnywhere)
    float PercentageDecrease;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotDecrease;
    
    STALKER2_API FMultiClickInteractionData();
};

