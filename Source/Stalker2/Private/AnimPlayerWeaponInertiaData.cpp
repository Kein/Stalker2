#include "AnimPlayerWeaponInertiaData.h"

FAnimPlayerWeaponInertiaData::FAnimPlayerWeaponInertiaData() {
    this->AlphaInterpSpeed = 0.00f;
    this->TranslationInterpSpeed = 0.00f;
    this->RotationInterpSpeed = 0.00f;
    this->InertiaStartThreshold = 0.00f;
    this->RotationCurve = NULL;
    this->TranslationCurve = NULL;
    this->TimeScaleCurve = NULL;
    this->AmplitudeScaleCurve = NULL;
    this->InertiaAlpha = 0.00f;
}

