#pragma once
#include "CoreMinimal.h"
#include "AnimInstancePlayerWeaponBase.h"
#include "AnimPlayerAimingData.h"
#include "AnimPlayerFirearmData.h"
#include "AnimInstancePlayerFirearm.generated.h"

class UPlayerFirearmAnimCollection;

UCLASS(NonTransient)
class STALKER2_API UAnimInstancePlayerFirearm : public UAnimInstancePlayerWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerFirearmAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimPlayerAimingData AimingData;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerFirearmData FirearmData;
    
public:
    UAnimInstancePlayerFirearm();

};

