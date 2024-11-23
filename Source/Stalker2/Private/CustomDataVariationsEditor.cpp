#include "CustomDataVariationsEditor.h"

UCustomDataVariationsEditor::UCustomDataVariationsEditor() {
    this->ParameterID = 0;
    this->VariationStartingIndex = 0;
    this->VariationCount = 0;
    this->bShouldBeAppliedOnMesh = true;
    this->Distribution = ECustomDataDistribution::Uniform;
}


