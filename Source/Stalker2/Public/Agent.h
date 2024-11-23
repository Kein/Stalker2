#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionDataInterface.h"
#include "DamageInteractVFXData.h"
#include "ECutsceneBlinkProfile.h"
#include "ECutsceneEyesIdleProfile.h"
#include "ESpawnSource.h"
#include "GameplayEventListener.h"
#include "Obj.h"
#include "Physible.h"
#include "Agent.generated.h"

class AActor;
class UAITickComponent;
class UDataLayerPhysicsComponent;
class UDeadBody;
class ULODSyncComponent;
class UMotionWarpingComponent;
class UNPCComponent;
class UNiagaraComponent;
class UPhysicsControlComponent;
class UPhysicsInteractionComponent;
class UPhysicsSoundsComponent;
class UTouchComponent;
class UWoundedHoldComponent;

UCLASS()
class STALKER2_API AAgent : public AObj, public IActorInteractionDataInterface, public IGameplayEventListener, public IPhysible {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPhysicsSoundsComponent* PhysicsSoundsComponent;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNPCComponent* NPCComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UPhysicsInteractionComponent* PhysicsInteractionComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UWoundedHoldComponent* WoundedHoldComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UTouchComponent* TouchComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UMotionWarpingComponent* MotionWarpingComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAITickComponent* AITickComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UPhysicsControlComponent* PhysicsControlComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    ULODSyncComponent* LODSyncComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UDataLayerPhysicsComponent* DataLayerPhysicsComponent;
    
    UPROPERTY(Instanced, Transient)
    UDeadBody* DeadBodyComponent;
    
    UPROPERTY()
    FDamageInteractVFXData DamageInteractVFXData;
    
    UPROPERTY(EditAnywhere)
    FName AttachDamageInteractVFXBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* CutsceneLookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneEyesLookAtWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneHeadLookAtWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECutsceneBlinkProfile CutsceneBlinkProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ECutsceneEyesIdleProfile CutsceneEyesIdleProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneProceduralEyesWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneProceduralEyesAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CutsceneProceduralEyesIntensity;
    
    UPROPERTY(EditDefaultsOnly)
    float GuaranteedRelevancyUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName RagdollProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FName> RagdollBonesToOverlap;
    
public:
    AAgent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void SetCutsceneProceduralEyesWeight(float Value) const;
    
    UFUNCTION()
    void SetCutsceneProceduralEyesIntensity(float Value) const;
    
    UFUNCTION()
    void SetCutsceneProceduralEyesAmplitude(float Value) const;
    
    UFUNCTION()
    void SetCutsceneLookAtActor(const AActor* Value) const;
    
    UFUNCTION()
    void SetCutsceneHeadLookAtWeight(float Weight) const;
    
    UFUNCTION()
    void SetCutsceneEyesLookAtWeight(float Weight) const;
    
    UFUNCTION()
    void SetCutsceneEyesIdleProfile(ECutsceneEyesIdleProfile NewCutsceneEyesIdleProfile) const;
    
    UFUNCTION()
    void SetCutsceneBlinkProfile(ECutsceneBlinkProfile NewCutsceneBlinkProfile) const;
    
    UFUNCTION()
    void PsyNPCInteractionStarted(AObj* InteractActor);
    
public:
    UFUNCTION(BlueprintPure)
    ESpawnSource GetSpawnSource() const;
    
private:
    UFUNCTION()
    void DestroyDamageInteractParticle(UNiagaraComponent* ParticleSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Blink() const;
    

    // Fix for true pure virtual functions not being implemented
};

