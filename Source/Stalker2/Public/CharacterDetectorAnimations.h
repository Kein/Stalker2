#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "CharacterDetectorAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterDetectorAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FCharacterWeaponAnimations> CharacterWithWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Detector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Weapon;
    
    STALKER2_API FCharacterDetectorAnimations();
};

