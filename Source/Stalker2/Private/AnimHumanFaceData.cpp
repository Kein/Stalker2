#include "AnimHumanFaceData.h"

FAnimHumanFaceData::FAnimHumanFaceData() {
    this->CurrentDeathAnimation = NULL;
    this->LastHitAnimation = NULL;
    this->CurrentWoundedAnimation = NULL;
    this->LastWoundedAnimation = NULL;
    this->CurrentFaceMask = EEmotionalFaceMasks::None;
    this->FaceMeshComponent = NULL;
    this->CharacterSkeletalMeshComponent = NULL;
    this->HeadType = EAnimationHeadTypes::SK_fac_20_00;
    this->bAlive = false;
    this->bIsThroatAnimationsEnabled = false;
    this->bIsThroatAnimationPlaying = false;
    this->bPlayingDummyDialogAnimation = false;
    this->bIsFaceAnimBlendingOut = false;
    this->bIsFaceAnimPlaying = false;
    this->bIsFaceTongueAnimPlaying = false;
    this->DisableIdleTongueCurveValue = 0.00f;
}

