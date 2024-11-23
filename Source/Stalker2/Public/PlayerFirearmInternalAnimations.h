#pragma once
#include "CoreMinimal.h"
#include "AttachDetachAnimations.h"
#include "ChangeFireTypeAnimations.h"
#include "CharacterWeaponAnimations.h"
#include "EAnimSwitchFireTypeMode.h"
#include "EAnimationShootingTypes.h"
#include "MagazineReloadAnimations.h"
#include "PlayerFirearmInternalAnimations.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FPlayerFirearmInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations ShootingInHip;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations ShootingInAim;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimationShootingTypes, FCharacterWeaponAnimations> Shooting;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FCharacterWeaponAnimations> ShootingWithScope;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FAttachDetachAnimations> AttachingBySID;
    
    UPROPERTY(EditAnywhere)
    TArray<FCharacterWeaponAnimations> Jamming;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FCharacterWeaponAnimations> UniqueAttachJamming;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FMagazineReloadAnimations> Reloading;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FMagazineReloadAnimations> OneHandReloading;
    
    UPROPERTY(EditAnywhere)
    FCharacterWeaponAnimations MeleeAnimation;
    
    UPROPERTY(EditAnywhere)
    TMap<EAnimSwitchFireTypeMode, FChangeFireTypeAnimations> SwitchFireType;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* PickUpItem;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* CharacterHipIdleSequence;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* WeaponHipIdleSequence;
    
    STALKER2_API FPlayerFirearmInternalAnimations();
};

