#include "CooldownZone.h"
#include "NavAreas/NavArea_Default.h"

ACooldownZone::ACooldownZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Default::StaticClass();
    this->RestrictionArea = NULL;
    this->CooldownTime = 20.00f;
}


