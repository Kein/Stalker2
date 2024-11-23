#pragma once
#include "CoreMinimal.h"
#include "CharacterItemWeightedAnimations.h"
#include "ELongIdleType.h"
#include "AnimPlayerBaseWeaponData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerBaseWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ELongIdleType LongIdleType;
    
    UPROPERTY(BlueprintReadOnly)
    FCharacterItemWeightedAnimations InactiveIdle;
    
    UPROPERTY(BlueprintReadOnly)
    float InactiveIdleFrame;
    
    UPROPERTY(BlueprintReadOnly)
    bool bActionSlotActive;
    
    FAnimPlayerBaseWeaponData();
};

