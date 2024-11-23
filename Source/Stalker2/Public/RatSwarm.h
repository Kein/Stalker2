#pragma once
#include "CoreMinimal.h"
#include "Agent.h"
#include "RatSwarm.generated.h"

class UAISwarmComponent;
class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS()
class STALKER2_API ARatSwarm : public AAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* RatUnitsAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* LocomotionUnitsAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* DiedUnitsAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* RatVoice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* RatLocomotionVoice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* AlertState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* AttackState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* EatingState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkSwitchValue* IdleState;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAISwarmComponent* RatsMeshComponent;
    
public:
    ARatSwarm(const FObjectInitializer& ObjectInitializer);

};

