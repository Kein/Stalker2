#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElectroAnomalyBakedData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FElectroAnomalyBakedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 CirclePointsCount;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> TraceStartPoints;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> TraceEndPoints;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> TraceUpVectors;
    
    FElectroAnomalyBakedData();
};

