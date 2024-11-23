#include "CinematicManager.h"

UCinematicManager::UCinematicManager() {
    this->PlayerParametersMPC = NULL;
}

void UCinematicManager::OnSubtitleSectionStart(const FString& NPCSID, const FString& DialogSID) {
}

void UCinematicManager::OnSubtitleSectionEnd() {
}

void UCinematicManager::OnKeyFrameSectionStart(const FCinematicSectionParams& InCinematicSectionParams) {
}

void UCinematicManager::OnKeyFrameSectionEnd(FName SectionName) {
}

void UCinematicManager::OnHapticFeedbackStart(FGameplayTag ForceFeeedbackEffectTag) const {
}

void UCinematicManager::OnHapticFeedbackEnd(FGameplayTag ForceFeeedbackEffectTag) const {
}

void UCinematicManager::OnFadeScreenEnd(bool bFadeOut, FLinearColor FadeTargetColor, float FadeAmount, float FadeTime) {
}

void UCinematicManager::OnCinematicStopped() {
}

void UCinematicManager::OnCinematicStarted() {
}


