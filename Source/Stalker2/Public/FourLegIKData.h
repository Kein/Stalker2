#pragma once
#include "CoreMinimal.h"
#include "BaseLegIKData.h"
#include "LegIKData.h"
#include "FourLegIKData.generated.h"

USTRUCT(BlueprintType)
struct FFourLegIKData : public FBaseLegIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLegIKData FrontLeftFootIKData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLegIKData FrontRightFootIKData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLegIKData BackLeftFootIKData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLegIKData BackRightFootIKData;
    
    STALKER2_API FFourLegIKData();
};

