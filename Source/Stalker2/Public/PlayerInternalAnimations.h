#pragma once
#include "CoreMinimal.h"
#include "EAgentType.h"
#include "EquipUnequipAnimations.h"
#include "PlayerInternalAnimations.generated.h"

class UAnimMontage;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FPlayerInternalAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* PickingUpItem;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* JumpLand;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* JumpLandLowCrouch;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FailedLanding;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ToggleFlashlightStand;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ToggleFlashlightLowCrouch;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* EnterRagdollCurve;
    
    UPROPERTY(EditAnywhere)
    FEquipUnequipAnimations EquipUnequip;
    
    UPROPERTY(EditAnywhere)
    FEquipUnequipAnimations RemoveReturnLeftHand;
    
    UPROPERTY(EditAnywhere)
    TMap<EAgentType, UAnimMontage*> DragWeaponByNPC;
    
    STALKER2_API FPlayerInternalAnimations();
};

