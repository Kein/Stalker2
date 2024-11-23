#pragma once
#include "CoreMinimal.h"
#include "EWeaponIdleType.h"
#include "ComplexAttachAnimations.generated.h"

class UAnimMontage;
class UPlayerFirearmAnimCollection;

USTRUCT(BlueprintType)
struct FComplexAttachAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWeaponIdleType WeaponIdleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachAttachingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachDetachingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* CharacterAttachModeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* WeaponAttachModeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachAttachModeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* CharacterAttachModeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* WeaponAttachModeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachAttachModeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsBindedToWeaponBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* CharacterAttachShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* WeaponAttachShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachAttachShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* CharacterAttachReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* WeaponAttachReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachAttachReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* CharacterAttachReloadTactical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* WeaponAttachReloadTactical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachAttachReloadTactical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AttachAttachShootEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> AttachJamAnimations;
    
    UPROPERTY(EditAnywhere)
    UPlayerFirearmAnimCollection* WeaponAnimCollection;
    
    STALKER2_API FComplexAttachAnimations();
};

