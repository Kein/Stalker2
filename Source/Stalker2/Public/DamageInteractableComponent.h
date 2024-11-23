#pragma once
#include "CoreMinimal.h"
#include "EDamageSource.h"
#include "HitReceiver.h"
#include "OnDamageAccumulatedDelegate.h"
#include "SaveableComponent.h"
#include "UIDActorComponent.h"
#include "DamageInteractableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UDamageInteractableComponent : public UUIDActorComponent, public IHitReceiver, public ISaveableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnDamageAccumulated OnDamageAccumulated;
    
    UPROPERTY(EditAnywhere)
    TSet<EDamageSource> DamageSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionDamageThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyPlayerDamage;
    
public:
    UDamageInteractableComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

