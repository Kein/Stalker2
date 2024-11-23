#pragma once
#include "CoreMinimal.h"
#include "AnimWeaponSwingContainer.h"
#include "CharacterWeaponAnimations.h"
#include "EquipUnequipAnimations.h"
#include "PlayerWeaponIdlingAnimations.h"
#include "WeaponInertiaContainer.h"
#include "WeaponPushbackContainer.h"
#include "PlayerWeaponAnimations.generated.h"

class UAnimMontage;
class UPlayerAnimCollection;
class UPlayerFirearmAnimCollection;

USTRUCT(BlueprintType)
struct FPlayerWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPlayerAnimCollection* AnimCollection;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, UPlayerFirearmAnimCollection*> AttachWeaponAnimCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* PlayerAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations EquipWeapon;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations UnequipWeapon;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* AttachSelectorUnequip;
    
    UPROPERTY(EditAnywhere)
    FEquipUnequipAnimations RemoveReturnLeftHand;
    
    UPROPERTY(EditAnywhere)
    FAnimWeaponSwingContainer WeaponSwingConfigInHip;
    
    UPROPERTY(EditAnywhere)
    FAnimWeaponSwingContainer WeaponSwingConfigInAim;
    
    UPROPERTY(EditAnywhere)
    FWeaponInertiaContainer StopHipSwingInertia;
    
    UPROPERTY(EditAnywhere)
    FWeaponInertiaContainer StopAimSwingInertia;
    
    UPROPERTY(EditAnywhere)
    FWeaponInertiaContainer SprintStopInertia;
    
    UPROPERTY(EditAnywhere)
    FWeaponPushbackContainer HipPushback;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FWeaponPushbackContainer> AimPushback;
    
    UPROPERTY(EditAnywhere)
    FPlayerWeaponIdlingAnimations InactiveLongIdles;
    
    STALKER2_API FPlayerWeaponAnimations();
};

