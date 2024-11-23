#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* CharacterLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    STALKER2_API FCharacterWeaponAnimations();
};

