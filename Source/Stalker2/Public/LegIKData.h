#pragma once
#include "CoreMinimal.h"
#include "LegIKData.generated.h"

USTRUCT(BlueprintType)
struct FLegIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootSocketName;
    
    STALKER2_API FLegIKData();
};

