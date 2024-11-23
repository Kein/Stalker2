#include "WeightBar.h"

UWeightBar::UWeightBar() {
    this->BackgroundImage = NULL;
    this->HighlightImage = NULL;
    this->DifferenceImage = NULL;
    this->TrianglePointer = NULL;
    this->BarOverlay = NULL;
    this->CurrentWeightText = NULL;
    this->MaxWeightText = NULL;
    this->CurrentWeightTextPosition = 0.00f;
    this->TrianglePosition = 0.00f;
    this->HighlightSegmentEnd = 0.00f;
    this->HighlightOpacity = 0.00f;
    this->DifferenceStart = 0.00f;
    this->DifferenceEnd = 0.00f;
}


