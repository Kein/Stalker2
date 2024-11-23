#include "ModioCommonProgressBar.h"
#include "Templates/SubclassOf.h"

UModioCommonProgressBar::UModioCommonProgressBar() {
    this->ModioStyle = NULL;
}

void UModioCommonProgressBar::SetStyle(TSubclassOf<UModioCommonProgressBarStyle> InStyle) {
}


