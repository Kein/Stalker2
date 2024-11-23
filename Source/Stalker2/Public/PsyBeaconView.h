#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionDataInterface.h"
#include "InteractableObject.h"
#include "PsyBeaconView.generated.h"

UCLASS()
class STALKER2_API APsyBeaconView : public AInteractableObject, public IActorInteractionDataInterface {
    GENERATED_BODY()
public:
    APsyBeaconView(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

