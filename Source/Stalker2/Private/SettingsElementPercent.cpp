#include "SettingsElementPercent.h"

USettingsElementPercent::USettingsElementPercent() {
    this->Value = 0.00f;
    this->MaxValue = 3.00f;
    this->MinValue = 0.00f;
    this->Step = 0.20f;
    this->bShowPercentSign = false;
}

void USettingsElementPercent::SetValue(const float InValue, const bool bForce) {
}


