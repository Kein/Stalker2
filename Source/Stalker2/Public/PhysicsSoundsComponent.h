#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BusVolumeDataReceiver.h"
#include "HitReceiver.h"
#include "PhysicsSoundsComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPhysicsSoundsComponent : public UActorComponent, public IHitReceiver, public IBusVolumeDataReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString PhysicsInteractionPrototypeSID;
    
    UPROPERTY(Transient)
    UAkAudioEvent* PhysicalObjectAudioEventPlay;
    
    UPROPERTY(Transient)
    UAkAudioEvent* PhysicalObjectAudioEventStop;
    
    UPROPERTY(Transient)
    UAkSwitchValue* DraggingParameterSwitch;
    
    UPROPERTY(Transient)
    UAkSwitchValue* RollingParameterSwitch;
    
    UPROPERTY(Transient)
    UAkSwitchValue* HitParameterSwitch;
    
    UPROPERTY(Transient)
    UAkRtpc* PhysicalObjectContinuousSpeedRTPC;
    
    UPROPERTY(Transient)
    UAkRtpc* PhysicalObjectInstantSpeedRTPCParameter;
    
    UPROPERTY(Transient)
    UAkRtpc* WaterDepthRtpc;
    
    UPROPERTY(Instanced, Transient)
    UAkComponent* AkAudioComponent;
    
public:
    UPhysicsSoundsComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

