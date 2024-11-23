#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_ZombieWeaponEquipState.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_ZombieWeaponEquipState : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEquipped;
    
    UAnimNotify_ZombieWeaponEquipState();

};

