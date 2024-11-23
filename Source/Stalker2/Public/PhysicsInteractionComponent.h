#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitReceiver.h"
#include "PhysicsInteractionComponent.generated.h"

class UFXSystemAsset;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPhysicsInteractionComponent : public UActorComponent, public IHitReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bLoadDefaultPrototypeOnBeginPlay;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCreateWaterContactController;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCreateWetnessComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UFXSystemAsset* WaterContactNiagaraSystemVFX;
    
private:
    UPROPERTY(EditAnywhere)
    FString PhysicsInteractionPrototypeSID;
    
public:
    UPhysicsInteractionComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

