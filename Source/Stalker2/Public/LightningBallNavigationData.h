#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightningBallNavigationData.generated.h"

USTRUCT()
struct STALKER2_API FLightningBallNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsPatrolPoint;
    
    UPROPERTY(EditAnywhere)
    FVector PointLocation;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> NeighborPoints;
    
    FLightningBallNavigationData();
};

