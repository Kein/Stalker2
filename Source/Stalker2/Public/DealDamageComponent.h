#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDamageSource.h"
#include "EDamageType.h"
#include "DealDamageComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDealDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    float ArmorDamage;
    
    UPROPERTY(EditAnywhere)
    float ArmorPiercing;
    
    UPROPERTY(EditAnywhere)
    EDamageType DamageType;
    
    UPROPERTY(EditAnywhere)
    EDamageSource DamageSource;
    
public:
    UDealDamageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DealDamage(const AActor* InTargetActor) const;
    
};

