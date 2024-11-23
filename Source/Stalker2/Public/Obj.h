#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/HitResult.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
// FIXME custom modules
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=GSCMovieSceneActor -FallbackName=GSCMovieSceneActor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=GSCSkeletalAnimationSectionSelectable -FallbackName=GSCSkeletalAnimationSectionSelectable
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneSectionTemplateDecorator -FallbackName=MovieSceneSectionTemplateDecorator
#include "HitBlocker.h"
#include "HitReceiver.h"
#include "ModelCharacter.h"
#include "Obj.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UAttackComponent;
class UCurveVector;
class UDataTable;
class UHeadFlashlightComponent;
class UItemAppearanceComponent;
class ULaserSightComponent;
class UMovementComponentExt;
class UNiagaraComponent;
class UObjWaterContactController;
class UPhysicalAnimationComponent;
class US2TargetMeleeSectorComponent;
class UWetnessComponent;

UCLASS(NotPlaceable) //FIXME  Custom modules
class STALKER2_API AObj : public AModelCharacter, public IHitReceiver, public IVisualLoggerDebugSnapshotInterface { //, public IGSCMovieSceneActor, public IMovieSceneSectionTemplateDecorator, public IGSCSkeletalAnimationSectionSelectable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjTurnedToTarget, bool, bSuccess);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UItemAppearanceComponent* ItemAppearanceComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    TArray<UPhysicalAnimationComponent*> PhysicalAnimationComponents;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UWetnessComponent* WetnessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    US2TargetMeleeSectorComponent* MeleeSectorComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FHitBlocker> HitBlockers;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMovementComponentExt* MovementComponentExt;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UObjWaterContactController* WaterContactController;
    
    UPROPERTY(Instanced, Transient)
    ULaserSightComponent* LaserSightComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* FallingDamageCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* FallingDamageSound;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* FallingDamageEasySoundSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* FallingDamageMediumSoundSwitch;
    
    UPROPERTY(EditDefaultsOnly)
    UAkSwitchValue* FallingDamageHighSoundSwitch;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CutsceneCollisionProfile;
    
    UPROPERTY(Transient)
    UDataTable* AkComponentRetargetTable;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAttackComponent* AttackComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHeadFlashlightComponent* FlashlightComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkAudioRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkAudioHeadComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkAudioPelvisComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkAudioLeftHandComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkAudioRightHandComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* ShootingParticle;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* PostShootingParticle;
    
public:
    AObj(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartCutsceneSequence(const AActor* SynchronizationPoint, const FRotator OverrideRotation);
    
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void EndCutsceneSequence();
    

    // Fix for true pure virtual functions not being implemented
};

