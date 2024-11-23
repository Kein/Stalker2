#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerEffectsSFXComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerEffectsSFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAkAudioEvent* SFXStartEvent;
    
    UPROPERTY()
    UAkAudioEvent* SFXStopEvent;
    
    UPROPERTY()
    UAkRtpc* SFXParameter;
    
public:
    UPlayerEffectsSFXComponent(const FObjectInitializer& ObjectInitializer);

};

