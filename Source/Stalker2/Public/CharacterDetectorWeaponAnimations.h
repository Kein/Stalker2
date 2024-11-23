#pragma once
#include "CoreMinimal.h"
#include "CharacterDetectorWeaponAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterDetectorWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* CharacterLeftHand;
    
    STALKER2_API FCharacterDetectorWeaponAnimations();
};

