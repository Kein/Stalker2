#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimationStates.h"
#include "HumanStateReloadAnimations.h"
#include "HumanFirearmInternalAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FHumanFirearmInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations ShootingInHip;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimationStates, FHumanStateReloadAnimations> Reloading;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimationStates, FHumanStateReloadAnimations> ReloadingInCover;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> Melee;
    
    STALKER2_API FHumanFirearmInternalAnimations();
};

