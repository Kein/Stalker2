#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "NiagaraDataInterfaceExport.h"
#include "UIDActorComponent.h"
#include "WeaponAttachMeshesData.h"
#include "ItemAppearanceComponent.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;
class UParticleCallbackHandler;
class USkeletalMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UItemAppearanceComponent : public UUIDActorComponent, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* WeaponMeshInHands;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* WeaponMeshUnequipped;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* SecondaryItemInHands;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* ShootingAttachMesh;
    
    UPROPERTY()
    UAkRtpc* SilencerRTPCParameter;
    
    UPROPERTY()
    UAkRtpc* FireIntervalRTPCParameter;
    
    UPROPERTY()
    UAkRtpc* MechModulatorRTPCParameter;
    
    UPROPERTY()
    UAkAudioEvent* LastBulletInClipEvent;
    
    UPROPERTY()
    UAkAudioEvent* ShellSoundEvent;
    
    UPROPERTY()
    UAkSwitchValue* WeaponTypeSwitch;
    
    UPROPERTY()
    UAkAudioEvent* WeaponJamEvent;
    
    UPROPERTY(Instanced)
    UAkComponent* WeaponAkComponent;
    
    UPROPERTY(Transient)
    UAkAudioEvent* KnifeLightAttackImpactEvent;
    
    UPROPERTY(Transient)
    UAkAudioEvent* KnifeHeavyAttackImpactEvent;
    
    UPROPERTY()
    FWeaponAttachMeshesData WeaponInHandsAttachesData;
    
    UPROPERTY()
    FWeaponAttachMeshesData ShadowAttachesData;
    
    UPROPERTY(Transient)
    UParticleCallbackHandler* CollisionHandler;
    
public:
    UItemAppearanceComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnShotSoundStart(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    

    // Fix for true pure virtual functions not being implemented
};

