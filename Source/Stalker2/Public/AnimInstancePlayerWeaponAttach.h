#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimPlayerAimingData.h"
#include "AnimPlayerFirearmData.h"
#include "AnimInstancePlayerWeaponAttach.generated.h"

class UWeaponAttachAnimCollection;

UCLASS(Abstract, NonTransient)
class STALKER2_API UAnimInstancePlayerWeaponAttach : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWeaponAttachAnimCollection* AttachAnimCollection;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerFirearmData FirearmData;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerAimingData AimingData;
    
public:
    UAnimInstancePlayerWeaponAttach();

};

