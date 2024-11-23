#include "EditorTools.h"

AEditorTools::AEditorTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEmptyGroupsOutputToMessageLog = true;
    this->bEmptyGroupsOutputToConsole = false;
    this->bRemoveEmptyGroupActors = false;
    this->ZeroBoundsFilter = EZeroBoundsFilter::None;
    this->bZeroBoundsOutputToConsole = false;
    this->bZeroBoundsOutputToMessageLog = false;
    this->bBigClustersOutputToConsole = false;
    this->bBigClustersOutputToMessageLog = true;
    this->bBigClustersExcludeEmptyGroupActors = false;
    this->GridNameForDebug = TEXT("Terrain");
}

void AEditorTools::XVerifyAllActorsForBrokenReference() {
}

void AEditorTools::XRemoveRestoredLabelFromActors() const {
}

void AEditorTools::UpdateVoiceSounds() {
}

void AEditorTools::RemoveEditorContainers() {
}

bool AEditorTools::IsGameWorld(UWorld* GameWorld) {
    return false;
}

bool AEditorTools::IsActorInGameWorld(AActor* ActorToCheck) {
    return false;
}

float AEditorTools::GetSkyLightUpdateDeltaTime() {
    return 0.0f;
}

void AEditorTools::FixAttachMeshes() {
}

void AEditorTools::CheckAllPrototypes() {
}

void AEditorTools::ChangeNotesToTeleportPoints() {
}


