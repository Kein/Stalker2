#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "AbilityPrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAbilityPrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPrototypeSID AbilitySID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ActivationTag;
    
    FAbilityPrototypeSID();
};

