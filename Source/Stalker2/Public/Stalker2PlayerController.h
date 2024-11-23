#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Stalker2PlayerController.generated.h"

UCLASS()
class STALKER2_API AStalker2PlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float RelevanceFOVADD;
    
    UPROPERTY(EditDefaultsOnly)
    float GuaranteedRelevanceDistance;
    
public:
    AStalker2PlayerController(const FObjectInitializer& ObjectInitializer);

};

