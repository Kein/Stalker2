#pragma once
#include "CoreMinimal.h"
#include "MaterialScalarDrivingProperties.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct FMaterialScalarDrivingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* MaterialCollectionToUpdate;
    
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float InterpolationTime;
    
    UPROPERTY(EditAnywhere)
    float TargetValue;
    
    STALKER2_API FMaterialScalarDrivingProperties();
};

