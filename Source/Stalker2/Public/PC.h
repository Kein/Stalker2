#pragma once
#include "CoreMinimal.h"
#include "EPlayerMovementType.h"
#include "Obj.h"
#include "PC.generated.h"

class AActor;
class UAimAssistComponent;
class UAimProcessorComponent;
class UAkRtpc;
class UAnomalyDetectorComponent;
class UCurveFloat;
class UDamageVoiceoverComponent;
class UGAPlayerComponent;
class UGeigerCounterComponent;
class UInteractionComponent;
class UMouthComponent;
class UPlayerInteractionComponent;
class UPlayerItemsSounds;
class UPlayerOpticScopeComponent;
class UPsyNoiseSFXComponent;
class USearchpointDetectorComponent;
class USkeletalMeshComponent;
class UStealthKillComponent;

UCLASS()
class STALKER2_API APC : public AObj {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UPlayerItemsSounds> PlayerItemSounds;
    
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMouthComponent* Mouth;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UDamageVoiceoverComponent* DamageVoiceover;
    
    UPROPERTY(Instanced, Transient)
    UAimAssistComponent* AimAssistComponent;
    
    UPROPERTY(Instanced, Transient)
    UAimProcessorComponent* AimProcessor;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* ShadowMeshComponent;
    
    UPROPERTY(Instanced, Transient)
    UGeigerCounterComponent* GeigerCounterComponent;
    
    UPROPERTY(Instanced, Transient)
    UPsyNoiseSFXComponent* PsyNoiseSFXComponent;
    
    UPROPERTY(Instanced, Transient)
    UAnomalyDetectorComponent* AnomalyDetectorComponent;
    
    UPROPERTY(Instanced, Transient)
    UPlayerOpticScopeComponent* PlayerOpticScopeComponent;
    
    UPROPERTY(Instanced, Transient)
    UPlayerInteractionComponent* PlayerInteractionComponent;
    
    UPROPERTY(Instanced, Transient)
    UStealthKillComponent* StealthKillComponent;
    
    UPROPERTY(Transient)
    AActor* StealthKillTarget;
    
    UPROPERTY(Instanced, Transient)
    USearchpointDetectorComponent* SearchpointDetectorComponent;
    
    UPROPERTY(Instanced, Transient)
    UGAPlayerComponent* GAComponent;
    
    UPROPERTY(EditAnywhere)
    bool InteractionFromBluerint;
    
    UPROPERTY(EditAnywhere)
    double MinObjectInteractImpulse;
    
    UPROPERTY(EditAnywhere)
    double MaxObjectInteractImpulse;
    
    UPROPERTY(EditAnywhere)
    double ObjectInteractDelay;
    
    UPROPERTY(EditAnywhere)
    double MinSpeedToObjectResponse;
    
    UPROPERTY(EditAnywhere)
    float NormalReapeatFPS;
    
    UPROPERTY(EditAnywhere)
    float VelocityMultimplier;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ObjectPenetrationToImpulseCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ObjectMassToImpulseCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ObjectMassToMaxImpulseCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ReduceDamageFromNPCCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EPlayerMovementType AllowedMovementActions;
    
    UPROPERTY(Transient)
    UAkRtpc* PoppyFieldSleepinessParameter;
    
public:
    APC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLegsIKEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionTarget(const UInteractionComponent* Target);
    
    UFUNCTION()
    void PlayInteractionOutAnimation();
    
    UFUNCTION()
    void PlayInteractionInAnimation();
    
    UFUNCTION(BlueprintPure)
    UInteractionComponent* GetInteractionTarget() const;
    
};

