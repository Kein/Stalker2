#pragma once
#include "CoreMinimal.h"
#include "InjectorAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FInjectorAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* PlayerHealAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* HumanHealAnimation;
    
    STALKER2_API FInjectorAnimations();
};

