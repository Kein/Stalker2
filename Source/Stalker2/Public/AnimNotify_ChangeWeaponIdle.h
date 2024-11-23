#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimationAimState.h"
#include "EShutterState.h"
#include "EWeaponCustomAdditionalIdle.h"
#include "EWeaponIdleState.h"
#include "EWeaponIdleType.h"
#include "AnimNotify_ChangeWeaponIdle.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_ChangeWeaponIdle : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWeaponIdleState WeaponIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EShutterState NewShutterState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NewJamIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWeaponIdleType NewUnderbarrelState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimationAimState NewAimState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWeaponCustomAdditionalIdle AdditionalType;
    
    UAnimNotify_ChangeWeaponIdle();

};

