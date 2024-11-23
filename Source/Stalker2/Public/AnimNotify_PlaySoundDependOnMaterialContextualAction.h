#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_PlaySoundDependOnMaterialContextualAction.generated.h"

class UAkAudioEvent;

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_PlaySoundDependOnMaterialContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* ImpactSound;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(EditAnywhere)
    FRotator TraceDirection;
    
    UPROPERTY(EditAnywhere)
    float TraceLength;
    
    UAnimNotify_PlaySoundDependOnMaterialContextualAction();

};

