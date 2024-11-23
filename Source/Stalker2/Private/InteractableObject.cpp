#include "InteractableObject.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"

AInteractableObject::AInteractableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_DefaultUpdateOverlapsMethodDuringLevelStreaming = GetClass()->FindPropertyByName("DefaultUpdateOverlapsMethodDuringLevelStreaming");
    (*p_DefaultUpdateOverlapsMethodDuringLevelStreaming->ContainerPtrToValuePtr<EActorUpdateOverlapsMethod>(this)) = EActorUpdateOverlapsMethod::NeverUpdate;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->bEnabled = false;
    this->bUnbreakable = false;
    this->bBroken = false;
    this->bSelfSufficient = false;
    this->bPrerequisiteRequired = false;
    this->bInteractionActive = true;
    this->bFirstPlay = false;
}

bool AInteractableObject::Toggle() {
    return false;
}

void AInteractableObject::SetUnbreakable(const bool bInUnbreakable) {
}

void AInteractableObject::SetSelfSufficient(const bool bInSelfSufficient) {
}

void AInteractableObject::SetPrerequisiteRequired(const bool bInPrerequisiteRequired) {
}

void AInteractableObject::SetInteractionActive(const bool bInInteractionActive) {
}

void AInteractableObject::SetEnabled(const bool bInEnabled) {
}

void AInteractableObject::SetBroken(const bool bInBroken) {
}

void AInteractableObject::PauseSkeletalComponent(const bool bPause) {
}







bool AInteractableObject::IsUnbreakable() const {
    return false;
}

bool AInteractableObject::IsSelfSufficient() const {
    return false;
}

bool AInteractableObject::IsPrerequisiteRequired() const {
    return false;
}

bool AInteractableObject::IsInteractionActive() const {
    return false;
}

bool AInteractableObject::IsEnabled() const {
    return false;
}

bool AInteractableObject::IsBroken() const {
    return false;
}


