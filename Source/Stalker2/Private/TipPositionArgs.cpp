#include "TipPositionArgs.h"

FTipPositionArgs::FTipPositionArgs() {
    this->Row = 0;
    this->Column = 0;
    this->size = 0.00f;
    this->Direction = ESlotDirection::Up;
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

