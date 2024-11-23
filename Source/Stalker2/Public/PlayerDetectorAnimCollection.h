#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimWeaponSwingContainer.h"
#include "CharacterDetectorAnimations.h"
#include "CharacterDetectorFailedLandingAnimations.h"
#include "CharacterDetectorWeaponAnimations.h"
#include "DetectorToggleFlashlightAnimations.h"
#include "WeaponInertiaContainer.h"
#include "PlayerDetectorAnimCollection.generated.h"

UCLASS(BlueprintType)
class STALKER2_API UPlayerDetectorAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterDetectorAnimations Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterDetectorAnimations Unequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterDetectorAnimations EquipBothHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterDetectorWeaponAnimations WeaponSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterDetectorWeaponAnimations WeaponShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterDetectorWeaponAnimations WeaponAimShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterDetectorFailedLandingAnimations FailedLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDetectorToggleFlashlightAnimations ToggleFlashlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* PlayerAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    FAnimWeaponSwingContainer SwingConfigContainer;
    
    UPROPERTY(EditAnywhere)
    FWeaponInertiaContainer StopSwingInertia;
    
    UPROPERTY(EditAnywhere)
    FWeaponInertiaContainer StopSprintInertia;
    
public:
    UPlayerDetectorAnimCollection();

};

