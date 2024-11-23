#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_SpawnParticleTimeline.generated.h"

class UFXSystemAsset;

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_SpawnParticleTimeline : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* ParticlePFX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneToSpawnOnName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsAttachToBone;
    
    UAnimNotifyState_SpawnParticleTimeline();

};

