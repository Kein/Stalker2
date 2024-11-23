#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BoneContainer.h"
#include "EAttachItemType.h"
#include "AnimNotifyState_AttachItemInteractAction.generated.h"

class UMeshComponent;
class UStreamableRenderAsset;

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_AttachItemInteractAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttachItemType AttachItemType;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequiredItemIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStreamableRenderAsset* MeshToAttach;
    
private:
    UPROPERTY(Instanced)
    UMeshComponent* AttachedMesh;
    
public:
    UAnimNotifyState_AttachItemInteractAction();

};

