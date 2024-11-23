#include "InputMappingSettingsElementModels.h"

FInputMappingSettingsElementModels::FInputMappingSettingsElementModels() {
    this->IsAnchor = false;
    this->SaveAnchor = false;
    this->Action = NULL;
    this->MappingContext = EMappingContext::None;
    this->IsMappable = false;
    this->IsActive = false;
    this->bHaveBindedActions = false;
}

