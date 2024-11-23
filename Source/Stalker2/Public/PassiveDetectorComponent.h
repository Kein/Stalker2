#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PassiveDetectorComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPassiveDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UAkRtpc* DangerLevelSoundParameter;
    
    UPROPERTY(Transient)
    UAkAudioEvent* DetectorWorkSFX;
    
    UPROPERTY(Transient)
    UCurveFloat* DetectorWorkCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* SignalCurve;
    
public:
    UPassiveDetectorComponent(const FObjectInitializer& ObjectInitializer);

};

