#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEventData.h"
#include "SummonAbilityEventData.generated.h"

UCLASS(BlueprintType)
class USummonAbilityEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    USummonAbilityEventData();

    UFUNCTION(BlueprintPure)
    bool ShouldSpawnEffects() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetSummonLocations() const;
    
};

