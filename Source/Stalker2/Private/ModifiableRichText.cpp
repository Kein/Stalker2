#include "ModifiableRichText.h"

UModifiableRichText::UModifiableRichText() {
    this->LineHeightPercentage = 1.00f;
    this->RichText = NULL;
    this->bEnableList = false;
    this->PointTag = TEXT("<NoteBody>");
    this->bShoudUseDefaultStyle = false;
    this->bEnableDefaultText = false;
    this->WrappingTextAt = 0.00f;
    this->TagSize = 5;
    this->WrappingTextAtEULA = 900.00f;
    this->bShoudLoadLocalization = true;
}



