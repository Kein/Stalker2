#pragma once
#include "CoreMinimal.h"
#include "EAbility.h"
#include "GameplayEventData.h"
#include "AbilityEventData.generated.h"

UCLASS(BlueprintType)
class UAbilityEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UAbilityEventData();

    UFUNCTION(BlueprintPure)
    FName GetActivationTag() const;
    
    UFUNCTION(BlueprintPure)
    EAbility GetAbilityType() const;
    
};

