#include "FaustBossComponent.h"

UFaustBossComponent::UFaustBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InvulnerablePhysicalMaterial = NULL;
    this->OriginalPhysicalMaterial = NULL;
    this->WoundedDialogPrototypeSID = TEXT("E08_Bossfight_Faust_Comment_FaustWounded");
    this->NumberOfPhases = 3;
}

void UFaustBossComponent::WoundedBark() {
}


