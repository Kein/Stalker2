#include "SingleClickComponent.h"

USingleClickComponent::USingleClickComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNeedSendFailedEvent = false;
}

void USingleClickComponent::SetNeededFailedEvent(const bool bNeedEvent) {
}

bool USingleClickComponent::CanSendFailedEvent() const {
    return false;
}


