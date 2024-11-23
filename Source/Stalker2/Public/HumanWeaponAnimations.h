#pragma once
#include "CoreMinimal.h"
#include "CharacterWeaponAnimations.h"
#include "HumanHumanAttachAnimBlueprintsBySID.h"
#include "HumanWeaponAnimations.generated.h"

class UHumanAnimCollection;

USTRUCT(BlueprintType)
struct FHumanWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHumanAnimCollection* AnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* HumanAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FHumanHumanAttachAnimBlueprintsBySID> AttachBlueprintbySID;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations EquipWeapon;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations UnequipWeapon;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations EquipWeaponFast;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations UnequipWeaponFast;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations EquipWeaponRelax;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations UnequipWeaponRelax;
    
    STALKER2_API FHumanWeaponAnimations();
};

