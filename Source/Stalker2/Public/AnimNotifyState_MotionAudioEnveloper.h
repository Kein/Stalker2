#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_MotionAudioEnveloper.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;

UCLASS(CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotifyState_MotionAudioEnveloper : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* PlayAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* StopAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* MotionSpeedRTPC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinBoneVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxBoneVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InterpolationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowBoneVelocityInfo;
    
private:
    UPROPERTY(Instanced)
    UAkComponent* AttachedAudioComponent;
    
public:
    UAnimNotifyState_MotionAudioEnveloper();

};

