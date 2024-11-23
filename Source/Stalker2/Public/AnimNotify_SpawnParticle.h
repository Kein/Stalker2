#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_SpawnParticle.generated.h"

class UFXSystemAsset;

UCLASS(CollapseCategories)
class UAnimNotify_SpawnParticle : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* ParticlePFX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneToSpawnOnName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsAttachToBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bListenCollision;
    
    UAnimNotify_SpawnParticle();

};

