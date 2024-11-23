#pragma once
#include "CoreMinimal.h"
#include "ECauseOfDeath.h"
#include "EDamageSource.h"
#include "EDamageType.h"
#include "GameplayEventData.h"
#include "DeathEventData.generated.h"

UCLASS(BlueprintType)
class UDeathEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EDamageType DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    EDamageSource DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    ECauseOfDeath CauseOfDeath;
    
    UDeathEventData();

};

