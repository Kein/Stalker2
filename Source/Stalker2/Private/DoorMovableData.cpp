#include "DoorMovableData.h"

FDoorMovableData::FDoorMovableData() {
    this->OpenAngularSpeed = 0.00f;
    this->OpenAngle = 0.00f;
    this->StealthOpenAngularSpeed = 0.00f;
    this->StealthOpenAngle = 0.00f;
    this->DoorMeshComponent = NULL;
    this->InitialAngle = 0.00f;
    this->CurrentDirection = EDoorMoveDirection::CounterClockwise;
}

