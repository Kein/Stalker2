#include "DPADSelection.h"

UDPADSelection::UDPADSelection() {
    this->SizeContainer = NULL;
    this->DpadNavigation = EDpadNavigation::Left;
    this->bShouldLoadWidgetSize = false;
    this->WidgetSize = 55.00f;
    this->Dpad_Active = NULL;
}


