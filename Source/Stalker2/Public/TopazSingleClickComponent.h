#pragma once
#include "CoreMinimal.h"
#include "SingleClickComponent.h"
#include "TopazSingleClickComponent.generated.h"

class ATopazScanner;
class UInteractableAnimCollection;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTopazSingleClickComponent : public USingleClickComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float InteractionAngle;
    
    UPROPERTY(EditDefaultsOnly)
    UInteractableAnimCollection* ActivationAnimCollection;
    
    UPROPERTY(EditDefaultsOnly)
    UInteractableAnimCollection* CollectAnimCollection;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCustomInteractText;
    
    UPROPERTY(Transient)
    ATopazScanner* OwnerScanner;
    
public:
    UTopazSingleClickComponent(const FObjectInitializer& ObjectInitializer);

};

