#pragma once
#include "CoreMinimal.h"
#include "AbilityPrototypeSID.h"
#include "EffectPrototypeSID.h"
#include "ScarPhaseData.generated.h"

USTRUCT(BlueprintType)
struct FScarPhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEffectPrototypeSID> EffectsToApply;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEffectPrototypeSID> EffectsToRemove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAbilityPrototypeSID> AbilitiesToGive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PhaseHPThreshold;
    
    STALKER2_API FScarPhaseData();
};

