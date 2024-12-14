#include "PossessedObjectEventData.h"

UPossessedObjectEventData::UPossessedObjectEventData() {
}

float UPossessedObjectEventData::GetVFXSize() const {
    return 0.0f;
}

AActor* UPossessedObjectEventData::GetPossessedObject() const {
    return NULL;
}

FVector UPossessedObjectEventData::GetBoundsOffset() const {
    return FVector{};
}


