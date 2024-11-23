#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDamageSource.h"
#include "EDamageType.h"
#include "GameplayEventData.h"
#include "HitEventData.generated.h"

UCLASS(BlueprintType)
class UHitEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector DamageHitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector DamageImpulse;
    
    UPROPERTY(BlueprintReadOnly)
    EDamageType DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    EDamageSource DamageSource;
    
public:
    UHitEventData();

};

