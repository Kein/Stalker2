#include "HintViewSettings.h"

FHintViewSettings::FHintViewSettings() {
    this->MappingContext = EMappingContext::None;
    this->InputMappingIndex = 0;
    this->ProgressType = EHintProgressType::NoProgress;
    this->HintHeight = 0.00f;
}

