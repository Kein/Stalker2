#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "AttachDetachAnimations.generated.h"

USTRUCT(BlueprintType)
struct FAttachDetachAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations AttachAnimation;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations DetachAnimation;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations DetachTwinMagazineShifted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* AttachAnimBlueprint;
    
    STALKER2_API FAttachDetachAnimations();
};

