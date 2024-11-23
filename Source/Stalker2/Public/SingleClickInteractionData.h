#pragma once
#include "CoreMinimal.h"
#include "InteractionData.h"
#include "SingleClickInteractionData.generated.h"

USTRUCT(BlueprintType)
struct FSingleClickInteractionData : public FInteractionData {
    GENERATED_BODY()
public:
    STALKER2_API FSingleClickInteractionData();
};

