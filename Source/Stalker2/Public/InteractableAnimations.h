#pragma once
#include "CoreMinimal.h"
#include "InteractableAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FInteractableAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* Item;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Character;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CharacterWithDetector;
    
    STALKER2_API FInteractableAnimations();
};

