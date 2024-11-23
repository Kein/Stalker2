#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "AnimNotifyBase.h"
#include "PrototypeSID.h"
#include "AnimNotify_EquipItemContextualAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotify_EquipItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FPrototypeSID ItemSID;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneToEquip;
    
    UPROPERTY(EditAnywhere)
    bool bForceChangeItemInHand;
    
public:
    UAnimNotify_EquipItemContextualAction();

};

