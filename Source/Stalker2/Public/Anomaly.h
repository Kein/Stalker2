#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "Engine/HitResult.h"
#include "UIDActor_Anomaly.h"
#include "Anomaly.generated.h"

class AActor;
class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class UAkSwitchValue;
class UBoxComponent;
class UGSCNavModifierComponent;
class UNiagaraComponent;
class UPrimitiveComponent;
class UWaterContactController;

UCLASS(Abstract, NotPlaceable)
class STALKER2_API AAnomaly : public AUIDActor_Anomaly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AnomalyAkComponent;
    
    UPROPERTY(BlueprintReadOnly)
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* DieSound;
    
    UPROPERTY(BlueprintReadOnly)
    UAkSwitchValue* IdleSwitch;
    
    UPROPERTY(BlueprintReadOnly)
    UAkSwitchValue* FadeSwitch;
    
    UPROPERTY(BlueprintReadOnly)
    UAkSwitchValue* ActiveSwitch;
    
    UPROPERTY(BlueprintReadOnly)
    UAkSwitchValue* TriggerSwitch;
    
    UPROPERTY(BlueprintReadOnly)
    UAkSwitchValue* FirstPersonSwitch;
    
    UPROPERTY(BlueprintReadOnly)
    UAkSwitchValue* ThirdPersonSwitch;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGSCNavModifierComponent* SpaceRestrictorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* SpaceRestrictorShape;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UWaterContactController* WaterContactController;
    
public:
    AAnomaly(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnRechargeStateStarted();
    
protected:
    UFUNCTION()
    void OnNiagaraFinished(UNiagaraComponent* FinishedNiagara);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnIdleStateStarted();
    
protected:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnDieSoundFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveStateStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivationStateStarted();
    
    UFUNCTION()
    void ForceDeactivate();
    
    UFUNCTION()
    void ForceActivateOnce();
    
    UFUNCTION()
    void ForceActivateEndless();
    
};

