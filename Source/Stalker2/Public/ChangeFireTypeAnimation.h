#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EFireType.h"
#include "ChangeFireTypeAnimation.generated.h"

USTRUCT(BlueprintType)
struct FChangeFireTypeAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFireType FromFireType;
    
    UPROPERTY(EditAnywhere)
    EFireType ToFireType;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations Animations;
    
    STALKER2_API FChangeFireTypeAnimation();
};

