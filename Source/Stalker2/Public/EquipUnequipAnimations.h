#pragma once
#include "CoreMinimal.h"
#include "EquipUnequipAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FEquipUnequipAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* Equip;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Unequip;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FastUnequip;
    
    STALKER2_API FEquipUnequipAnimations();
};

