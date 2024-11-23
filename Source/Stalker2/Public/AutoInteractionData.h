#pragma once
#include "CoreMinimal.h"
#include "InteractionData.h"
#include "AutoInteractionData.generated.h"

USTRUCT(BlueprintType)
struct FAutoInteractionData : public FInteractionData {
    GENERATED_BODY()
public:
    STALKER2_API FAutoInteractionData();
};

