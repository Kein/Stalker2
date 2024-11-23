#include "UIWarningSettings.h"

FUIWarningSettings::FUIWarningSettings() {
    this->IsGlobalEnable = false;
    this->WorningType = UIWorningType::TextLenght;
    this->PerfectTextSize = 0;
    this->bShouldIgnoreTag = false;
    this->RowSize = 0.00f;
    this->PerfectRow = 0;
}

