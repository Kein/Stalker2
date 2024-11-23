#pragma once
#include "CoreMinimal.h"
#include "FlashlightComponent.h"
#include "HitReceiver.h"
#include "HeadFlashlightComponent.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UHeadFlashlightComponent : public UFlashlightComponent, public IHitReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAkAudioEvent* FlashlightTurnOnAudioEvent;
    
    UPROPERTY()
    UAkAudioEvent* FlashlightTurnOffAudioEvent;
    
    UPROPERTY()
    UAkAudioEvent* FlashlightBurnOutAudioEvent;
    
public:
    UHeadFlashlightComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

