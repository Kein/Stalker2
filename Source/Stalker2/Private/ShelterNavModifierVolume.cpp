#include "ShelterNavModifierVolume.h"
#include "NavAreas/NavArea_Default.h"

AShelterNavModifierVolume::AShelterNavModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Default::StaticClass();
}


