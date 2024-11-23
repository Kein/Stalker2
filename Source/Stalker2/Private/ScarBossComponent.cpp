#include "ScarBossComponent.h"

UScarBossComponent::UScarBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Phases.AddDefaulted(3);
}


