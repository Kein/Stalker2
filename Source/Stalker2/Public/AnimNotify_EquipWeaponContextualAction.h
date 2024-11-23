#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ContextualActionNotifyWeaponEquipData.h"
#include "AnimNotify_EquipWeaponContextualAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotify_EquipWeaponContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FContextualActionNotifyWeaponEquipData> ItemsToEquip;
    
    UPROPERTY(EditAnywhere)
    bool bForceChangeItemInHand;
    
public:
    UAnimNotify_EquipWeaponContextualAction();

};

