#pragma once
#include "CoreMinimal.h"
#include "AnimInstancePlayerWeaponBase.h"
#include "AnimPlayerStealthData.h"
#include "AnimInstancePlayerKnife.generated.h"

class UPlayerKnifeAnimCollection;

UCLASS(NonTransient)
class STALKER2_API UAnimInstancePlayerKnife : public UAnimInstancePlayerWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerKnifeAnimCollection* WeaponAnimCollection;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimPlayerStealthData StealthData;
    
public:
    UAnimInstancePlayerKnife();

};

