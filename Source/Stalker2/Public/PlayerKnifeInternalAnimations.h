#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimStealthKillPose.h"
#include "PlayerKnifeInternalAnimations.generated.h"

USTRUCT(BlueprintType)
struct FPlayerKnifeInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations Hit;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations OneHandHit;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimStealthKillPose, FCharacterWeaponAnimations> StealthKills;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations PlayingWithKnife;
    
    STALKER2_API FPlayerKnifeInternalAnimations();
};

