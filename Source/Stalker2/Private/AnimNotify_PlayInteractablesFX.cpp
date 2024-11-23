#include "AnimNotify_PlayInteractablesFX.h"

UAnimNotify_PlayInteractablesFX::UAnimNotify_PlayInteractablesFX() {
    this->InteractFXType = EInteractFXType::None;
}

TArray<FString> UAnimNotify_PlayInteractablesFX::GetAvailableBones() const {
    return TArray<FString>();
}


