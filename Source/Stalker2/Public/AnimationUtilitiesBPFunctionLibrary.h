#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimInteractableData.h"
#include "Templates/SubclassOf.h"
#include "AnimationUtilitiesBPFunctionLibrary.generated.h"

class AObj;
class APC;
class UAnimInstance;
class UAnimMontage;
class UAnimNotify;
class UAnimSequenceBase;
class UInteractionComponent;
class ULODSyncComponent;
class UObject;

UCLASS(BlueprintType)
class UAnimationUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationUtilitiesBPFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerLockState(APC* PC, const bool bLock, const FAnimInteractableData& InteractionData);
    
    UFUNCTION(BlueprintCallable)
    static void SetMontageSectionNextSection(UAnimMontage* Montage, const FName& Section, const FName& NextSection);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshLodSyncComponents(UObject* Object, ULODSyncComponent* LODSyncComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveAnimNotifiesFromInvalidPoints(UAnimSequenceBase* Montage, TSubclassOf<UAnimNotify> NotifyClass, bool bShouldNotifiesBeChangedToBranchingPoint);
    
    UFUNCTION(BlueprintCallable)
    static void LerpPlayerToInteractable(APC* PC, UInteractionComponent* InteractionComponent, const FAnimInteractableData& InteractionData);
    
    UFUNCTION(BlueprintCallable)
    static UAnimInstance* GetCharacterAnimInstance(AObj* Obj);
    
};

