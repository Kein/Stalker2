#include "AnimWeaponSwingContainer.h"

FAnimWeaponSwingContainer::FAnimWeaponSwingContainer() {
    this->ItemRotationCurve = NULL;
    this->ItemHorizontalTranslationShiftCurve = NULL;
    this->ItemSocketHorizontalTranslationShiftCurve = NULL;
    this->ItemVerticalTranslationShiftCurve = NULL;
    this->ItemExtraVerticalTranslationShiftCurve = NULL;
    this->HorizontalItemTranslationInterpSpeed = 0.00f;
    this->VerticalItemTranslationInterpSpeed = 0.00f;
    this->ItemRotationInterpSpeed = 0.00f;
}

