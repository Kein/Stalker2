#include "TextSettings.h"

FTextSettings::FTextSettings() {
    this->bUseFontColor = false;
    this->Justification = ETextJustify::Left;
    this->bAutoWrap = false;
    this->WrappingTextAt = 0.00f;
    this->TextTransformPolicy = ETextTransformPolicy::None;
    this->LineHeightPercentage = 0.00f;
}

