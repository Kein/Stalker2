#pragma once
#include "CoreMinimal.h"
#include "SwarmInstanceSimulationConfig.generated.h"

USTRUCT(BlueprintType)
struct FSwarmInstanceSimulationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AvoidenceRadius;
    
    UPROPERTY(EditAnywhere)
    float AlignmentRadius;
    
    UPROPERTY(EditAnywhere)
    float CohesionRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxForce;
    
    UPROPERTY(EditAnywhere)
    float SeparationWeight;
    
    UPROPERTY(EditAnywhere)
    float AlignmentWeight;
    
    UPROPERTY(EditAnywhere)
    float CohesionWeight;
    
    UPROPERTY(EditAnywhere)
    float AttractionPointWeight;
    
    UPROPERTY(EditAnywhere)
    float FlowWeight;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float LinearDrag;
    
    UPROPERTY(EditAnywhere)
    float HeightDisplacementRadius;
    
    UPROPERTY(EditAnywhere)
    float HeightDisplacementAmmount;
    
    UPROPERTY(EditAnywhere)
    float MaxHeightDisplacement;
    
    UPROPERTY(EditAnywhere)
    float ImpulseFriction;
    
    UPROPERTY(EditAnywhere)
    FName VATAnimation;
    
    STALKER2_API FSwarmInstanceSimulationConfig();
};

