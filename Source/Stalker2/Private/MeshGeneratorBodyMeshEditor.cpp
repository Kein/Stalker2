#include "MeshGeneratorBodyMeshEditor.h"

UMeshGeneratorBodyMeshEditor::UMeshGeneratorBodyMeshEditor() {
    this->Weight = 0.00f;
    this->bIsSkeletal = true;
    this->Type = EBodyMeshType::Attach;
    this->bUseCustomLODSync = false;
    this->LODSyncOption = ESyncOption::Drive;
}


