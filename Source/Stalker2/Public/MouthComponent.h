#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MouthComponent.generated.h"

class APC;
class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UMouthComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UCurveFloat> StaminaCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UCurveFloat> HealthCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UCurveFloat> StaminaIntensityCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UCurveFloat> HealthIntensityCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkRtpc> StaminaIntensityRTPC;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkRtpc> HealthIntensityRTPC;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkAudioEvent> BreathInhale;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkAudioEvent> BreathExhale;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkSwitchValue> DefaultBreathType;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAkSwitchValue> HoldBreathBreathType;
    
    UPROPERTY()
    APC* OwnerObj;
    
    UPROPERTY()
    UAkRtpc* StaminaRTPC;
    
    UPROPERTY()
    UAkRtpc* HealthRTPC;
    
    UPROPERTY()
    UCurveFloat* HealthBreathCurve;
    
    UPROPERTY()
    UCurveFloat* StaminaBreathCurve;
    
    UPROPERTY()
    UCurveFloat* HealthBreathIntensityCurve;
    
    UPROPERTY()
    UCurveFloat* StaminaBreathIntensityCurve;
    
    UPROPERTY()
    UAkSwitchValue* DefaultBreathTypeSwitch;
    
    UPROPERTY()
    UAkSwitchValue* HoldBreathBreathTypeSwitch;
    
public:
    UMouthComponent(const FObjectInitializer& ObjectInitializer);

};

