#include "GameplayPhysicalMaterial.h"

UGameplayPhysicalMaterial::UGameplayPhysicalMaterial() {
    this->bAllowCustomPhysicalMaterialType = false;
    this->CustomPhysicalMaterialType = EPhysicalMaterialType::Default;
}


