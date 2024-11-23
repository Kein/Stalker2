#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElectroAnomalyBakedDataFloat.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FElectroAnomalyBakedDataFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 CirclePointsCount;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector3f> TraceStartPoints;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector3f> TraceEndPoints;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector3f> TraceUpVectors;
    
    FElectroAnomalyBakedDataFloat();
};

