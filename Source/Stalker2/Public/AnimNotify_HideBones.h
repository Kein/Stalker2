#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EBoneInteractionType.h"
#include "AnimNotify_HideBones.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_HideBones : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBoneInteractionType BoneInteractionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ParentBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ChildAttachName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHideBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AmmoCount;
    
    UAnimNotify_HideBones();

};

