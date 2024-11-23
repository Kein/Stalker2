#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BoneContainer.h"
#include "AnimNotify_FootIKState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotify_FootIKState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldAffectAllBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> AffectedBones;
    
    UAnimNotify_FootIKState();

};

