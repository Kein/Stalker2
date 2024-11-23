#pragma once
#include "CoreMinimal.h"
#include "CharacterItemWeightedAnimations.h"
#include "PlayerWeaponIdlingAnimations.generated.h"

USTRUCT()
struct FPlayerWeaponIdlingAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TimeToLaunchInactiveIdle;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharacterItemWeightedAnimations> Idles;
    
    STALKER2_API FPlayerWeaponIdlingAnimations();
};

