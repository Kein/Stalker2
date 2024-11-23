#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PrototypeSID.h"
#include "MovementComponentExt.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UMovementComponentExt : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FPrototypeSID CameraShakeEffectPrototype;
    
    UPROPERTY(EditAnywhere)
    float MaxCameraShakeDistance;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CameraShakeEffectCurve;
    
    UPROPERTY(Transient)
    UAkRtpc* WaterDepthRtpc;
    
    UPROPERTY(Transient)
    UAkAudioEvent* AkSoundEvent;
    
    UPROPERTY(Transient)
    UAkSwitchValue* AkSurfaceSwitch;
    
    UPROPERTY(Transient)
    UAkSwitchValue* AkMovementBehaviourSwitch;
    
public:
    UMovementComponentExt(const FObjectInitializer& ObjectInitializer);

};

