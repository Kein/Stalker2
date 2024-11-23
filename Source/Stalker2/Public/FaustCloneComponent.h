#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnCloneSwitchStartedDelegate.h"
#include "FaustCloneComponent.generated.h"

class UCurveFloat;
class UNiagaraSystem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UFaustCloneComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UCurveFloat* AliveModelDissolveCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DeadModelDissolveCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* AliveModelGroomCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DeadModelGroomCurve;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* CloneSwitchEffect;
    
    UPROPERTY(EditAnywhere)
    float CloneSwitchTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnCloneSwitchStarted OnCloneSwitchStarted;
    
public:
    UFaustCloneComponent(const FObjectInitializer& ObjectInitializer);

};

