#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionDataInterface.h"
#include "HitReceiver.h"
#include "UIDActor_ItemContainer.h"
#include "Artifact.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UArtifactInteractableComponent;
class UFXSystemAsset;
class UFXSystemComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class USphereComponent;

UCLASS(NotPlaceable)
class STALKER2_API AArtifact : public AUIDActor_ItemContainer, public IActorInteractionDataInterface, public IHitReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* StrafeParticle;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UArtifactInteractableComponent* ArtifactInteractableComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
private:
    UPROPERTY(EditAnywhere)
    bool bDetectorRequired;
    
    UPROPERTY()
    UAkAudioEvent* ChargingEvent;
    
    UPROPERTY()
    UAkAudioEvent* JumpEvent;
    
    UPROPERTY()
    UAkAudioEvent* Sound;
    
    UPROPERTY()
    UAkAudioEvent* SoundStop;
    
    UPROPERTY()
    UAkAudioEvent* SoundStateTransitionOnHide;
    
    UPROPERTY()
    UAkAudioEvent* SoundStateTransitionOnShow;
    
    UPROPERTY()
    UAkSwitchValue* ArtifactTypeSwitchValue;
    
    UPROPERTY()
    UFXSystemAsset* ParticleOnShow;
    
    UPROPERTY()
    UAkAudioEvent* FakeArtifactDistortionSound;
    
    UPROPERTY()
    UFXSystemAsset* FakeArtifactDistortionVFX;
    
    UPROPERTY()
    UFXSystemAsset* FakeArtifactDissolveVFX;
    
    UPROPERTY()
    UNiagaraSystem* ParticleStateTransitionFadeIn;
    
    UPROPERTY()
    UNiagaraSystem* ParticleStateTransitionFadeOut;
    
    UPROPERTY()
    UNiagaraSystem* ParticleOnImpact;
    
    UPROPERTY(Instanced, Transient)
    UFXSystemComponent* ActiveParticleOnShow;
    
public:
    AArtifact(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

