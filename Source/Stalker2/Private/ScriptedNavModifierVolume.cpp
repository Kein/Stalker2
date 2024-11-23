#include "ScriptedNavModifierVolume.h"
#include "NavAreas/NavArea_Default.h"

AScriptedNavModifierVolume::AScriptedNavModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Default::StaticClass();
    this->TargetNavArea = NULL;
}

void AScriptedNavModifierVolume::Deactivate() {
}

void AScriptedNavModifierVolume::Activate() {
}


