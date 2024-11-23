#pragma once
#include "CoreMinimal.h"
#include "AnimInstancePlayerWeaponBase.h"
#include "AnimPlayerAimingData.h"
#include "AnimInstancePlayerThrowable.generated.h"

class UPlayerThrowableItemAnimCollection;

UCLASS(NonTransient)
class STALKER2_API UAnimInstancePlayerThrowable : public UAnimInstancePlayerWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerThrowableItemAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerAimingData AimingData;
    
public:
    UAnimInstancePlayerThrowable();

};

