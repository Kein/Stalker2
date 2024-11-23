#include "LadderComponent.h"

ULadderComponent::ULadderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnfoldingCurve = NULL;
    this->HorizontalOffsetCurve = NULL;
    this->bTopBlocked = false;
    this->bLadderHidden = false;
}

void ULadderComponent::SetTopBlocked(const bool InbTopBlocked) {
}

void ULadderComponent::SetLadderHidden(const bool InbLadderHidden) {
}

bool ULadderComponent::IsTopBlocked() const {
    return false;
}

bool ULadderComponent::IsLadderHidden() const {
    return false;
}


