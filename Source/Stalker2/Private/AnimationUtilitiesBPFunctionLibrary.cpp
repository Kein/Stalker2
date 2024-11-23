#include "AnimationUtilitiesBPFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UAnimationUtilitiesBPFunctionLibrary::UAnimationUtilitiesBPFunctionLibrary() {
}

void UAnimationUtilitiesBPFunctionLibrary::SetPlayerLockState(APC* PC, const bool bLock, const FAnimInteractableData& InteractionData) {
}

void UAnimationUtilitiesBPFunctionLibrary::SetMontageSectionNextSection(UAnimMontage* Montage, const FName& Section, const FName& NextSection) {
}

void UAnimationUtilitiesBPFunctionLibrary::RefreshLodSyncComponents(UObject* Object, ULODSyncComponent* LODSyncComponent) {
}

bool UAnimationUtilitiesBPFunctionLibrary::MoveAnimNotifiesFromInvalidPoints(UAnimSequenceBase* Montage, TSubclassOf<UAnimNotify> NotifyClass, bool bShouldNotifiesBeChangedToBranchingPoint) {
    return false;
}

void UAnimationUtilitiesBPFunctionLibrary::LerpPlayerToInteractable(APC* PC, UInteractionComponent* InteractionComponent, const FAnimInteractableData& InteractionData) {
}

UAnimInstance* UAnimationUtilitiesBPFunctionLibrary::GetCharacterAnimInstance(AObj* Obj) {
    return NULL;
}


