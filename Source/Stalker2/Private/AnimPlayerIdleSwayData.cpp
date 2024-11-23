#include "AnimPlayerIdleSwayData.h"

FAnimPlayerIdleSwayData::FAnimPlayerIdleSwayData() {
    this->BaseCurve = NULL;
    this->StaminaAmplitudeCurve = NULL;
    this->StaminaCycleTimeCurve = NULL;
    this->InitialDelay = 0.00f;
    this->StandCycleTimeModifier = 0.00f;
    this->StandAmplitudeXModifier = 0.00f;
    this->StandAmplitudeYModifier = 0.00f;
    this->CrouchCycleTimeModifier = 0.00f;
    this->CrouchAmplitudeXModifier = 0.00f;
    this->CrouchAmplitudeYModifier = 0.00f;
    this->MoveCycleTimeModifier = 0.00f;
    this->MoveAmplitudeXModifier = 0.00f;
    this->MoveAmplitudeYModifier = 0.00f;
    this->Alpha = 0.00f;
    this->ActiveCurve = NULL;
    this->InterpSpeed = 0.00f;
}

