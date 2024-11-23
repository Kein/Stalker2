#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAttackActionType.h"
#include "EShutterState.h"
#include "EWeaponAction.h"
#include "AnimNotify_WeaponAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_WeaponAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWeaponAction WeaponAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableTwinMagazineShift;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EShutterState ForcedIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAttackActionType AttachIdleType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowBulletMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUnlocked;
    
    UAnimNotify_WeaponAction();

};

