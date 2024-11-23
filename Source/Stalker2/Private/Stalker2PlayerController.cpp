#include "Stalker2PlayerController.h"

AStalker2PlayerController::AStalker2PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->RelevanceFOVADD = 5.00f;
    this->GuaranteedRelevanceDistance = 500.00f;
}


