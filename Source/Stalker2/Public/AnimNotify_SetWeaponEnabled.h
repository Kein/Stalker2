#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "AnimNotify_SetWeaponEnabled.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_SetWeaponEnabled : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnabled;
    
    UAnimNotify_SetWeaponEnabled();

};

