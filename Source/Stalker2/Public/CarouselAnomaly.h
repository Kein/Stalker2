#pragma once
#include "CoreMinimal.h"
#include "Anomaly.h"
#include "PrototypeSID.h"
#include "CarouselAnomaly.generated.h"

class UAkAudioEvent;
class UFXSystemAsset;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;

UCLASS()
class STALKER2_API ACarouselAnomaly : public AAnomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* CollisionMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UNiagaraComponent* IdleParticle;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UNiagaraComponent* ActivateParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* InteractionParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* ActionDamagePlayerParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* ActionDamageNPCParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UFXSystemAsset* WaterContactParticle;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UNiagaraSystem> BodyExplodeParticle;
    
    UPROPERTY(EditAnywhere)
    FPrototypeSID BodyExplodeStashSID;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> InteractionSoundEvent;
    
public:
    ACarouselAnomaly(const FObjectInitializer& ObjectInitializer);

};

