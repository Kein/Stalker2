#include "MovementModeChangedEventData.h"

UMovementModeChangedEventData::UMovementModeChangedEventData() {
    this->NewMovementBehavior = EMovementBehaviour::None;
    this->OldMovementBehavior = EMovementBehaviour::None;
}


