#pragma once
#include "CoreMinimal.h"
#include "BaseLegIKData.h"
#include "LegIKData.h"
#include "TwoLegIKData.generated.h"

USTRUCT(BlueprintType)
struct FTwoLegIKData : public FBaseLegIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLegIKData LeftFootIKData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLegIKData RightFootIKData;
    
    STALKER2_API FTwoLegIKData();
};

