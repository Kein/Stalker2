#include "ContextualNavLinkProxy.h"

AContextualNavLinkProxy::AContextualNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
    this->bSmartLinkIsRelevant = true;
}

void AContextualNavLinkProxy::OnStartUsingCustomLink(AActor* MovingActor, const FVector& DestinationPoint) {
}


