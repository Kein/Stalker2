#pragma once
#include "CoreMinimal.h"
#include "InspectArtifactAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FInspectArtifactAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* InspectArtifact;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* InspectArtifactWithBackpack;
    
    STALKER2_API FInspectArtifactAnimations();
};

